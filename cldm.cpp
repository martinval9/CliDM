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
        cout << CYAN_T << "\n█▀▀ █▀█ █▄░█ █▀ █▀█ █░░ █▀▀   █▀▄ █ █▀ █▀█ █░░ ▄▀█ █▄█" << endl;
        cout << CYAN_T <<   "█▄▄ █▄█ █░▀█ ▄█ █▄█ █▄▄ ██▄   █▄▀ █ ▄█ █▀▀ █▄▄ █▀█ ░█░" << endl;

        cout << "\n█▀▄▀█ ▄▀█ █▄░█ ▄▀█ █▀▀ █▀▀ █▀█" << endl;
        cout <<   "█░▀░█ █▀█ █░▀█ █▀█ █▄█ ██▄ █▀▄ 1.3\n" << RESET_COLOR << endl;

        cout << "Entornos / Environments" << CYAN_T << ":\n" << RESET_COLOR << endl;
        system("python3 /usr/bin/verificar.py");

        cout << CYAN_T << "Para lanzar el entorno de escritorio simplemente debes escribir su nombre(El que aparece arriba) \n\nTo launch the desktop environment you simply have to write its name (The one that appears above)" << RESET_COLOR << endl;
        string decision;
        cout << "\nCldm" << CYAN_T << ": " << RESET_COLOR;
        cin >> decision;

        FILE *file;
        if (file = fopen("a.txt", "r")) {
            fclose(file);
        } else {} 

        // pkill cldm para evitar un consumo excesivo de cpu
        if(decision == "dwm" || decision == "Dwm")                                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dwm && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/dwm && pkill cldm");} 

        else if (decision == "qtile" || decision == "Qtile")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill cldm" << RESET_COLOR << endl; system("startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill cldm");} 

        else if (decision == "fluxbox" || decision == "Fluxbox" || decision == "FluxBox")             {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fluxbox && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/fluxbox && pkill cldm");} 

        else if (decision == "lxde"    || decision == "Lxde")                                         {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxde && pkill cldm"                            << RESET_COLOR << endl; system("startx /usr/bin/lxde && pkill cldm");} 

        else if (decision == "bspwm" || decision == "Bspwm")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/bspwm && pkill cldm"                           << RESET_COLOR << endl; system("startx /usr/bin/bspwm && pkill cldm");} 

        else if (decision == "xfce" || decision == "Xfce")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startxfce4 && pkill cldm"                      << RESET_COLOR << endl; system("startx /usr/bin/startxfce4 && pkill cldm");} 

        else if (decision == "gnome" || decision == "Gnome")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gnome-session && pkill cldm"                   << RESET_COLOR << endl; system("startx /usr/bin/gnome-session && pkill cldm");} 

        else if (decision == "openbox" || decision == "Openbox")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/openbox && pkill cldm");} 

        else if (decision == "herbstluftwm" || decision == "Herbstluftwm")                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/herbstluftwm && pkill cldm"                    << RESET_COLOR << endl; system("startx /usr/bin/herbstluftwm && pkill cldm");} 

        else if (decision == "dk" || decision == "Dk")                                                {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dk && pkill cldm"                              << RESET_COLOR << endl; system("startx /usr/bin/dk && pkill cldm");} 

        else if (decision == "gwm" || decision == "Gwm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gwm && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/gwm && pkill cldm");} 

        else if (decision == "lxqt" || decision == "Lxqt")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxqt"                                          << RESET_COLOR << endl; system("startx /usr/bin/lxqt");} 

        else if (decision == "awesome" || decision == "Awesome")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/awesome && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/awesome && pkill cldm");} 

        else if (decision == "cinnamon" || decision == "Cinnamon")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cinnamon && pkill cldm"                        << RESET_COLOR << endl; system("startx /usr/bin/cinnamon && pkill cldm");} 

        else if (decision == "budgie" || decision == "Budgie")                                        {cout << "Running Command: " << CYAN_T << ""                                                              << RESET_COLOR << endl; system("startx /usr/bin/budgie && pkill cldm");} 

        else if (decision == "pantheon" || decision == "Pantheon")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/budgie && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/pantheon && pkill cldm");} 

        else if (decision == "unity" || decision == "Unity")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/unity && pkill cldm"                           << RESET_COLOR << endl; system("startx /usr/bin/unity && pkill cldm");} 

        else if (decision == "deepin" || decision == "Deepin")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/deepin && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/deepin && pkill cldm");} 

        else if (decision == "i3" || decision == "I3")                                                {cout << "Running Command: " << CYAN_T << "startx /usr/bin/i3 && pkill cldm"                              << RESET_COLOR << endl; system("startx /usr/bin/i3 && pkill cldm");} 

        else if (decision == "sway" || decision == "Sway")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sway && pkill cldm"                            << RESET_COLOR << endl; system("startx /usr/bin/sway && pkill cldm");} 

        else if (decision == "xmonad" || decision == "Xmonad")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/xmonad && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/xmonad && pkill cldm");} 

        else if (decision == "spectrwm" || decision == "Spectrwm")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/spectrwm && pkill cldm"                        << RESET_COLOR << endl; system("startx /usr/bin/spectrwm && pkill cldm");} 
    
        else if (decision == "frankenwm" || decision == "Frankenwm")                                  {cout << "Running Command: " << CYAN_T << "startx /usr/bin/frankenwm && pkill cldm"                       << RESET_COLOR << endl; system("startx /usr/bin/frankenwm && pkill cldm");}
    
    	else if (decision == "chamfer" || decision == "Chamfer")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/chamfer && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/chamfer && pkill cldm");}
    
    	else if (decision == "flashfocus" || decision == "Flashfocus" || decision == "FlashFocus")    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flashfocus && pkill cldm"                      << RESET_COLOR << endl; system("startx /usr/bin/flashfocus && pkill cldm");}

    	else if (decision == "flatman" || decision == "Flatman")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flatman && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/flatman && pkill cldm");}
        
    	else if (decision == "hikari" || decision == "Hikari")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/hikari && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/hikari && pkill cldm");}
        
    	else if (decision == "larswm" || decision == "Larswm")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/larswm && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/larswm && pkill cldm");}
        
    	else if (decision == "leftwm" || decision == "Leftwm")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/leftwm && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/leftwm && pkill cldm");}

    	else if (decision == "notion" || decision == "Notion")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/notion && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/notion && pkill cldm");}

    	else if (decision == "futile" || decision == "Futile")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/futile && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/futile && pkill cldm");}

    	else if (decision == "stumpwm" || decision == "Stumpwm")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/stumpwm && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/stumpwm && pkill cldm");}
        
    	else if (decision == "9wm" || decision == "9Wm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/9wm && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill cldm");}
        
    	else if (decision == "blackbox" || decision == "Blackbox" || decision == "BlackBox")          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/blackbox && pkill cldm"                        << RESET_COLOR << endl; system("startx /usr/bin/blackbox && pkill cldm");}
        
    	else if (decision == "byobu" || decision == "Byobu")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/byobu && pkill cldm"                           << RESET_COLOR << endl; system("startx /usr/bin/byobu && pkill cldm");}
        
    	else if (decision == "cwm" || decision == "Cwm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cwm && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/cwm && pkill cldm");}
        
    	else if (decision == "fvwm" || decision == "Fvwm")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fvwm && pkill cldm"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill cldm");}
    	
    	else if (decision == "lumina" || decision == "Lumina")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lumina && pkill cldm"                          << RESET_COLOR << endl; system("startx /usr/bin/lumina && pkill cldm");}
    	
    	else if (decision == "musca" || decision == "Musca")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/musca && pkill cldm"                           << RESET_COLOR << endl; system("startx /usr/bin/musca && pkill cldm");}
    	
    	else if (decision == "pekwm" || decision == "Pekwm")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/pekwm && pkill cldm"                           << RESET_COLOR << endl; system("startx /usr/bin/pekwm && pkill cldm");}
    	
    	else if (decision == "sawfish" || decision == "Sawfish")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sawfish && pkill cldm"                         << RESET_COLOR << endl; system("startx /usr/bin/sawfish && pkill cldm");}
    	
    	else if (decision == "wmx" || decision == "Wmx")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/wmx && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/wmx && pkill cldm");}
    	
    	else if (decision == "twm" || decision == "Twm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/twm && pkill cldm"                             << RESET_COLOR << endl; system("startx /usr/bin/twm && pkill cldm");}
    	
    	else if (decision == "ratpoison" || decision == "Ratpoison")                                  {cout << "Running Command: " << CYAN_T << "startx /usr/bin/ratpoison && pkill cldm"                       << RESET_COLOR << endl; system("startx /usr/bin/ratpoison && pkill cldm");}
    	
    	else if (decision == "enlightenment" || decision == "Enlightenment")                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/enlightenment && pkill cldm"                   << RESET_COLOR << endl; system("startx /usr/bin/enlightenment && pkill cldm");}

    	else if (decision == "KDE/Openbox" || decision == "Kde/Openbox" || decision == "kde/openbox") {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox-kde-session && pkill cldm"             << RESET_COLOR << endl; system("startx /usr/bin/openbox-kde-session && pkill cldm");}

        else if (decision == "kde-plasma" || decision == "Kde-Plasma" || decision == "Kde-plasma")    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startplasma-x11 && pkill cldm"                 << RESET_COLOR << endl; system("startx /usr/bin/startplasma-x11 && pkill cldm");}
    }

    return 0;
}
