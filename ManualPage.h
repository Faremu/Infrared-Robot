//=========================================
//HTML + CSS + JavaScript codes for webpage
//=========================================

const char ManualPage[] PROGMEM =
R"rawliteral(
<!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <link href="https://www.cssscript.com/demo/sticky.css" rel="stylesheet" type="text/css">
        <link href="https://unpkg.com/boxicons@2.0.9/css/boxicons.min.css" rel="stylesheet"/>
        <title>IR Mobile Robot</title>
        <style> 
            /* RESET */
            html,
            body,
            div,
            span,
            applet,
            object,
            iframe,
            
            blockquote,
            pre,
            a,
            abbr,
            acronym,
            address,
            big,
            cite,
            code,
            del,
            dfn,
            em,
            img,
            ins,
            kbd,
            q,
            s,
            samp,
            small,
            strike,
            strong,
            sub,
            sup,
            tt,
            var,
            b,
            u,
            i,
            center,
            dl,
            dt,
            dd,
            ol,
            ul,
            li,
            fieldset,
            form,
            label,
            legend,
            table,
            caption,
            tbody,
            tfoot,
            thead,
            tr,
            th,
            td,
            article,
            aside,
            canvas,
            details,
            embed,
            figure,
            figcaption,
            footer,
            header,
            hgroup,
            menu,
            nav,
            output,
            ruby,
            section,
            summary,
            time,
            mark,
            audio,
            video {
            margin: 0;
            padding: 0;
            border: 0;
            font-size: 100%;
            font: inherit;
            vertical-align: baseline;
            }
            /* HTML5 display-role reset for older browsers */
            article,
            aside,
            details,
            figcaption,
            figure,
            footer,
            header,
            hgroup,
            menu,
            nav,
            section {
            display: block;
            }
            body {
            line-height: 1;
            }
            ol,
            ul {
            list-style: none;
            }
            blockquote,
            q {
            quotes: none;
            }
            blockquote:before,
            blockquote:after,
            q:before,
            q:after {
            content: '';
            content: none;
            }
            table {
            border-collapse: collapse;
            border-spacing: 0;
            }


            html{ font-family: Helvetica; display: flex; margin: 0px auto;height: 100%; }
            body{height:100vh;width:100%; margin: 0px;display: flex;flex-direction: row;} 
            h1{color: #444444;margin: 50px auto 30px;} 
            h3{color: #444444;margin-bottom: 1rem;}
            p{padding-top: 4rem;}
            :root {
                --white-color: #fafafb;
                --background-color: #17171e;
                --grey-color: #b5b5be;
                --dark-grey-color: #292932;
                --green: #B5E27C;
                --blue: #6AC3D5;
                --light-green: #95DD62; 
                --grey: #DBD1C7;
                --pink: #D9BCCD;
                --yellow: #DFD379; 
                --red: #D2636E;
                --brown: #9B7188;
                --dark: #53243D;
                --rgbap: rgba(0,0,0,0.2);
                --rgbab: rgba(255,255,255,0.5);
                --stroke: 6px solid #53243D;
                --radius: 50%;
                --gradient-color-red: linear-gradient(90deg, 
                                        hsl(7, 89%, 46%) 15%,
                                        hsl(11, 93%, 68%) 100%);
                --gradient-color-orange: linear-gradient(90deg, 
                                        hsl(22, 89%, 46%) 15%,
                                        hsl(54, 90%, 45%) 100%);
                --gradient-color-yellow: linear-gradient(90deg, 
                                        hsl(54, 89%, 46%) 15%,
                                        hsl(92, 90%, 45%) 100%);
                --gradient-color-green: linear-gradient(90deg, 
                                        hsl(92, 89%, 46%) 15%,
                                        hsl(92, 90%, 68%) 100%);
                                        --text-color: #fff;
                --body-color: hsl(0, 0%, 11%);
                --container-color: hsl(0, 0%, 9%);
                --biggest-font-size: 2.5rem;
                --normal-font-size: .938rem;
                --smaller-font-size: .75rem;
            }
            .side-bar {
                display: flex;
                flex-direction: column;
                z-index: 2;
                width: 23.2rem;
                height: 100%;
                padding: 2.1rem 1.2rem;
                background-color: #17171e;
                position: fixed;
                transition: all 0.5s ease;
                top: 0;
            }
            .logo-name-wrapper {
                position: relative;
                color: #fafafb;
                margin-bottom: 2.1rem;
                display: flex;
            
            }
            .logo-name {
                display: flex;
                align-items: center;
            }
            .logo-name__name {
                margin-left: 0.9rem;
                white-space: nowrap;
            }
            .logo-name__button {
                
                position: absolute;
                top: 50%;
                right: 1rem;
                font-size: 1.8rem;
                transform: translateY(-50%);
                background-color: transparent;
                border: none;
                cursor: pointer;
            }
            .logo-name__icon {
                font-size: 1.8rem;
                color: var(--grey-color);
            }
            .features-list {
                padding-bottom: 1rem;
                border-bottom: 1px solid #292932;
                list-style: none;
            }
            .features-item {
                display: flex;
                align-items: center;
                position: relative;
                padding: 0.5rem 0.9rem;
                margin-bottom: 1.1rem;
                color: var(--grey-color);
                cursor: pointer;
                transition: 0.5s ease;
            }
            .features-item::before {
                transition: 0.5s ease;
                content: '';
                position: absolute;
                left: -1.2rem;
                height: 100%;
                border-left: 3px solid var(--white-color);
                border-radius: 2px;
                opacity: 0;
                visibility: hidden;
            }
            .features-item:hover {
                color: var(--white-color);
                transition: 0.5s ease;
            }
            .features-item:hover::before {
                opacity: 1;
                visibility: unset;
            }
            .features-item-icon {
                padding: 0;
                font-size: 2rem;
            }
            .features-item-text {
                font-size: 1.3rem;
                margin-left: 1.5rem;
                transition: opacity 0.6s ease;
                opacity: 1;
            }
            .inbox-number {
                position: absolute;
                top: 50%;
                right: 0;
                transform: translateY(-50%);
                background-color: #1e75ff;
                padding: 0.5rem 0.9rem;
                border-radius: 0.4rem;
                color: var(--white-color);
                opacity: 1;
                transition: 0.6s linear;
            }
            .inbox-icon {
                position: relative;
            }
            .man-icon{
                position: absolute;
            }
            .inbox-icon .status {
                position: absolute;
                top: 0;
                right: -1px;
                background-color: #1e75ff;
                height: 9px;
                width: 9px;
                border-radius: 50%;
                border: 2px solid var(--white-color);
                opacity: 0;
                transition: 0.6s linear;
            }
            
            
            .tooltip {
                position: absolute;
                top: -2.1rem;
                left: 6.4rem;
        
                background-color: white;
                color: var(--background-color);
                border-radius: 0.4rem;
                padding: 0.5rem 0.9rem;
                font-size: 0.9rem;
                transition: 0s;
                opacity: 0;
                display: none;
                box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
            }
            .side-bar.collapse .message:hover .tooltip,
            .features-item:hover .tooltip{
                
                top: 50%;
                transform: translateY(-50%);
                transition: all 0.5s ease;
                opacity: 1;
            }
            .side-bar.collapse {
                width: 4.5rem;
            }
            .side-bar.collapse .tooltip {
                
                display: block;
            }
            .side-bar.collapse .logo-name,
            .side-bar.collapse .category-header,
            .side-bar.collapse .chat-header,
            .side-bar.collapse .chat-new-btn-text,
            .side-bar.collapse .features-item-text,
            .side-bar.collapse .inbox-number,
            .side-bar.collapse .category-item-text,
            .side-bar.collapse .category-item-number,
            .side-bar.collapse .message-text,
            .side-bar.collapse .chat-item-name,
            .side-bar.collapse .chat-item-number,
            .side-bar.collapse .chat-item-status {
                
                opacity: 0;
                pointer-events: none;
            }


            .side-bar.collapse .logo-name__button {
                
                right: 1.1rem;
            }
            .side-bar.collapse .inbox-icon .status,
            .side-bar.collapse .chat-item-avatar-wrapper::before {
                
                opacity: 1;
            }
            .container {
                margin-left: 12rem;
                padding: 2rem 0% 0% 0rem;
                display: flex;
                width: 800px;
                flex-direction: column;

            }
            .bar{
                background-color: #818181;
                height: 100%;
            }
            .Battery{
                margin-right: 10rem;
                padding: 0rem 2rem 0 6rem;
                display: flex;
                
                flex-direction: column;
                width: 100%;
                
            }
            input {
                display: none;
            }
            button, label {
                cursor: pointer;
                outline: 0;
            }
            button:active {
                transform: scale(.9);
            }

            .center {
            position: relative;
            left: 50%;
            top: 30%;
            transform: translate(-50%,-50%);
            }
            .joystick {
            width: 573px;
            height: 180px;   
            transform-origin: center;
            }
            .left-hand, .right-hand {
            background-color: var(--grey);
            border-radius: var(--radius);
            width: 261px;
            height: 261px;
            border: var(--stroke);
            position: absolute;
            top: 0;

            box-shadow: inset 0 -6px var(--rgbap)

            }
            .right-hand {
            right: 0;
            }
            .body-control {
            background-color: var(--grey);
            border-top: var(--stroke);
            z-index: 9;
            position: absolute;
            width: 315px;
            height: 233px;
            transform: translatex(-50%);
            left:50%;
            top:0; 
            clip-path: polygon(0 0, 100% 0, 71% 100%, 29% 100%);
            text-align: center;

            box-shadow: inset 0px -6px var(--rgbap);
            }
            .stroke-base {
            position: absolute;
            background-color: var(--dark);
            top: 238px;
            z-index: -1;
            width: 315px;
            height: 7px;
            transform: translatex(-50%);
            left:50%;
            }
            .controler {
            border-radius: var(--radius);
            background-color: var(--pink);
            border: var(--stroke);
            position: fixed;
            z-index: 99;
            box-shadow: 0px 6px var(--rgbap), inset 0px 6px var(--rgbab);
            }


            .left-hand .controler {
            width: 163px;
            height: 163px;
            left: 47px;
            top: 49px;
            animation: scale 2s cubic-bezier(.89,.2,0,1.03);
            }


            .left-hand .controler button {
            border: var(--stroke);
            background-color:var(--brown);
            width: 32px;
            height: 32px;
            position: absolute;
            z-index: 9;
            }
            .left-hand .controler button:after {
            content: "◂";
            font-size: 30px;
            font-family: sans-serif;  
            color: var(--dark);
            position: absolute;    
            line-height: 0;
            
            }
            .left-hand .controler button.left:after  {
            left: 5px;
            top: 8px;
            }
            .left-hand .controler button.right:after  {
            right: 5px;
            top: 12px;
            transform: rotate(180deg);
            }
            .left-hand .controler button.top:after  {
            left: 6px;
            top: 12px;
            transform: rotate(90deg);
            }
            .left-hand .controler button.bottom:after  {
            right: 4px;
            bottom: 12px;
            transform: rotate(-90deg);
            }

            .left-hand .controler button.left {
            border-right: none !important;
            box-shadow: inset 0 4px var(--rgbab), inset 0 -4px var(--rgbap);
            top: 50%;
            margin-top: -16px;
            left: 38px;
            }
            .left-hand .controler button.top {
            border-bottom: none !important;
            box-shadow: inset 0 4px var(--rgbab);
            left: 50%;
            margin-left: -16px;
            top: 38px;
            }
            .left-hand .controler button.right {
            border-left: none !important;
            box-shadow: inset 0 4px var(--rgbab), inset 0 -4px var(--rgbap);
            top: 50%;
            margin-top: -16px;
            right: 38px;
            }
            .left-hand .controler button.bottom {
            border-top: none !important;
            box-shadow: inset 0 -4px var(--rgbap);
            left: 50%;
            margin-left: -16px;
            bottom: 38px;
            }

            .left-hand .controler:after, .left-hand .controler:before {
            content: "";
            width: 30px;
            height: 30px;
            background-color: var(--brown);
            position: absolute;
            top: 50%;
            left: 50%;
            margin: -15px;
            z-index: 1;
            }
            .left-hand .controler:before {
            border-radius: var(--radius);
            border: 3px solid var(--dark) ;
            z-index: 99;
            box-sizing: border-box;
            box-shadow: inset 4px 0 var(--rgbab);
            transform: scale(0.8);
            }

            .body-control button {
            width: 18px;
            height: 42px;
            border-radius: 100px;
            border: var(--stroke);
            padding: 0;
            transform: rotate(45deg) translatex(-50%);
            margin: 20px 10px;
            background-color: var(--brown);
            box-shadow: 4px 0px var(--rgbap), inset 2px 0px var(--rgbab);
            position: relative;
            top: 50%;
            animation: starts 1s cubic-bezier(.89,.2,0,1.03); 
            animation-fill-mode: forwards; 
            }
            .body-control button:first-child {
            animation-delay: 0.2s;   
            opacity: 0;
            }
            .body-control:after, .body-control:before {
            content:"";
            position: absolute;
            width: 120px;
            border: 2px dashed var(--dark);
            left: 45%;
            transform: translatex(-50%);
            top:30px;
            }
            .body-control:before {
            top: 50px;
            border-style: solid;
            }

            .right-hand .controler {
            width: 205px;
            height: 205px;
            right: 22px;
            top: 22px;
            animation: scale 2s cubic-bezier(.89,.2,0,1.03) .2s;
            animation-fill-mode: forwards;
            transform: scale(0); 
            }
            .right-hand .controler .actions {
            background-color: var(--grey);
            border-radius: 100px;
            border: var(--stroke);
            box-shadow: 0px 6px var(--rgbap), inset 0px 6px var(--rgbab);
            text-align: center;
            transform: rotate(-45deg);
            position: absolute;
            padding: 5px 5px 1px;
            left: 30px;
            top: 42px;
            
            }
            .right-hand .controler .actions.group2 {
            left: auto;
            top: auto;    
            right: 30px;
            bottom: 42px;
            }

            .right-hand .controler .actions label {
            width: 32px;
            height: 32px;
            border-radius: var(--radius);
            border: 3px solid var(--dark);
            box-shadow: 0px 6px var(--rgbap), inset 0px 6px var(--rgbab);
            transform: scale(0);
            animation-fill-mode: forwards;
            display: inline-block;
            box-sizing: border-box;
            }
            .right-hand .controler .actions label:first-child {
            margin-right: 25px;
            }
            .actions .green {
            background-color: var(--green);
            animation: scale 2s cubic-bezier(.89,.2,0,1.03) 0.5s;
            }
            .actions .blue {
            background-color: var(--blue);
            animation: scale 2s cubic-bezier(.89,.2,0,1.03) 0.7s;
            }
            .actions .yellow {
            background-color: var(--yellow);
            animation: scale 2s cubic-bezier(.89,.2,0,1.03) 0.9s;
            }
            .actions .red {
            background-color: var(--red);  
            animation: scale 2s cubic-bezier(.89,.2,0,1.03) 1.1s;
            }
            .right-hand .controler .actions label:focus {
            box-shadow: inset 100px 0 rgba(0,0,0,0.2);
            }


            .backside-buttons {
            position: absolute;
            z-index: -1;
            }
            .backside-buttons button {
            width: 160px;
            height: 100px;
            position: absolute;
            top: -8px;
            border: 3px solid var(--dark);
            background-color: var(--brown);
            }
            .backside-buttons.r1 {
            right: 210px;
            }
            .backside-buttons.l1 {
            left: 50px;
            }
            .l1 button {
            border-radius: 60% 10px;
            }
            .r1 button { 
            border-radius: 10px 60%;
            }
            /* shadow */


            /* ANIMATIONS */
            @keyframes fio {
            0% {
                top: -100%;
            }
            100% {
                top: -50%;
            }
            }
            @keyframes scale {
            0% {
                transform: scale(0);
            }
            50% {
                transform: scale(1.1);
            }
            100% {
                transform: scale(1);
            }
            }
            @keyframes starts {
            0% {
                top: 60%;
                opacity: 0;
            }
            100% {
                top: 50%;
                opacity: 1;
            }
            }

            @keyframes scale-bg {
            0% {
                transform: scale(0);
            }
            100% {
                transform: scale(4);
            }
            }

            @keyframes scale-reverse {
            0% {
                transform: scale(4);
            }
            100% {
                transform: scale(0);
            }
            }



            .colors {
            position: absolute;
            width: 100%;
            height: 100%;
            z-index: -3;
            top: 0;
            left: 0;
            border-radius: var(--radius);
            transform: scale(0);
            }


            .bg-green {background-color: var(--green);}
            .bg-blue {background-color: var(--blue);}
            .bg-yellow {background-color: var(--yellow);}
            .bg-red {background-color: var(--red);}

            .input-green:checked ~ .bg-green {
            animation: scale-bg 1s ease-in 1s;
            animation-fill-mode: forwards;
            }
            .input-red:checked ~ .bg-red {
            animation: scale-bg 1s ease-in 1s;
            animation-fill-mode: forwards;
            }
            .input-blue:checked ~ .bg-blue {
            animation: scale-bg 1s ease-in 1s;
            animation-fill-mode: forwards;
            }
            .input-yellow:checked ~ .bg-yellow {
            animation: scale-bg 1s ease-in 1s;
            animation-fill-mode: forwards;
            }


            .active-bg:checked:not(.input-red) ~ .bg-red {
            animation: scale-reverse 1s ease-in;
            animation-fill-mode: forwards; 
            }
            .active-bg:checked:not(.input-green) ~ .bg-green {
            animation: scale-reverse 1s ease-in;
            animation-fill-mode: forwards; 
            }
            .active-bg:checked:not(.input-blue) ~ .bg-blue {
            animation: scale-reverse 1s ease-in;
            animation-fill-mode: forwards; 
            }
            .active-bg:checked:not(.input-yellow) ~ .bg-yellow {
            animation: scale-reverse 1s ease-in;
            animation-fill-mode: forwards; 
            }
            .joyspace{
                padding: 5rem;
                margin-bottom: 10rem;
                display: flex;
                background-color: #EBE5DF;
                border: 1rem inset var(--grey);
                border-radius: 5rem;
                width: fit-content;
                height: fit-content;
            }
            .cont{
                display: flex;
                flex-direction: row;
            }
            /* The switch - the box around the slider */
            .switch {
                font-size: 17px;
                position: relative;
                display: inline-block;
                width: 5.2em;
                height: 2em;
                margin-bottom: 1rem;
                overflow: hidden;
            }

            /* Hide default HTML checkbox */
            .switch input {
            opacity: 0;
            width: 0;
            height: 0;
            }

            /* The slider */
            .slider {
            position: absolute;
            cursor: pointer;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            background-color: #eee;
            transition: .4s;
            border-radius: 30px;
            }

            .slider:before {
            position: absolute;
            content: "";
            height: 1.4em;
            width: 1.4em;
            border-radius: 20px;
            border: 1px solid #333;
            left: 0.4em;
            bottom: 0.2em;
            background-color: white;
            transition: .4s;
            }

            input:checked + .slider {
            background-color: var(--green);
            }

            input:focus + .slider {
            box-shadow: 0 0 1px var(--green);
            }

            input:checked + .slider:before {
            transform: translateX(3em);
            }

            .switch .text {
            position: absolute;
            top: 50%;
            pointer-events: none;
            text-transform: uppercase;
            transform: translateY(-50%);
            transition: .4s;
            }

            .switch .text.on {
            left: .8rem;
            transform: translateX(-3rem) translateY(-50%);
            }

            .switch .text.off {
            color: #999;
            right: .8rem;
            }

            input:checked ~ .text.off {
            transform: translateX(3rem) translateY(-50%);
            }

            input:checked ~ .text.on {
            transform: translateX(0) translateY(-50%);
            }
            .lock{
                margin: 1rem;
            }
             /* Responsive typography */
        @media screen and (min-width: 968px) {
        :root {
            --biggest-font-size: 2.75rem;
            --normal-font-size: 1rem;
            --smaller-font-size: .813rem;
        }
        }

        /*=============== BATTERY ===============*/
        .battery {
        height: 10vh;
        display: grid;
        place-items: center;
        margin: 0;
        }

        .battery__card {
            position: relative;
            width: 100%;
            height: 240px;
            background-color: var(--container-color);
            padding: 1.5rem 2rem;
            border-radius: 1.5rem;
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            align-items: center;
        }

        .battery__text {
            color: var(--white-color);
            font-size: 1.5rem;
            margin-bottom: .5rem;
        }

        .battery__percentage {
            color: var(--white-color);
            font-size: var(--biggest-font-size);
        }

        .battery__status {
            color: var(--white-color);
            position: absolute;
            bottom: 1.5rem;
            display: flex;
            align-items: center;
            column-gap: .5rem;
            font-size: var(--smaller-font-size);
        }

        .battery__status i {
        font-size: 1.25rem;
        }

        .battery__pill {
        position: relative;
        width: 75px;
        height: 180px;
        background-color: var(--container-color);
        box-shadow: inset 20px 0 48px hsl(0, 0%, 16%), 
                    inset -4px 12px 48px hsl(0, 0%, 56%);
        border-radius: 3rem;
        justify-self: flex-end;
        }

        .battery__level {
        position: absolute;
        inset: 2px;
        border-radius: 3rem;
        overflow: hidden;
        }

        .battery__liquid {
        position: absolute;
        bottom: 0;
        left: 0;
        right: 0;
        height: 36px;
        background: var(--gradient-color-red);
        box-shadow: inset -10px 0 12px hsla(0, 0%, 0%, .1), 
                    inset 12px 0 12px hsla(0, 0%, 0%, .15);
        transition: .3s;
        }

        .battery__liquid::after {
        content: '';
        position: absolute;
        height: 8px;
        background: var(--gradient-color-red);
        box-shadow: inset 0px -3px 6px hsla(0, 0%, 0%, .2);
        left: 0;
        right: 0;
        margin: 0 auto;
        top: -4px;
        border-radius: 50%;
        }

        /* Full battery icon color */
        .green-color {
        background: var(--gradient-color-green);
        }

        /* Battery charging animation */
        .animated-green {
        background: var(--gradient-color-green);
        animation: animated-charging-battery 1.2s infinite alternate;
        }

        /* Low battery animation */
        .animated-red {
        background: var(--gradient-color-red);
        animation: animated-low-battery 1.2s infinite alternate;
        }

        .animated-green,
        .animated-red,
        .green-color {
        -webkit-background-clip: text;
        color: transparent;
        }

        @keyframes animated-charging-battery {
        0% {
            text-shadow: none;
        }
        100% {
            text-shadow: 0 0 6px hsl(92, 90%, 68%);
        }
        }

        @keyframes animated-low-battery {
        0% {
            text-shadow: none;
        }
        100% {
            text-shadow: 0 0 8px hsl(7, 89%, 46%);
        }
        }

        /* Liquid battery with gradient color */
        .gradient-color-red,
        .gradient-color-red::after {
        background: var(--gradient-color-red);
        }

        .gradient-color-orange,
        .gradient-color-orange::after {
        background: var(--gradient-color-orange);
        }

        .gradient-color-yellow,
        .gradient-color-yellow::after {
        background: var(--gradient-color-yellow);
        }

        .gradient-color-green,
        .gradient-color-green::after {
        background: var(--gradient-color-green);
        }

        /*=============== BREAKPOINTS ===============*/
        /* For small devices */
        @media screen and (max-width: 320px) {
        .battery__card {
            zoom: .8;
        }
        }

        /* For medium devices */
        @media screen and (min-width: 430px) {
        .battery__card {
            width: 312px;
        }
        }

        /* For large devices */
        @media screen and (min-width: 1024px) {
        .battery__card {
            zoom: 1.5;
        }
        }
        </style>
        
    </head>
<!----------------------------H T M L--------------------------------->
    <body>
        <div class="side-bar collapse">
            <div class="logo-name-wrapper">
                <div class="logo-name">
                  <span class="logo-name__name"><h2>Infrared Mobile Robot</h2></span>
                </div>
                <button class="logo-name__button">
                  
                    <svg xmlns="http://www.w3.org/2000/svg" width="2.2rem" height="2.2rem" viewBox="0 0 22 22" fill="#b5b5be" stroke="#b5b5be">

                        <g id="SVGRepo_bgCarrier" stroke-width="0"/>
                        
                        <g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"/>
                        
                        <g id="SVGRepo_iconCarrier"> <path fill-rule="evenodd" clip-rule="evenodd" d="M12.2929 4.29289C12.6834 3.90237 13.3166 3.90237 13.7071 4.29289L20.7071 11.2929C21.0976 11.6834 21.0976 12.3166 20.7071 12.7071L13.7071 19.7071C13.3166 20.0976 12.6834 20.0976 12.2929 19.7071C11.9024 19.3166 11.9024 18.6834 12.2929 18.2929L17.5858 13H4C3.44772 13 3 12.5523 3 12C3 11.4477 3.44772 11 4 11H17.5858L12.2929 5.70711C11.9024 5.31658 11.9024 4.68342 12.2929 4.29289Z" fill="##b5b5be"/> </g>
                        
                    </svg>
                </button>
                <!-- <i class='bx bx-arrow-from-left'></i> -->
            </div>
            <ul class="features-list">
              <li class="features-item" onclick="auto()">
                
                <a class="features-item-icon"><svg  fill="#b5b5be" height="2rem" width="2rem" version="1.1" id="Layer_1" viewBox="0 0 130 130" xml:space="preserve">

                    <g id="SVGRepo_bgCarrier" stroke-width="0"/>
                    
                    <g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"/>
                    
                    <g id="SVGRepo_iconCarrier"> <style type="text/css"> .st0{fill-rule:evenodd;clip-rule:evenodd;} </style> <g> <path class="st0" d="M16.63,105.75c0.01-4.03,2.3-7.97,6.03-12.38L1.09,79.73c-1.36-0.59-1.33-1.42-0.54-2.4l4.57-3.9 c0.83-0.51,1.71-0.73,2.66-0.47l26.62,4.5l22.18-24.02L4.8,18.41c-1.31-0.77-1.42-1.64-0.07-2.65l7.47-5.96l67.5,18.97L99.64,7.45 c6.69-5.79,13.19-8.38,18.18-7.15c2.75,0.68,3.72,1.5,4.57,4.08c1.65,5.06-0.91,11.86-6.96,18.86L94.11,43.18l18.97,67.5 l-5.96,7.47c-1.01,1.34-1.88,1.23-2.65-0.07L69.43,66.31L45.41,88.48l4.5,26.62c0.26,0.94,0.05,1.82-0.47,2.66l-3.9,4.57 c-0.97,0.79-1.81,0.82-2.4-0.54l-13.64-21.57c-4.43,3.74-8.37,6.03-12.42,6.03C16.71,106.24,16.63,106.11,16.63,105.75 L16.63,105.75z"/> </g> </g>
                    
                    </svg></a>
                <span class="features-item-text">AutoPilot with IR</span>
                <span class="tooltip">AutoPilot with IR</span>
              </li>
              <li class="features-item" onclick="manual()">
                <a class="features-item-icon"><svg class="features-item-icon inbox-icon" fill="#b5b5be" height="2rem" width="2rem" version="1.1" viewBox="0 0 515 515" xml:space="preserve" stroke="#b5b5be">

                    <g id="SVGRepo_bgCarrier" stroke-width="0"/>
                    
                    <g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"/>
                    
                    <g id="SVGRepo_iconCarrier"> <g> <g> <path d="M492.814,240.733c-4.395-24.747-8.747-49.088-11.925-71.04c-8.427-58.347-27.733-95.296-57.365-109.824 c-30.059-14.763-56.96-0.405-60.715,1.707c-50.624,31.403-88.107,28.437-88.256,28.395l-34.773-0.128l-2.155,0.107 c-0.341,0.021-37.888,3.008-89.237-28.8c-2.987-1.685-29.973-16-59.968-1.28c-29.632,14.528-48.939,51.477-57.365,109.824 c-3.179,21.952-7.531,46.293-11.925,71.04c-20.652,116.436-31.532,188.97,4.116,211.882c6.293,4.032,13.248,6.037,20.821,6.037 c12.48,0,26.667-5.44,42.432-16.341c12.437-8.576,24.021-19.776,35.435-34.219l3.627-4.672 c15.979-20.843,40.768-51.968,109.077-51.435h42.944c0.96,0,1.877-0.021,2.816-0.021c66.539,0,90.24,30.912,105.984,51.456 l3.627,4.672c11.413,14.443,22.997,25.643,35.435,34.219c25.344,17.515,46.635,20.971,63.253,10.304 C524.345,429.704,513.465,357.17,492.814,240.733z M213.305,245.32h-21.333v21.333c0,11.776-9.536,21.333-21.333,21.333 s-21.333-9.557-21.333-21.333V245.32h-21.333c-11.797,0-21.333-9.557-21.333-21.333s9.536-21.333,21.333-21.333h21.333V181.32 c0-11.776,9.536-21.333,21.333-21.333s21.333,9.557,21.333,21.333v21.333h21.333c11.797,0,21.333,9.557,21.333,21.333 S225.102,245.32,213.305,245.32z M319.971,245.32c-11.776,0-21.333-9.557-21.333-21.333s9.557-21.333,21.333-21.333 s21.333,9.557,21.333,21.333S331.747,245.32,319.971,245.32z M362.638,287.986c-11.776,0-21.333-9.557-21.333-21.333 c0-11.776,9.557-21.333,21.333-21.333s21.333,9.557,21.333,21.333C383.971,278.429,374.414,287.986,362.638,287.986z M362.638,202.652c-11.776,0-21.333-9.557-21.333-21.333s9.557-21.333,21.333-21.333s21.333,9.557,21.333,21.333 S374.414,202.652,362.638,202.652z M405.305,245.32c-11.776,0-21.333-9.557-21.333-21.333s9.557-21.333,21.333-21.333 s21.333,9.557,21.333,21.333S417.081,245.32,405.305,245.32z"/> </g> </g> </g>
                    
                    </svg></a>
                
                <span class="features-item-text">Manual Control</span>
                <span class="tooltip">Manual Control</span>
              </li>
            </ul>
        </div>
        <div class="container">
                <div>
                    <h1>Manual Control Mode</h1>
                    <h4 class="lock">Lock</h4> 
                    <label class="switch">
                        <input type="checkbox" class="chbox">
                        <span class="slider"></span>
                        <span class="text on">On</span>
                        <span class="text off">Off</span>
                    </label>
                    
                    
                    <div class="cont">
                        
                        <div class="joyspace">
                            <input checked type="radio" id="green" class="active-bg input-green"  name="color">
                            <input type="radio" id="blue" class="active-bg input-blue"  name="color">
                            <input type="radio" id="yellow" class="active-bg input-yellow" name="color">
                            <input type="radio" id="red" class="active-bg input-red" name="color">
                            <main>
                                <section class="joystick center">
                                    <div class="animations">      
                                        <aside class="left-hand">
                                            <div class="controler" >
                                                <button class="left" id="left" onmousedown="sendinfo(this)" onmouseup="end(this)" ontouchstart="touchStart(event)" ontouchend="touchEnd(event)"><i></i></button>
                                                <button class="top" id="top" onmousedown="sendinfo(this)" onmouseup="end(this)" ontouchstart="touchStart(event)" ontouchend="touchEnd(event)"><i></i></button>
                                                <button class="right" id="right" onmousedown="sendinfo(this)" onmouseup="end(this)" ontouchstart="touchStart(event)" ontouchend="touchEnd(event)"><i></i></button>
                                                <button class="bottom" id="bottom" onmousedown="sendinfo(this)" onmouseup="end(this)" ontouchstart="touchStart(event)" ontouchend="touchEnd(event)"><i></i></button>
                                            </div>
                                        </aside>
                                        <div class="body-control">
                                            <button></button>
                                            <button></button> 
                                        </div>
                                        <aside class="right-hand">
                                            <div class="controler">
                                                <div class="actions group1">
                                                    <label class="green" for="green"></label>
                                                    <label class="blue" for="blue"></label>
                                                </div>
                                                <div class="actions group2">
                                                    <label class="yellow" for="yellow"></label>
                                                    <label class="red" for="red"></label>
                                                </div>
                                            </div>
                                        </aside>
                                        <div class="l1 backside-buttons">
                                            <button></button>
                                        </div>
                                        <div class="r1 backside-buttons">
                                            <button></button>
                                        </div>
                                        <div class="stroke-base"></div>
                                    </div>
                                </section>
                            </main>
                        </div>
                        <div class="Battery">
                            <section class="battery">
                                <div class="battery__card">
                                    <div class="battery__data">
                                        <p1 class="battery__text">Battery</p1>
                                        <h1 class="battery__percentage">
                                            20%
                                        </h1>
                    
                                        <p class="battery__status">
                                            Low battery <i class="ri-plug-line"></i>
                                        </p>
                                    </div>
                    
                                    <div class="battery__pill">
                                        <div class="battery__level">
                                            <div class="battery__liquid"></div>
                                        </div>
                                    </div>
                                </div>
                            </section>
                        </div>
            
                    </div>
                </div>
        </div>

        
<!---------------------------JavaScript------------------------------->
    <script>
        let chbox = document.querySelector('.chbox');
        let sideBar = document.querySelector('.side-bar');
        let arrowCollapse = document.querySelector('#logo-name__icon');
        let lock = document.querySelector('.toggle');
        sideBar.onclick = () => {
            sideBar.classList.toggle('collapse');
            arrowCollapse.classList.toggle('collapse');
            if (arrowCollapse.classList.contains('collapse')) {
            arrowCollapse.classList =
                'bx bx-arrow-from-left logo-name__icon collapse';
            } else {
            arrowCollapse.classList = 'bx bx-arrow-from-right logo-name__icon';
            }
        };
        const touchStart=(e)=>{
            let xhr = new XMLHttpRequest();
            e.preventDefault();
            console.log('touch start');
            if(chbox.checked){
                xhr.open("GET", "/manual?mode=manual&value=on&ctrl="+e.target.id, true);
            }else{
                xhr.open("GET", "/manual?mode=manual&value=off&ctrl="+e.target.id, true);
            }
            
            xhr.send(null);
        }

        const touchEnd=(e)=>{
            let xhr = new XMLHttpRequest();
            e.preventDefault();
            if(chbox.checked){
                xhr.open("GET", "/manual?mode=manual&value=on&ctrl=0", true);
            }else{
                xhr.open("GET", "/manual?mode=manual&value=off&ctrl=0", true);
            }
            xhr.send(null);
        }


        function auto(){
            location.href = "/";
        }
        function manual(){
            location.href = "/manual";
        }
        function sendinfo(element){
            let xhr = new XMLHttpRequest();
            console.log(chbox.checked);
            if(chbox.checked){
                xhr.open("GET", "/manual?mode=manual&value=on&ctrl="+element.id, true);
            }else{
                xhr.open("GET", "/manual?mode=manual&value=off&ctrl="+element.id, true);
            }
            
            xhr.onreadystatechange = function() {
                if (xhr.readyState == XMLHttpRequest.DONE) {

                }
            }
            xhr.send(null);
        }
        function end(element){
            let xhr = new XMLHttpRequest();
            if(chbox.checked){
                xhr.open("GET", "/manual?mode=manual&value=on&ctrl=0", true);
            }else{
                xhr.open("GET", "/manual?mode=manual&value=off&ctrl=0", true);
            }
            
            xhr.onreadystatechange = function() {
                if (xhr.readyState == XMLHttpRequest.DONE) {

                }
            }
            xhr.send(null);
        }
        setInterval(function(){
            let xhr = new XMLHttpRequest();
            
            xhr.onreadystatechange = function(){
                if(this.status == 200){
                  initBattery(this.responseText)
                  
              }
            }
            xhr.open("GET","/battery",true);
            xhr.send();
        },1000)
        function initBattery(value){
          const batteryLiquid = document.querySelector('.battery__liquid'),
              batteryStatus = document.querySelector('.battery__status'),
              batteryPercentage = document.querySelector('.battery__percentage')
                
              updateBattery = () =>{
                  /* 1. We update the number level of the battery */
                  let batt = value
                  let level = Math.floor(batt)
                  batteryPercentage.innerHTML = level+ '%'

                  /* 2. We update the background level of the battery */
                  batteryLiquid.style.height = `${parseInt(batt)}%`

                  /* 3. We validate full battery, low battery and if it is charging or not */
                  if(level == 100){ /* We validate if the battery is full */
                      batteryStatus.innerHTML = `Full battery <i class="ri-battery-2-fill green-color"></i>`
                      batteryLiquid.style.height = '103%' /* To hide the ellipse */
                  }
                  else if(level <= 20){ /* We validate if the battery is low */
                      batteryStatus.innerHTML = `Low battery <i class="ri-plug-line animated-red"></i>`
                  }
                  else{ /* If it's not loading, don't show anything. */
                      batteryStatus.innerHTML = ''
                  }
                  
                  /* 4. We change the colors of the battery and remove the other colors */
                  if(level <=20){
                      batteryLiquid.classList.add('gradient-color-red')
                      batteryLiquid.classList.remove('gradient-color-orange','gradient-color-yellow','gradient-color-green')
                  }
                  else if(level <= 40){
                      batteryLiquid.classList.add('gradient-color-orange')
                      batteryLiquid.classList.remove('gradient-color-red','gradient-color-yellow','gradient-color-green')
                  }
                  else if(level <= 80){
                      batteryLiquid.classList.add('gradient-color-yellow')
                      batteryLiquid.classList.remove('gradient-color-red','gradient-color-orange','gradient-color-green')
                  }
                  else{
                      batteryLiquid.classList.add('gradient-color-green')
                      batteryLiquid.classList.remove('gradient-color-red','gradient-color-orange','gradient-color-yellow')
                  }
              }
              updateBattery()

              /* 5. Battery status events */
              batt.addEventListener('chargingchange', () => {updateBattery()})
              batt.addEventListener('levelchange', () => {updateBattery()})
        }       
    </script>
    </body>
</html>

)rawliteral";