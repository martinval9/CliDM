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

        cout << "Entornos / Environments" << CYAN_T << ":\n" << RESET_COLOR <<endl;
        system("python3 /usr/bin/verificar.py");

        cout << CYAN_T << "Para lanzar el entorno de escritorio simplemente debes escribir su nombre(El que aparece arriba) \n\nTo launch the desktop environment you simply have to write its name (The one that appears above)" << RESET_COLOR <<endl;
        string decision;
        cout << "\nCldm" << CYAN_T << ": " << RESET_COLOR;
        cin >> decision;

        FILE *file;
        if (file = fopen("a.txt", "r")) {
            fclose(file);
        } else {} 

        // pkill cldm para evitar un consumo excesivo de cpu
        if(decision == "dwm" || decision == "Dwm")                                                    {system("startx /usr/bin/dwm && pkill cldm");} 

        else if (decision == "qtile" || decision == "Qtile")                                          {system("startx /usr/bin/qtile && pkill cldm");} 

        else if (decision == "fluxbox" || decision == "Fluxbox" || decision == "FluxBox")             {system("startx /usr/bin/fluxbox && pkill cldm");} 

        else if (decision == "lxde"    || decision == "Lxde")                                         {system("startx /usr/bin/lxde && pkill cldm");} 

        else if (decision == "bspwm" || decision == "Bspwm")                                          {system("startx /usr/bin/bspwm && pkill cldm");} 

        else if (decision == "xfce" || decision == "Xfce")                                            {system("startx /usr/bin/xfce && pkill cldm");} 

        else if (decision == "gnome" || decision == "Gnome")                                          {system("startx /usr/bin/gnome && pkill cldm");} 

        else if (decision == "openbox" || decision == "Openbox")                                      {system("startx /usr/bin/openbox && pkill cldm");} 

        else if (decision == "herbstluftwm" || decision == "Herbstluftwm")                            {system("startx /usr/bin/herbstluftwm && pkill cldm");} 

        else if (decision == "dk" || decision == "Dk")                                                {system("startx /usr/bin/dk && pkill cldm");} 

        else if (decision == "gwm" || decision == "Gwm")                                              {system("startx /usr/bin/gwm && pkill cldm");} 

        else if (decision == "lxqt" || decision == "Lxqt")                                            {system("startx /usr/bin/lxqt");} 

        else if (decision == "awesome" || decision == "Awesome")                                      {system("startx /usr/bin/awesome && pkill cldm");} 

        else if (decision == "cinnamon" || decision == "Cinnamon")                                    {system("startx /usr/bin/cinnamon && pkill cldm");} 

        else if (decision == "budgie" || decision == "Budgie")                                        {system("startx /usr/bin/budgie && pkill cldm");} 

        else if (decision == "pantheon" || decision == "Pantheon")                                    {system("startx /usr/bin/pantheon && pkill cldm");} 

        else if (decision == "unity" || decision == "Unity")                                          {system("startx /usr/bin/unity && pkill cldm");} 

        else if (decision == "deepin" || decision == "Deepin")                                        {system("startx /usr/bin/deepin && pkill cldm");} 

        else if (decision == "i3" || decision == "I3")                                                {system("startx /usr/bin/i3 && pkill cldm");} 

        else if (decision == "sway" || decision == "Sway")                                            {system("startx /usr/bin/sway && pkill cldm");} 

        else if (decision == "xmonad" || decision == "Xmonad")                                        {system("startx /usr/bin/xmonad && pkill cldm");} 

        else if (decision == "spectrwm" || decision == "Spectrwm")                                    {system("startx /usr/bin/spectrwm && pkill cldm");} 

        else if (decision == "xfwm" || decision == "Xfwm")                                            {system("startx /usr/bin/xfwm && pkill cldm");}
    
        else if (decision == "frankenwm" || decision == "Frankenwm")                                  {system("startx /usr/bin/frankenwm && pkill cldm");}
    
    	else if (decision == "chamfer" || decision == "Chamfer")                                      {system("startx /usr/bin/chamfer && pkill cldm");}
    
    	else if (decision == "flashfocus" || decision == "Flashfocus" || decision == "FlashFocus")    {system("startx /usr/bin/flashfocus && pkill cldm");}

    	else if (decision == "flatman" || decision == "Flatman")                                      {system("startx /usr/bin/flatman && pkill cldm");}
        
    	else if (decision == "hikari" || decision == "Hikari")                                        {system("startx /usr/bin/hikari && pkill cldm");}
        
    	else if (decision == "larswm" || decision == "Larswm")                                        {system("startx /usr/bin/larswm && pkill cldm");}
        
    	else if (decision == "leftwm" || decision == "Leftwm")                                        {system("startx /usr/bin/leftwm && pkill cldm");}

    	else if (decision == "notion" || decision == "Notion")                                        {system("startx /usr/bin/notion && pkill cldm");}

    	else if (decision == "futile" || decision == "Futile")                                        {system("startx /usr/bin/futile && pkill cldm");}

    	else if (decision == "stumpwm" || decision == "Stumpwm")                                      {system("startx /usr/bin/stumpwm && pkill cldm");}
        
    	else if (decision == "9wm" || decision == "9Wm")                                              {system("startx /usr/bin/9wm && pkill cldm");}
        
    	else if (decision == "blackbox" || decision == "Blackbox" || decision == "BlackBox")          {system("startx /usr/bin/blackbox && pkill cldm");}
        
    	else if (decision == "byobu" || decision == "Byobu")                                          {system("startx /usr/bin/byobu && pkill cldm");}
        
    	else if (decision == "cwm" || decision == "Cwm")                                              {system("startx /usr/bin/cwm && pkill cldm");}
        
    	else if (decision == "fvwm" || decision == "Fvwm")                                            {system("startx /usr/bin/fvwm && pkill cldm");}
    	
    	else if (decision == "lumina" || decision == "Lumina")                                        {system("startx /usr/bin/lumina && pkill cldm");}
    	
    	else if (decision == "musca" || decision == "Musca")                                          {system("startx /usr/bin/musca && pkill cldm");}
    	
    	else if (decision == "pekwm" || decision == "Pekwm")                                          {system("startx /usr/bin/pekwm && pkill cldm");}
    	
    	else if (decision == "sawfish" || decision == "Sawfish")                                      {system("startx /usr/bin/sawfish && pkill cldm");}
    	
    	else if (decision == "wmx" || decision == "Wmx")                                              {system("startx /usr/bin/wmx && pkill cldm");}
    	
    	else if (decision == "twm" || decision == "Twm")                                              {system("startx /usr/bin/twm && pkill cldm");}
    	
    	else if (decision == "ratpoison" || decision == "Ratpoison")                                  {system("startx /usr/bin/ratpoison && pkill cldm");}
    	
    	else if (decision == "enlightenment" || decision == "Enlightenment")                          {system("startx /usr/bin/enlightenment && pkill cldm");}

    	else if (decision == "KDE/Openbox" || decision == "Kde/Openbox" || decision == "kde/openbox") {system("startx /usr/bin/openbox-kde-session && pkill cldm");}

        else if (decision == "kde-plasma" || decision == "Kde-Plasma" || decision == "Kde-plasma")    {system("startx /usr/bin/startplasma-x11 && pkill cldm");}
    }

    return 0;
}
