#define in1 5 //D1
#define in2 4 //D2
#define in3 14 //D5
#define in4 12 //D6
#define ENA 0 //D3
#define ENB 2 //D4

#define IR 13 //D7
#define Bat A0 //A0

#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "AutoPilotPage.h"
#include "ManualPage.h"
/* Put your SSID & Password */
const char* ssid = "IR Robot"; //Access Point SSID
const char* password= "irmobilerobot"; //Access Point Password

IRrecv irrecv(IR);
decode_results results;

//Web parameters
String start;
String mode;
String unlock;
String direction;

//IR Variable
int ir_addr;
int ir_cmd;
String ir_code;

//Move pattern
int round_nf;


/* Put IP Address details */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

AsyncWebServer server(80);
void notFound(AsyncWebServerRequest *request) 
{
  request->send(404, "text/plain", "The page not found");
}

String battery_fn(){
  int Batt_ana = map(analogRead(Bat), 0, 700, 0, 100);
  String percent = "";
  percent += String(Batt_ana);
  //Serial.println(analogRead(Bat));
  return percent;
}

String ir_fn(){
  String irdetect = "Adress : ";
  irdetect += String(ir_addr);
  irdetect += ", Command : ";
  irdetect += String(ir_cmd);
  irdetect += ", HEX : ";
  irdetect += ir_code;
  return irdetect;
}
void forward(){
  analogWrite(ENA,1023);
  analogWrite(ENB,1023);
  Serial.println("top");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void turnleft(){
  analogWrite(ENB,150);
  Serial.println("left");
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void turnright(){
  analogWrite(ENA,150);
  Serial.println("right");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void turnright_around(){
  analogWrite(ENA,150);
  analogWrite(ENB,150);
  delay(50);
  analogWrite(ENA,120);
  analogWrite(ENB,120);
  Serial.println("right around");
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void backward(){
  analogWrite(ENA,1023);
  analogWrite(ENB,1023);
  Serial.println("bottom");
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void stop(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void setup() {
  Serial.begin(115200);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IR, INPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(ENA,0);
  analogWrite(ENB,0);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    Serial.println("On Connect!!");
    Serial.println("Home Mode..");
    request->send_P(200, "text/html", AutoPilotPage);
  });
  server.on("/start", HTTP_GET, [](AsyncWebServerRequest *request){
    Serial.println("AutoPilot Mode..");
    if (request->hasParam("mode") && request->hasParam("value")) {
      mode = request->getParam("mode")->value();
      start = request->getParam("value")->value();
    }
    else {
      mode = "No message sent";
      unlock = "No message sent";
    }
    request->send_P(200, "text/html", AutoPilotPage);       //Response to the HTTP request
  });
  server.on("/manual", HTTP_GET, [](AsyncWebServerRequest *request){
    Serial.println("Manual Mode..");
    start = "0";
    if (request->hasParam("mode") && request->hasParam("value") && request->hasParam("ctrl")) {
      mode = request->getParam("mode")->value();
      unlock = request->getParam("value")->value();
      direction = request->getParam("ctrl")->value();
    }
    else {
      mode = "No message sent";
      unlock = "No message sent";
      direction = "No message sent";
    }
    
    Serial.println("arg 1 : " + mode + ", arg 2 : " + unlock + ", arg 3 : " + direction);

    request->send_P(200, "text/html", ManualPage);       //Response to the HTTP request

  });
  server.on("/battery", HTTP_GET, [](AsyncWebServerRequest *request){

    request->send_P(200, "text/plain", battery_fn().c_str());
  });
  server.on("/ir", HTTP_GET, [](AsyncWebServerRequest *request){

    request->send_P(200, "text/plain", ir_fn().c_str());
  });
  server.onNotFound(notFound);

  irrecv.enableIRIn();  // Start the receiver
  server.begin();
  Serial.println();
  Serial.println("HTTP server started");
}

void loop() {

  if(mode == "auto"){
      
    if(start == "on"){
      switch(round_nf){
        case 0:
        Serial.print("pattern 0 : right");
        if (irrecv.decode(&results)) {
          // print() & println() can't handle printing long longs. (uint64_t)
          
          if(results.address>0 || String(results.value,HEX) == "ffffffffffffffff" || results.command>0){
            round_nf = 0; 
            ir_addr = results.address;
            ir_cmd = results.command;
            ir_code = String(results.value,HEX);

            forward();
            delay(500);

            }else{
              ir_addr = 0;
              ir_cmd = 0;
              ir_code = "not found";

              round_nf +=1;
              turnright();
              delay(100);
            }
          }  
          else{
            ir_addr = 0;
            ir_cmd = 0;
            ir_code = "not found";

            round_nf +=1;
            turnright();
            delay(100);
          }
          irrecv.resume();  // Receive the next value
          break;
        case 1:
          Serial.print("pattern 1 : left");
          if (irrecv.decode(&results)) {
          // print() & println() can't handle printing long longs. (uint64_t)
          
          if(results.address>0 || String(results.value,HEX) == "ffffffffffffffff" || results.command>0){
            round_nf = 0; 
            ir_addr = results.address;
            ir_cmd = results.command;
            ir_code = String(results.value,HEX);
            
            forward();
            delay(500);
            }else{
              ir_addr = 0;
              ir_cmd = 0;
              ir_code = "not found";

              round_nf +=1;
              turnleft();
              delay(200);
            }
          }  
          else{
            ir_addr = 0;
            ir_cmd = 0;
            ir_code = "not found";

            round_nf +=1;
            turnleft();
            delay(200);
          }
          irrecv.resume();  // Receive the next value
          break;
        case 2:
          Serial.print("pattern 2 : turn around");
          if (irrecv.decode(&results)) {
          // print() & println() can't handle printing long longs. (uint64_t)
          
          if(results.address>0 || String(results.value,HEX) == "ffffffffffffffff" || results.command>0){
            
            round_nf = 0;            
            ir_addr = results.address;
            ir_cmd = results.command;
            ir_code = String(results.value,HEX);
            
            forward();
            delay(500);
            }else{
              ir_addr = 0;
              ir_cmd = 0;
              ir_code = "not found";

              turnright_around();

            }
          }  
          else{
            ir_addr = 0;
            ir_cmd = 0;
            ir_code = "not found";

            turnright_around();

          }
          irrecv.resume();  // Receive the next value
          break;
      }
      
    }else{
      //Switch off Auto
      stop();
    }
  }else if(mode == "manual"){
    if(unlock == "on"){
      if(direction == "top"){
        forward();
      }else if(direction == "left"){
        turnleft();
      }else if(direction == "right"){
        turnright();
      }else if(direction == "bottom"){
        backward();
      }else{
        stop();
      }
    }
    else{
      //Switch off Manual
      stop();
    }
  }else{
    //not in any mode stay still 
    stop();
  }

  delay(100);
}


//test parameter
/*
String message = "Number of args received:";
  message += server.args();            //Get number of parameters
  message += "\n";                            //Add a new line
  for (int i = 0; i < server.args(); i++) {
    message += "Arg nº" + (String)i + " –> ";   //Include the current iteration value
    message += server.argName(i) + ": ";     //Get the name of the parameter
    message += server.arg(i) + "\n";              //Get the value of the parameter
  } 
  Serial.println(message);
*/
//Test IR
/*
      String temp = String(results.value,HEX);
      Serial.print("Address : ");
      Serial.print(results.address);
      Serial.print(", Command : ");
      Serial.print(results.command);
      Serial.print(", HEX : ");
      Serial.println(temp);*/