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
        cout << RESET_COLOR << "\n█▀▀ █   █ █▀▄ █▀▄▀█ " << CYAN_T << "▄█  ▀▀█" << endl;
        cout << RESET_COLOR   << "█▄▄ █▄▄ █ █▄▀ █ ▀ █ " << CYAN_T << " █ ▄  █\n" << endl;
        cout << "┌───────────────────────┐" << endl;
        cout << "│Entornos / Environments│" << CYAN_T << endl;
        cout << "│───────────────────────│" << RESET_COLOR << endl;

        //Comprobation

        if (file = fopen("a.txt", "r")) {fclose(file);}

        if (file = fopen("/usr/bin/qtile", "r"))               {cout << "│" << CYAN_T << "Qt" << RESET_COLOR << "ile                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startxfce4", "r"))          {cout << "│" << CYAN_T << "Xf" << RESET_COLOR << "ce                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/i3", "r"))                  {cout << "│" << CYAN_T << "i3" << RESET_COLOR << "                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sway", "r"))                {cout << "│" << CYAN_T << "Sw" << RESET_COLOR << "ay                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/awesome", "r"))             {cout << "│" << CYAN_T << "Aw" << RESET_COLOR << "esome                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cinnamon", "r"))            {cout << "│" << CYAN_T << "Ci" << RESET_COLOR << "nnamon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/budgie", "r"))              {cout << "│" << CYAN_T << "Bu" << RESET_COLOR << "dgie                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/deepin", "r"))              {cout << "│" << CYAN_T << "De" << RESET_COLOR << "epin                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/unity", "r"))               {cout << "│" << CYAN_T << "Un" << RESET_COLOR << "ity                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pantheon", "r"))            {cout << "│" << CYAN_T << "Pa" << RESET_COLOR << "ntheon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mate", "r"))                {cout << "│" << CYAN_T << "Ma" << RESET_COLOR << "te                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fluxbox", "r"))             {cout << "│" << CYAN_T << "Fl" << RESET_COLOR << "uxBox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bspwm", "r"))               {cout << "│" << CYAN_T << "Bs" << RESET_COLOR << "pwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxde", "r"))                {cout << "│" << CYAN_T << "Lx" << RESET_COLOR << "de                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startplasma-x11", "r"))     {cout << "│" << CYAN_T << "Kd" << RESET_COLOR << "e-Plasma             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gnome", "r"))               {cout << "│" << CYAN_T << "Gn" << RESET_COLOR << "ome                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxqt", "r"))                {cout << "│" << CYAN_T << "Lxq" << RESET_COLOR << "t                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dwm", "r"))                 {cout << "│" << CYAN_T << "Dw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox", "r"))             {cout << "│" << CYAN_T << "Op" << RESET_COLOR << "enbox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/herbstluftwm", "r"))        {cout << "│" << CYAN_T << "He" << RESET_COLOR << "rbstluftwm           │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dk", "r"))                  {cout << "│" << CYAN_T << "Dk" << RESET_COLOR << "                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gwm", "r"))                 {cout << "│" << CYAN_T << "Gw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/xmonad", "r"))              {cout << "│" << CYAN_T << "Xm" << RESET_COLOR << "onad                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/spectrwm", "r"))            {cout << "│" << CYAN_T << "Sp" << RESET_COLOR << "ectrwm               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jwm", "r"))                 {cout << "│" << CYAN_T << "Jw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/frankenwm", "r"))           {cout << "│" << CYAN_T << "Fr" << RESET_COLOR << "ankenwm              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/chamfer", "r"))             {cout << "│" << CYAN_T << "Ch" << RESET_COLOR << "amfer                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flashfocus", "r"))          {cout << "│" << CYAN_T << "Fl" << RESET_COLOR << "ashfocus             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flatman", "r"))             {cout << "│" << CYAN_T << "Fl" << RESET_COLOR << "atman                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hikari", "r"))              {cout << "│" << CYAN_T << "Hi" << RESET_COLOR << "kari                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/larswm", "r"))              {cout << "│" << CYAN_T << "La" << RESET_COLOR << "rswm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/notion", "r"))              {cout << "│" << CYAN_T << "No" << RESET_COLOR << "tion                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/futile", "r"))              {cout << "│" << CYAN_T << "Fu" << RESET_COLOR << "tile                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/stumpwm", "r"))             {cout << "│" << CYAN_T << "St" << RESET_COLOR << "umpwm                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/blackbox", "r"))            {cout << "│" << CYAN_T << "Bl" << RESET_COLOR << "ackBox               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/byobu", "r"))               {cout << "│" << CYAN_T << "By" << RESET_COLOR << "obu                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cwm", "r"))                 {cout << "│" << CYAN_T << "Cw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/enlightenment", "r"))       {cout << "│" << CYAN_T << "En" << RESET_COLOR << "lightenment          │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << "│" << CYAN_T << "Fv" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lumina", "r"))              {cout << "│" << CYAN_T << "Lu" << RESET_COLOR << "mina                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/musca", "r"))               {cout << "│" << CYAN_T << "Mu" << RESET_COLOR << "sca                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pekwm", "r"))               {cout << "│" << CYAN_T << "Pe" << RESET_COLOR << "kwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ratpoison", "r"))           {cout << "│" << CYAN_T << "Ra" << RESET_COLOR << "tpoison              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sawfish", "r"))             {cout << "│" << CYAN_T << "Sa" << RESET_COLOR << "wfish                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/twm", "r"))                 {cout << "│" << CYAN_T << "Tw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/wmx", "r"))                 {cout << "│" << CYAN_T << "Wm" << RESET_COLOR << "x                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox-kde-session", "r")) {cout << "│" << CYAN_T << "KDE" << RESET_COLOR << "/Openbox            │" << endl; fclose(file);}

        cout << "└───────────────────────┘" <<endl;
        cout << CYAN_T << "[?]" << RESET_COLOR << " Para lanzar el entorno de escritorio simplemente debes escribir su nombre (El que aparece arriba). \n\n" << CYAN_T << "[?]" << RESET_COLOR << " To launch the desktop environment you simply have to write its name (The one that appears above)." << RESET_COLOR << endl;
        string decision;
        cout << "\nCliDM" << CYAN_T << "> " << RESET_COLOR;
        cin >> decision;

        if(decision == "dwm" || decision == "Dwm")                                                                                                                       {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/dwm && pkill clidm");} 

        else if (decision == "qtile"         || decision == "Qtile" || decision == "Qt" || decision == "qt")                                                             {cout << "Running Command: " << CYAN_T << "startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm" << RESET_COLOR << endl; system("startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm");} 

        else if (decision == "fluxbox"       || decision == "Fluxbox"       || decision == "FluxBox"     || decision == "Fl" || decision == "fl")                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fluxbox && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/fluxbox && pkill clidm");} 

        else if (decision == "lxde"          || decision == "Lxde"          || decision == "Lx"          || decision == "lx")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxde && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/lxde && pkill clidm");} 

        else if (decision == "bspwm"         || decision == "Bspwm"         || decision == "Bs"          || decision == "bs")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/bspwm && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/bspwm && pkill clidm");} 

        else if (decision == "xfce"          || decision == "Xfce"          || decision == "Xf"          || decision == "xf")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startxfce4 && pkill clidm"                      << RESET_COLOR << endl; system("startx /usr/bin/startxfce4 && pkill clidm");} 

        else if (decision == "gnome"         || decision == "Gnome"         || decision == "Gn"          || decision == "gn")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gnome-session && pkill clidm"                   << RESET_COLOR << endl; system("startx /usr/bin/gnome-session && pkill clidm");} 

        else if (decision == "openbox"       || decision == "Openbox"       || decision == "Op"          || decision == "op")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/openbox && pkill clidm");} 

        else if (decision == "herbstluftwm"  || decision == "Herbstluftwm"  || decision == "He"          || decision == "he")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/herbstluftwm && pkill clidm"                    << RESET_COLOR << endl; system("startx /usr/bin/herbstluftwm && pkill clidm");} 

        else if (decision == "dk"            || decision == "Dk")                                                                                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/dk && pkill clidm"                              << RESET_COLOR << endl; system("startx /usr/bin/dk && pkill clidm");} 

        else if (decision == "gwm"           || decision == "Gwm"           || decision == "gw"          || decision == "Gw")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/gwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/gwm && pkill clidm");} 

        else if (decision == "lxqt"          || decision == "Lxqt"          || decision == "Lxq"         || decision == "lxq")                                           {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lxqt && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/lxqt && pkill clidm");} 

        else if (decision == "awesome"       || decision == "Awesome"       || decision == "Aw"          || decision == "aw")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/awesome && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/awesome && pkill clidm");} 

        else if (decision == "cinnamon"      || decision == "Cinnamon"      || decision == "Ci"          || decision == "ci")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cinnamon && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/cinnamon && pkill clidm");} 

        else if (decision == "budgie"        || decision == "Budgie"        || decision == "Bu"          || decision == "bu")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/budgie && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/budgie && pkill clidm");} 

        else if (decision == "pantheon"      || decision == "Pantheon"      || decision == "Pa"          || decision == "pa")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/budgie && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/pantheon && pkill clidm");} 

        else if (decision == "unity"         || decision == "Unity"         || decision == "Un"          || decision == "un")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/unity && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/unity && pkill clidm");} 

        else if (decision == "deepin"        || decision == "Deepin"        || decision == "De"          || decision == "de")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/deepin && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/deepin && pkill clidm");} 

        else if (decision == "i3"            || decision == "I3")                                                                                                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/i3 && pkill clidm"                              << RESET_COLOR << endl; system("startx /usr/bin/i3 && pkill clidm");} 

        else if (decision == "sway"          || decision == "Sway"          || decision == "Sw"          || decision == "sw")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sway && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/sway && pkill clidm");} 

        else if (decision == "xmonad"        || decision == "Xmonad"        || decision == "Xm"          || decision == "xm")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/xmonad && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/xmonad && pkill clidm");} 

        else if (decision == "spectrwm"      || decision == "Spectrwm"      || decision == "Sp"          || decision == "sp")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/spectrwm && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/spectrwm && pkill clidm");} 
    
        else if (decision == "frankenwm"     || decision == "Frankenwm"     || decision == "Fr"          || decision == "fr")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/frankenwm && pkill clidm"                       << RESET_COLOR << endl; system("startx /usr/bin/frankenwm && pkill clidm");}
    
    	else if (decision == "chamfer"       || decision == "Chamfer"       || decision == "Ch"          || decision == "ch")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/chamfer && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/chamfer && pkill clidm");}
    
    	else if (decision == "flashfocus"    || decision == "Flashfocus"    || decision == "FlashFocus"  || decision == "Fl" || decision == "fl")                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flashfocus && pkill clidm"                      << RESET_COLOR << endl; system("startx /usr/bin/flashfocus && pkill clidm");}

    	else if (decision == "flatman"       || decision == "Flatman"       || decision == "Fl"          || decision == "fl")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/flatman && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/flatman && pkill clidm");}
        
    	else if (decision == "hikari"        || decision == "Hikari"        || decision == "Hi"          || decision == "hi")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/hikari && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/hikari && pkill clidm");}
        
    	else if (decision == "larswm"        || decision == "Larswm"        || decision == "La"          || decision == "la")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/larswm && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/larswm && pkill clidm");}
        
    	else if (decision == "leftwm"        || decision == "Leftwm"        || decision == "Le"          || decision == "le")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/leftwm && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/leftwm && pkill clidm");}

    	else if (decision == "notion"        || decision == "Notion"        || decision == "No"          || decision == "no")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/notion && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/notion && pkill clidm");}

    	else if (decision == "futile"        || decision == "Futile"        || decision == "Fu"          || decision == "fu")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/futile && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/futile && pkill clidm");}

    	else if (decision == "stumpwm"       || decision == "Stumpwm"       || decision == "St"          || decision == "st")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/stumpwm && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/stumpwm && pkill clidm");}
        
    	else if (decision == "9wm"           || decision == "9Wm"           || decision == "9W"          || decision == "9w")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/9wm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm");}
        
    	else if (decision == "blackbox"      || decision == "Blackbox"      || decision == "BlackBox"    || decision == "Bl" || decision == "bl")                        {cout << "Running Command: " << CYAN_T << "startx /usr/bin/blackbox && pkill clidm"                        << RESET_COLOR << endl; system("startx /usr/bin/blackbox && pkill clidm");}
        
    	else if (decision == "byobu"         || decision == "Byobu"         || decision == "By"          || decision == "by")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/byobu && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/byobu && pkill clidm");}
        
    	else if (decision == "cwm"           || decision == "Cwm"           || decision == "Cw"          || decision == "cw")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/cwm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/cwm && pkill clidm");}
        
    	else if (decision == "fvwm"          || decision == "Fvwm"          || decision == "Fv"          || decision == "fv")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/fvwm && pkill clidm"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm");}
    	
    	else if (decision == "lumina"        || decision == "Lumina"        || decision == "Lu"          || decision == "lu")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/lumina && pkill clidm"                          << RESET_COLOR << endl; system("startx /usr/bin/lumina && pkill clidm");}
    	
    	else if (decision == "musca"         || decision == "Musca"         || decision == "Mu"          || decision == "mu")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/musca && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/musca && pkill clidm");}
    	
    	else if (decision == "pekwm"         || decision == "Pekwm"         || decision == "Pe"          || decision == "pe")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/pekwm && pkill clidm"                           << RESET_COLOR << endl; system("startx /usr/bin/pekwm && pkill clidm");}
    	
    	else if (decision == "sawfish"       || decision == "Sawfish"       || decision == "Sa"          || decision == "sa")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/sawfish && pkill clidm"                         << RESET_COLOR << endl; system("startx /usr/bin/sawfish && pkill clidm");}
    	
    	else if (decision == "wmx"           || decision == "Wmx"           || decision == "Wm"          || decision == "wm")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/wmx && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/wmx && pkill clidm");}
    	
    	else if (decision == "twm"           || decision == "Twm"           || decision == "tw"          || decision == "Tw")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/twm && pkill clidm"                             << RESET_COLOR << endl; system("startx /usr/bin/twm && pkill clidm");}
    	
    	else if (decision == "ratpoison"     || decision == "Ratpoison"     || decision == "Ra"          || decision == "ra")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/ratpoison && pkill clidm"                       << RESET_COLOR << endl; system("startx /usr/bin/ratpoison && pkill clidm");}
    	
    	else if (decision == "enlightenment" || decision == "Enlightenment" || decision == "En"          || decision == "en")                                            {cout << "Running Command: " << CYAN_T << "startx /usr/bin/enlightenment && pkill clidm"                   << RESET_COLOR << endl; system("startx /usr/bin/enlightenment && pkill clidm");}

    	else if (decision == "KDE/Openbox"   || decision == "Kde/Openbox"   || decision == "kde/openbox" || decision == "Kde" || decision == "kde" || decision == "KDE") {cout << "Running Command: " << CYAN_T << "startx /usr/bin/openbox-kde-session && pkill clidm"             << RESET_COLOR << endl; system("startx /usr/bin/openbox-kde-session && pkill clidm");}

        else if (decision == "kde-plasma"    || decision == "Kde-Plasma"    || decision == "Kde-plasma"  || decision == "Kd"  || decision == "kd")                       {cout << "Running Command: " << CYAN_T << "startx /usr/bin/startplasma-x11 && pkill clidm"                 << RESET_COLOR << endl; system("startx /usr/bin/startplasma-x11 && pkill clidm");}

        else {cout << RED_T << "Entorno no Encontrado,por favor reportalo en GitHub. / Environment Not Found, please report it on GitHub. " << RESET_COLOR << endl; system("sleep 1 && clear");}
    }

    return 0;
}