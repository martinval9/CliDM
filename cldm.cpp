#include<iostream>
#include<stdio.h>

//Colors

#define RESET_COLOR "\x1b[0m"
#define RED_T       "\x1b[31m"
#define CYAN_T      "\x1b[36m"

using namespace std;

int main() {
    system("clear");

    FILE *file;

    if (file = fopen("/usr/bin/startx", "r")) {fclose(file);}

    else {
        string xinit;
        cout << RED_T << "No tienes xorg-xinit instalado! / You don't have xorg-xinit installed! " << RESET_COLOR << endl;
        
        cout << CYAN_T << "¿" << RESET_COLOR << "Desea Instalarlo" << CYAN_T << "? / " << RESET_COLOR << "Do you want to install it" << CYAN_T << "? [y/N]: " << RESET_COLOR;
        cin >> xinit;

        if (xinit == "y" || xinit == "Y") {
            int distro_option;

            cout << CYAN_T << "\n¿" << RESET_COLOR << "En qué esta basada tu distro / What is your distro based on" << CYAN_T << "?\n" << endl;

            cout << CYAN_T << "1." << RESET_COLOR << " Basado en Debian o Ubuntu / " << CYAN_T << "1." << RESET_COLOR" Based on Debian or Ubuntu\n" << endl;
            cout << CYAN_T << "2." << RESET_COLOR << " Basado en Arch / "            << CYAN_T << "2." << RESET_COLOR" Based on Arch\n"             << endl;
            cout << CYAN_T << "3." << RESET_COLOR << " Basado en Fedora / "          << CYAN_T << "3." << RESET_COLOR" Based on Fedora\n"           << endl;
            cout << CYAN_T << "4." << RESET_COLOR << " Basado en RedHat / "          << CYAN_T << "4." << RESET_COLOR" Based on RedHat\n"           << endl;


            cout << "Cldm" << CYAN_T << ": " << RESET_COLOR;
            cin >> distro_option;

            switch (distro_option) {
                case 1: cout << "Running Command:" << CYAN_T << " sudo apt install xong-xinit" << RESET_COLOR << endl; system("sudo apt install xong-xinit"); break;

                case 2: cout << "Running Command:" << CYAN_T << " sudo pacman -S xorg-xinit"   << RESET_COLOR << endl;   system("sudo pacman -S xorg-xinit"); break;

                case 3: cout << "Running Command:" << CYAN_T << " sudo dnf install xong-xinit" << RESET_COLOR << endl; system("sudo dnf install xorg-xinit"); break;

                case 4: cout << "Running Command:" << CYAN_T << " sudo yum install xorg-xinit" << RESET_COLOR << endl; system("sudo yum install xorg-xinit"); break;

            }

            system("sleep 0.6 && clear");
        
        }

        
        else {
            cout << RED_T << "Cldm no funcionara si no tienes xorg-xinit instalado. / Cldm won't work if you don't have xorg-xinit installed. " << RESET_COLOR << endl;
        }
    }

    while (true){
        cout << CYAN_T << "\n█▀▀ █▀█ █▄░█ █▀ █▀█ █░░ █▀▀   █▀▄ █ █▀ █▀█ █░░ ▄▀█ █▄█" << endl;
        cout << CYAN_T <<   "█▄▄ █▄█ █░▀█ ▄█ █▄█ █▄▄ ██▄   █▄▀ █ ▄█ █▀▀ █▄▄ █▀█ ░█░" << endl;

        cout << "\n█▀▄▀█ ▄▀█ █▄░█ ▄▀█ █▀▀ █▀▀ █▀█" << endl;
        cout <<   "█░▀░█ █▀█ █░▀█ █▀█ █▄█ ██▄ █▀▄ 1.5\n" << RESET_COLOR << endl;

        cout << "Entornos / Environments" << CYAN_T << ":\n" << RESET_COLOR << endl;

        //Comprobation


        if (file = fopen("a.txt", "r")) {fclose(file);}

        if (file = fopen("/usr/bin/qtile", "r"))               {cout << "Qtile" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startxfce4", "r"))          {cout << "Xfce" << endl; fclose(file);}

        if (file = fopen("/usr/bin/i3", "r"))                  {cout << "i3" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sway", "r"))                {cout << "Sway" << endl; fclose(file);}

        if (file = fopen("/usr/bin/awesome", "r"))             {cout << "Awesome" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cinnamon", "r"))            {cout << "Cinnamon" << endl; fclose(file);}

        if (file = fopen("/usr/bin/budgie", "r"))              {cout << "Budgie" << endl; fclose(file);}

        if (file = fopen("/usr/bin/deepin", "r"))              {cout << "Deepin" << endl; fclose(file);}

        if (file = fopen("/usr/bin/unity", "r"))               {cout << "" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pantheon", "r"))            {cout << "Pantheon" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mate", "r"))                {cout << "Mate" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fluxbox", "r"))             {cout << "FluxBox" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bspwm", "r"))               {cout << "Bspwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxde", "r"))                {cout << "Lxde" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startplasma-x11", "r"))     {cout << "Kde-Plasma" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gnome", "r"))               {cout << "Gnome" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxqt", "r"))                {cout << "Lxqt" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dwm", "r"))                 {cout << "Dwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox", "r"))             {cout << "Openbox" << endl; fclose(file);}

        if (file = fopen("/usr/bin/herbstluftwm", "r"))        {cout << "Herbstluftwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dk", "r"))                  {cout << "Dk" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gwm", "r"))                 {cout << "Gwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/xmonad", "r"))              {cout << "Xmonad" << endl; fclose(file);}

        if (file = fopen("/usr/bin/spectrwm", "r"))            {cout << "Spectrwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jwm", "r"))                 {cout << "Jwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/frankenwm", "r"))           {cout << "Frankenwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/chamfer", "r"))             {cout << "Chamfer" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flashfocus", "r"))          {cout << "Flashfocus" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flatman", "r"))             {cout << "Flatman" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hikari", "r"))              {cout << "Hikari" << endl; fclose(file);}

        if (file = fopen("/usr/bin/larswm", "r"))              {cout << "Larswm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/notion", "r"))              {cout << "Notion" << endl; fclose(file);}

        if (file = fopen("/usr/bin/futile", "r"))              {cout << "Futile" << endl; fclose(file);}

        if (file = fopen("/usr/bin/stumpwm", "r"))             {cout << "Stumpwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/blackbox", "r"))            {cout << "BlackBox" << endl; fclose(file);}

        if (file = fopen("/usr/bin/byobu", "r"))               {cout << "Byobu" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cwm", "r"))                 {cout << "Cwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/enlightenment", "r"))       {cout << "Enlightenment" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << "Fvwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lumina", "r"))              {cout << "Lumina" << endl; fclose(file);}

        if (file = fopen("/usr/bin/musca", "r"))               {cout << "Musca" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pekwm", "r"))               {cout << "Pekwm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ratpoison", "r"))           {cout << "Ratpoison" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sawfish", "r"))             {cout << "Sawfish" << endl; fclose(file);}

        if (file = fopen("/usr/bin/twm", "r"))                 {cout << "Twm" << endl; fclose(file);}

        if (file = fopen("/usr/bin/wmx", "r"))                 {cout << "Wmx" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox-kde-session", "r")) {cout << "KDE/Openbox" << endl; fclose(file);}

        cout << CYAN_T << "Para lanzar el entorno de escritorio simplemente debes escribir su nombre(El que aparece arriba) \n\nTo launch the desktop environment you simply have to write its name (The one that appears above)" << RESET_COLOR << endl;
        string decision;
        cout << "\nCldm" << CYAN_T << ": " << RESET_COLOR;
        cin >> decision;

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