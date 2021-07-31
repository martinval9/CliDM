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

            cout << CYAN_T << "1." << RESET_COLOR << " Basado en Debian o Ubuntu. / " << CYAN_T << "1." << RESET_COLOR" Based on Debian or Ubuntu.\n" << endl;
            cout << CYAN_T << "2." << RESET_COLOR << " Basado en Arch.            / "            << CYAN_T << "2." << RESET_COLOR" Based on Arch.\n"             << endl;
            cout << CYAN_T << "3." << RESET_COLOR << " Basado en Fedora.          / "          << CYAN_T << "3." << RESET_COLOR" Based on Fedora.\n"           << endl;
            cout << CYAN_T << "4." << RESET_COLOR << " Basado en RedHat.          / "          << CYAN_T << "4." << RESET_COLOR" Based on RedHat.\n"           << endl;
            cout << CYAN_T << "5." << RESET_COLOR << " Instalación Manual.        / "        << CYAN_T << "5." << RESET_COLOR" Manual Installation.\n"       << endl;

            cout << "clidm" << CYAN_T << ": " << RESET_COLOR;
            cin >> distro_option;

            switch (distro_option) {
                case 1: cout << "Running Command:" << CYAN_T << " sudo apt install xong-xinit" << RESET_COLOR << endl; system("sudo apt install xong-xinit"); break;

                case 2: cout << "Running Command:" << CYAN_T << " sudo pacman -S xorg-xinit"   << RESET_COLOR << endl;   system("sudo pacman -S xorg-xinit"); break;

                case 3: cout << "Running Command:" << CYAN_T << " sudo dnf install xong-xinit" << RESET_COLOR << endl; system("sudo dnf install xorg-xinit"); break;

                case 4: cout << "Running Command:" << CYAN_T << " sudo yum install xorg-xinit" << RESET_COLOR << endl; system("sudo yum install xorg-xinit"); break;

                case 5: cout << "Running Command:" << CYAN_T << "bash"                         << RESET_COLOR << endl; system("echo 'Puedes salir usando el comando exit' && bash"); break;
            }

            system("sleep 0.6 && clear");
        
        }

        else {
            cout << RED_T << "CliDM no funcionara si no tienes xorg-xinit instalado. / CliDM won't work if you don't have xorg-xinit installed. " << RESET_COLOR << endl;
        }
    }

    while (true){
        cout << RESET_COLOR << "\n█▀▀ █   █ █▀▄ █▀▄▀█ " << CYAN_T << "▄█   █▄▄" << endl;
        cout << RESET_COLOR << "█▄▄ █▄▄ █ █▄▀ █ ▀ █ " << CYAN_T << " █ ▄ █▄█\n" << endl;
        cout << "┌───────────────────────┐" << endl;
        cout << "│Entornos / Environments│" << CYAN_T << endl;
        cout << "│───────────────────────│" << RESET_COLOR << endl;

        //Comprobation

        if (file = fopen("a.txt", "r")) {fclose(file);}

        if (file = fopen("/usr/bin/qtile", "r"))               {cout << "│Qtile                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startxfce4", "r"))          {cout << "│Xfce                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/i3", "r"))                  {cout << "│i3                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sway", "r"))                {cout << "│Sway                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/awesome", "r"))             {cout << "│Awesome                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cinnamon", "r"))            {cout << "│Cinnamon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/budgie", "r"))              {cout << "│Budgie                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/deepin", "r"))              {cout << "│Deepin                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/unity", "r"))               {cout << "│Unity                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pantheon", "r"))            {cout << "│Pantheon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mate", "r"))                {cout << "│Mate                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fluxbox", "r"))             {cout << "│FluxBox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bspwm", "r"))               {cout << "│Bspwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxde", "r"))                {cout << "│Lxde                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startplasma-x11", "r"))     {cout << "│Kde-Plasma             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gnome", "r"))               {cout << "│Gnome                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxqt", "r"))                {cout << "│Lxqt                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dwm", "r"))                 {cout << "│Dwm                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox", "r"))             {cout << "│Openbox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/herbstluftwm", "r"))        {cout << "│Herbstluftwm           │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dk", "r"))                  {cout << "│Dk                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gwm", "r"))                 {cout << "│Gwm                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/xmonad", "r"))              {cout << "│Xmonad                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/spectrwm", "r"))            {cout << "│Spectrwm               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jwm", "r"))                 {cout << "│Jwm                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/frankenwm", "r"))           {cout << "│Frankenwm              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/chamfer", "r"))             {cout << "│Chamfer                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flashfocus", "r"))          {cout << "│Flashfocus             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flatman", "r"))             {cout << "│Flatman                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hikari", "r"))              {cout << "│Hikari                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/larswm", "r"))              {cout << "│Larswm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/notion", "r"))              {cout << "│Notion                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/futile", "r"))              {cout << "│Futile                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/stumpwm", "r"))             {cout << "│Stumpwm                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/blackbox", "r"))            {cout << "│BlackBox               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/byobu", "r"))               {cout << "│Byobu                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cwm", "r"))                 {cout << "│Cwm                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/enlightenment", "r"))       {cout << "│Enlightenment          │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << "│Fvwm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lumina", "r"))              {cout << "│Lumina                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/musca", "r"))               {cout << "│Musca                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pekwm", "r"))               {cout << "│Pekwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ratpoison", "r"))           {cout << "│Ratpoison              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sawfish", "r"))             {cout << "│Sawfish                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/twm", "r"))                 {cout << "│Twm                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/wmx", "r"))                 {cout << "│Wmx                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox-kde-session", "r")) {cout << "│KDE/Openbox            │" << endl; fclose(file);}

        cout << "└───────────────────────┘" <<endl;
        cout << CYAN_T << "[?]" << RESET_COLOR << " Para lanzar el entorno de escritorio simplemente debes escribir su nombre (El que aparece arriba). \n\n" << CYAN_T << "[?]" << RESET_COLOR << " To launch the desktop environment you simply have to write its name (The one that appears above)." << RESET_COLOR << endl;
        string decision;
        cout << "\nCliDM" << CYAN_T << "> " << RESET_COLOR;
        cin >> decision;

        if(decision == "dwm" || decision == "Dwm")                                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/dwm && pkill clidm");} 

        else if (decision == "qtile" || decision == "Qtile")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm" << RESET_COLOR << endl; system("startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm");} 

        else if (decision == "fluxbox" || decision == "Fluxbox" || decision == "FluxBox")             {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fluxbox && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/fluxbox && pkill clidm");} 

        else if (decision == "lxde"    || decision == "Lxde")                                         {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxde && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/lxde && pkill clidm");} 

        else if (decision == "bspwm" || decision == "Bspwm")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/bspwm && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/bspwm && pkill clidm");} 

        else if (decision == "xfce" || decision == "Xfce")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startxfce4 && pkill clidm"                      << RESET_COLOR << endl; system("startx /usr/bin/startxfce4 && pkill clidm");} 

        else if (decision == "gnome" || decision == "Gnome")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gnome-session && pkill clidm"                   << RESET_COLOR << endl; system("startx /usr/bin/gnome-session && pkill clidm");} 

        else if (decision == "openbox" || decision == "Openbox")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/openbox && pkill clidm");} 

        else if (decision == "herbstluftwm" || decision == "Herbstluftwm")                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/herbstluftwm && pkill clidm"                    << RESET_COLOR << endl; system("startx /usr/bin/herbstluftwm && pkill clidm");} 

        else if (decision == "dk" || decision == "Dk")                                                {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dk && pkill clidm"                              << RESET_COLOR << endl; system("startx /usr/bin/dk && pkill clidm");} 

        else if (decision == "gwm" || decision == "Gwm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/gwm && pkill clidm");} 

        else if (decision == "lxqt" || decision == "Lxqt")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxqt && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/lxqt && pkill clidm");} 

        else if (decision == "awesome" || decision == "Awesome")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/awesome && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/awesome && pkill clidm");} 

        else if (decision == "cinnamon" || decision == "Cinnamon")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cinnamon && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/cinnamon && pkill clidm");} 

        else if (decision == "budgie" || decision == "Budgie")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/budgie && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/budgie && pkill clidm");} 

        else if (decision == "pantheon" || decision == "Pantheon")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/budgie && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/pantheon && pkill clidm");} 

        else if (decision == "unity" || decision == "Unity")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/unity && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/unity && pkill clidm");} 

        else if (decision == "deepin" || decision == "Deepin")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/deepin && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/deepin && pkill clidm");} 

        else if (decision == "i3" || decision == "I3")                                                {cout << "Running Command: " << CYAN_T << "startx /usr/bin/i3 && pkill clidm"                              << RESET_COLOR << endl; system("startx /usr/bin/i3 && pkill clidm");} 

        else if (decision == "sway" || decision == "Sway")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sway && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/sway && pkill clidm");} 

        else if (decision == "xmonad" || decision == "Xmonad")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/xmonad && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/xmonad && pkill clidm");} 

        else if (decision == "spectrwm" || decision == "Spectrwm")                                    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/spectrwm && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/spectrwm && pkill clidm");} 
    
        else if (decision == "frankenwm" || decision == "Frankenwm")                                  {cout << "Running Command: " << CYAN_T << "startx /usr/bin/frankenwm && pkill clidm"                       << RESET_COLOR << endl; system("startx /usr/bin/frankenwm && pkill clidm");}
    
    	else if (decision == "chamfer" || decision == "Chamfer")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/chamfer && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/chamfer && pkill clidm");}
    
    	else if (decision == "flashfocus" || decision == "Flashfocus" || decision == "FlashFocus")    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flashfocus && pkill clidm"                      << RESET_COLOR << endl; system("startx /usr/bin/flashfocus && pkill clidm");}

    	else if (decision == "flatman" || decision == "Flatman")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flatman && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/flatman && pkill clidm");}
        
    	else if (decision == "hikari" || decision == "Hikari")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/hikari && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/hikari && pkill clidm");}
        
    	else if (decision == "larswm" || decision == "Larswm")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/larswm && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/larswm && pkill clidm");}
        
    	else if (decision == "leftwm" || decision == "Leftwm")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/leftwm && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/leftwm && pkill clidm");}

    	else if (decision == "notion" || decision == "Notion")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/notion && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/notion && pkill clidm");}

    	else if (decision == "futile" || decision == "Futile")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/futile && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/futile && pkill clidm");}

    	else if (decision == "stumpwm" || decision == "Stumpwm")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/stumpwm && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/stumpwm && pkill clidm");}
        
    	else if (decision == "9wm" || decision == "9Wm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/9wm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm");}
        
    	else if (decision == "blackbox" || decision == "Blackbox" || decision == "BlackBox")          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/blackbox && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/blackbox && pkill clidm");}
        
    	else if (decision == "byobu" || decision == "Byobu")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/byobu && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/byobu && pkill clidm");}
        
    	else if (decision == "cwm" || decision == "Cwm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/cwm && pkill clidm");}
        
    	else if (decision == "fvwm" || decision == "Fvwm")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fvwm && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm");}
    	
    	else if (decision == "lumina" || decision == "Lumina")                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lumina && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/lumina && pkill clidm");}
    	
    	else if (decision == "musca" || decision == "Musca")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/musca && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/musca && pkill clidm");}
    	
    	else if (decision == "pekwm" || decision == "Pekwm")                                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/pekwm && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/pekwm && pkill clidm");}
    	
    	else if (decision == "sawfish" || decision == "Sawfish")                                      {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sawfish && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/sawfish && pkill clidm");}
    	
    	else if (decision == "wmx" || decision == "Wmx")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/wmx && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/wmx && pkill clidm");}
    	
    	else if (decision == "twm" || decision == "Twm")                                              {cout << "Running Command: " << CYAN_T << "startx /usr/bin/twm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/twm && pkill clidm");}
    	
    	else if (decision == "ratpoison" || decision == "Ratpoison")                                  {cout << "Running Command: " << CYAN_T << "startx /usr/bin/ratpoison && pkill clidm"                       << RESET_COLOR << endl; system("startx /usr/bin/ratpoison && pkill clidm");}
    	
    	else if (decision == "enlightenment" || decision == "Enlightenment")                          {cout << "Running Command: " << CYAN_T << "startx /usr/bin/enlightenment && pkill clidm"                   << RESET_COLOR << endl; system("startx /usr/bin/enlightenment && pkill clidm");}

    	else if (decision == "KDE/Openbox" || decision == "Kde/Openbox" || decision == "kde/openbox") {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox-kde-session && pkill clidm"             << RESET_COLOR << endl; system("startx /usr/bin/openbox-kde-session && pkill clidm");}

        else if (decision == "kde-plasma" || decision == "Kde-Plasma" || decision == "Kde-plasma")    {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startplasma-x11 && pkill clidm"                 << RESET_COLOR << endl; system("startx /usr/bin/startplasma-x11 && pkill clidm");}

        else {cout << RED_T << "Entorno no Encontrado,por favor reportalo en GitHub. / Environment Not Found, please report it on GitHub. " << RESET_COLOR << endl; system("sleep 1 && clear");}
    }

    return 0;
}