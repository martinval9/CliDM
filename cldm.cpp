#include<iostream>
#include<stdio.h>

//Colores

#define RESET_COLOR "\x1b[0m"
#define RED_T       "\x1b[31m"
#define CYAN_T      "\x1b[36m"

using namespace std;

int main() {
    system("clear");
    while (true){
        cout << CYAN_T << "\n█▀▀ █▀█ █▄░█ █▀ █▀█ █░░ █▀▀   █▀▄ █ █▀ █▀█ █░░ ▄▀█ █▄█" <<endl;
        cout << CYAN_T <<   "█▄▄ █▄█ █░▀█ ▄█ █▄█ █▄▄ ██▄   █▄▀ █ ▄█ █▀▀ █▄▄ █▀█ ░█░" <<endl;

        cout << "\n█▀▄▀█ ▄▀█ █▄░█ ▄▀█ █▀▀ █▀▀ █▀█" <<endl;
        cout <<   "█░▀░█ █▀█ █░▀█ █▀█ █▄█ ██▄ █▀▄\n" << RESET_COLOR <<endl;

        cout << "Entornos" << CYAN_T << ":\n" << RESET_COLOR <<endl;
        system("python3 /usr/bin/verificar.py");

        cout << CYAN_T << "Para lanzar el entorno de escritorio simplemente debes escribir su nombre(El que aparece arriba)" << RESET_COLOR <<endl;
        string decision;
        cout << "\nCldm" << CYAN_T << ": " << RESET_COLOR;
        cin >> decision;

        FILE *file;
        if (file = fopen("a.txt", "r")) {
            fclose(file);
        } else {} 

        // pkill cldm para evitar un consumo excesivo de cpu
        if(decision == "dwm") {system("startx /usr/bin/dwm && pkill cldm");} 

        else if (decision == "fluxbox")       {system("startx /usr/bin/fluxbox && pkill cldm");} 

        else if (decision == "lxde")          {system("startx /usr/bin/lxde && pkill cldm");} 

        else if (decision == "bspwm")         {system("startx /usr/bin/bspwm && pkill cldm");} 

        else if (decision == "xfce")          {system("startx /usr/bin/xfce && pkill cldm");} 

        else if (decision == "kde")           {system("startx /usr/bin/kde && pkill cldm");} 

        else if (decision == "gnome")         {system("startx /usr/bin/gnome && pkill cldm");} 

        else if (decision == "openbox")       {system("startx /usr/bin/openbox && pkill cldm");} 

        else if (decision == "herbstluftwm")  {system("startx /usr/bin/herbstluftwm && pkill cldm");} 

        else if (decision == "dk")            {system("startx /usr/bin/dk && pkill cldm");} 

        else if (decision == "gwm")           {system("startx /usr/bin/gwm && pkill cldm");} 

        else if (decision == "lxqt")          {system("startx /usr/bin/lxqt");} 

        else if (decision == "awesome")       {system("startx /usr/bin/awesome && pkill cldm");} 

        else if (decision == "cinnamon")      {system("startx /usr/bin/cinnamon && pkill cldm");} 

        else if (decision == "budgie")        {system("startx /usr/bin/budgie && pkill cldm");} 

        else if (decision == "pantheon")      {system("startx /usr/bin/pantheon && pkill cldm");} 

        else if (decision == "unity")         {system("startx /usr/bin/unity && pkill cldm");} 

        else if (decision == "deepin")        {system("startx /usr/bin/deepin && pkill cldm");} 

        else if (decision == "i3")            {system("startx /usr/bin/i3 && pkill cldm");} 

        else if (decision == "sway")          {system("startx /usr/bin/sway && pkill cldm");} 

        else if (decision == "xmonad")        {system("startx /usr/bin/xmonad && pkill cldm");} 

        else if (decision == "spectrwm")      {system("startx /usr/bin/spectrwm && pkill cldm");} 

        else if (decision == "xfwm")          {system("startx /usr/bin/xfwm && pkill cldm");}
    
        else if (decision == "frankenwm")     {system("startx /usr/bin/frankenwm && pkill cldm");}
    
    	else if (decision == "chamfer")       {system("startx /usr/bin/chamfer && pkill cldm");}
    
    	else if (decision == "flashfocus")    {system("startx /usr/bin/flashfocus && pkill cldm");}

    	else if (decision == "flatman")       {system("startx /usr/bin/flatman && pkill cldm");}
        
    	else if (decision == "hikari")        {system("startx /usr/bin/hikari && pkill cldm");}
        
    	else if (decision == "larswm")        {system("startx /usr/bin/larswm && pkill cldm");}
        
    	else if (decision == "leftwm")        {system("startx /usr/bin/leftwm && pkill cldm");}

    	else if (decision == "notion")        {system("startx /usr/bin/notion && pkill cldm");}

    	else if (decision == "futile")        {system("startx /usr/bin/futile && pkill cldm");}

    	else if (decision == "stumpwm")       {system("startx /usr/bin/stumpwm && pkill cldm");}
        
    	else if (decision == "9wm")           {system("startx /usr/bin/9wm && pkill cldm");}
        
    	else if (decision == "blackbox")      {system("startx /usr/bin/blackbox && pkill cldm");}
        
    	else if (decision == "byobu")         {system("startx /usr/bin/byobu && pkill cldm");}
        
    	else if (decision == "cwm")           {system("startx /usr/bin/cwm && pkill cldm");}
        
    	else if (decision == "fvwm")          {system("startx /usr/bin/fvwm && pkill cldm");}
    	
    	else if (decision == "lumina")        {system("startx /usr/bin/lumina && pkill cldm");}
    	
    	else if (decision == "musca")         {system("startx /usr/bin/musca && pkill cldm");}
    	
    	else if (decision == "pekwm")         {system("startx /usr/bin/pekwm && pkill cldm");}
    	
    	else if (decision == "sawfish")       {system("startx /usr/bin/sawfish && pkill cldm");}
    	
    	else if (decision == "wmx")           {system("startx /usr/bin/wmx && pkill cldm");}
    	
    	else if (decision == "twm")           {system("startx /usr/bin/twm && pkill cldm");}
    	
    	else if (decision == "ratpoison")     {system("startx /usr/bin/ratpoison && pkill cldm");}
    	
    	else if (decision == "enlightenment") {system("startx /usr/bin/enlightenment && pkill cldm");}
    }

    return 0;
}
