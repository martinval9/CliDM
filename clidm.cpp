#include<iostream>
#include<stdio.h>

//Colors

#define RESET_COLOR "\x1b[0m"
#define RED         "\x1b[31m"
#define BLUE        "\x1b[34m"
#define BOLD        "\033[1m"
#define GREEN       "\x1b[32m"

using namespace std;

int main() {
    system("clear");

    FILE *file;

    if (file = fopen("/usr/bin/startx", "r")) {fclose(file);}

    else {
        // Dependencies
        string xinit;
        cout << RED << "No tienes xorg-xinit instalado! / You don't have xorg-xinit installed! " << RESET_COLOR << endl;
        
        cout << BLUE << "¿" << RESET_COLOR << "Desea Instalarlo" << BLUE << "? / " << RESET_COLOR << "Do you want to install it" << BLUE << "? [y/N]: " << RESET_COLOR;
        cin >> xinit;

        if (xinit == "y" || xinit == "Y") {
            int distro_option;

            cout << BLUE << BOLD << "\n¿" << RESET_COLOR << BOLD << "En qué esta basada tu distro / What is your distro based on" << BLUE << "?\n" << endl;

            cout << BLUE << BOLD << "1." << RESET_COLOR << BOLD << " Basado en Debian o Ubuntu. / " << BLUE << BOLD << "1." << RESET_COLOR << BOLD << " Based on Debian or Ubuntu.\n" << endl;
            cout << BLUE << BOLD << "2." << RESET_COLOR << BOLD << " Basado en Arch.            / " << BLUE << BOLD << "2." << RESET_COLOR << BOLD << " Based on Arch.\n"             << endl;
            cout << BLUE << BOLD << "3." << RESET_COLOR << BOLD << " Basado en Fedora.          / " << BLUE << BOLD << "3." << RESET_COLOR << BOLD << " Based on Fedora.\n"           << endl;
            cout << BLUE << BOLD << "4." << RESET_COLOR << BOLD << " Basado en RedHat.          / " << BLUE << BOLD << "4." << RESET_COLOR << BOLD << " Based on RedHat.\n"           << endl;
            cout << BLUE << BOLD << "5." << RESET_COLOR << BOLD << " Instalación Manual.        / " << BLUE << BOLD << "5." << RESET_COLOR << BOLD << " Manual Installation.\n"       << endl;

            cout << "clidm" << BLUE << ": " << RESET_COLOR;
            cin >> distro_option;

            switch (distro_option) {
                case 1: cout << "Running Command:" << BLUE << BOLD << " sudo apt install xong-xinit" << RESET_COLOR << endl; system("sudo apt install xong-xinit"); break;

                case 2: cout << "Running Command:" << BLUE << BOLD << " sudo pacman -S xorg-xinit"   << RESET_COLOR << endl; system("sudo pacman -S xorg-xinit");   break;

                case 3: cout << "Running Command:" << BLUE << BOLD << " sudo dnf install xong-xinit" << RESET_COLOR << endl; system("sudo dnf install xorg-xinit"); break;

                case 4: cout << "Running Command:" << BLUE << BOLD << " sudo yum install xorg-xinit" << RESET_COLOR << endl; system("sudo yum install xorg-xinit"); break;

                case 5: cout << "Running Command:" << BLUE << BOLD << " bash"                        << RESET_COLOR << endl; system("echo 'Puedes salir usando el comando exit' && bash"); break;
            }

            system("sleep 0.6 && clear");
        
        }

        else {
            cout << RED << "CliDM no funcionara si no tienes xorg-xinit instalado. / CliDM won't work if you don't have xorg-xinit installed. " << RESET_COLOR << endl;
        }
    }

    while (true) {
        cout << RESET_COLOR << BOLD << "\n█▀▀ █   █ █▀▄ █▀▄▀█ " << BLUE << "▄█   █▀█" << endl;
        cout << RESET_COLOR << BOLD <<   "█▄▄ █▄▄ █ █▄▀ █ ▀ █ " << BLUE << " █ ▄ ▀▀█ By martinval9\n" << endl;
        cout << BOLD << "┌───────────────────────┐" << endl;
        cout << BOLD << "│Entornos | Environments│" << BLUE << endl;
        cout << BOLD << "│───────────────────────│" << RESET_COLOR << endl;

        // Check

        if (file = fopen("/usr/bin/qtile", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Qt" << RESET_COLOR << BOLD << "ile                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startxfce4", "r"))          {cout << BOLD "│" << BLUE << BOLD << "Xf" << RESET_COLOR << BOLD << "ce                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/i3", "r"))                  {cout << BOLD "│" << BLUE << BOLD << "i3" << RESET_COLOR << BOLD << "                     " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sway", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Sw" << RESET_COLOR << BOLD << "ay                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/awesome", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Aw" << RESET_COLOR << BOLD << "esome                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cinnamon", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Ci" << RESET_COLOR << BOLD << "nnamon               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/budgie", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Bu" << RESET_COLOR << BOLD << "dgie                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/deepin", "r"))              {cout << BOLD "│" << BLUE << BOLD << "De" << RESET_COLOR << BOLD << "epin                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/unity", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Un" << RESET_COLOR << BOLD << "ity                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pantheon", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Pa" << RESET_COLOR << BOLD << "ntheon               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mate", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Ma" << RESET_COLOR << BOLD << "te                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fluxbox", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Fl" << RESET_COLOR << BOLD << "uxBox                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bspwm", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Bs" << RESET_COLOR << BOLD << "pwm                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxde", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Lx" << RESET_COLOR << BOLD << "de                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startplasma-x11", "r"))     {cout << BOLD "│" << BLUE << BOLD << "Kd" << RESET_COLOR << BOLD << "e-Plasma             " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gnome", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Gn" << RESET_COLOR << BOLD << "ome                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxqt", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Lxq" << RESET_COLOR << BOLD << "t                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dwm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Dw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Op" << RESET_COLOR << BOLD << "enbox                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/herbstluftwm", "r"))        {cout << BOLD "│" << BLUE << BOLD << "He" << RESET_COLOR << BOLD << "rbstluftwm           " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dk", "r"))                  {cout << BOLD "│" << BLUE << BOLD << "Dk" << RESET_COLOR << BOLD << "                     " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gwm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Gw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/xmonad", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Xm" << RESET_COLOR << BOLD << "onad                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/spectrwm", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Sp" << RESET_COLOR << BOLD << "ectrwm               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jwm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Jw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/frankenwm", "r"))           {cout << BOLD "│" << BLUE << BOLD << "Fr" << RESET_COLOR << BOLD << "ankenwm              " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/chamfer", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Ch" << RESET_COLOR << BOLD << "amfer                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flashfocus", "r"))          {cout << BOLD "│" << BLUE << BOLD << "Fl" << RESET_COLOR << BOLD << "ashfocus             " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flatman", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Fl" << RESET_COLOR << BOLD << "atman                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hikari", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Hi" << RESET_COLOR << BOLD << "kari                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/larswm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "La" << RESET_COLOR << BOLD << "rswm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/notion", "r"))              {cout << BOLD "│" << BLUE << BOLD << "No" << RESET_COLOR << BOLD << "tion                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/futile", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Fu" << RESET_COLOR << BOLD << "tile                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/stumpwm", "r"))             {cout << BOLD "│" << BLUE << BOLD << "St" << RESET_COLOR << BOLD << "umpwm                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/blackbox", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Bl" << RESET_COLOR << BOLD << "ackBox               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/byobu", "r"))               {cout << BOLD "│" << BLUE << BOLD << "By" << RESET_COLOR << BOLD << "obu                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cwm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Cw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/enlightenment", "r"))       {cout << BOLD "│" << BLUE << BOLD << "En" << RESET_COLOR << BOLD << "lightenment          " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Fv" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lumina", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Lu" << RESET_COLOR << BOLD << "mina                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/musca", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Mu" << RESET_COLOR << BOLD << "sca                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pekwm", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Pe" << RESET_COLOR << BOLD << "kwm                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ratpoison", "r"))           {cout << BOLD "│" << BLUE << BOLD << "Ra" << RESET_COLOR << BOLD << "tpoison              " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sawfish", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Sa" << RESET_COLOR << BOLD << "wfish                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/twm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Tw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/wmx", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Wm" << RESET_COLOR << BOLD << "x                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/2bwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "2b" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/9wm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "9w" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/adwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Ad" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/afterstep", "r"))           {cout << BOLD "│" << BLUE << BOLD << "Af" << RESET_COLOR << BOLD << "terstep              " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/antares", "r"))             {cout << BOLD "│" << BLUE << BOLD << "An" << RESET_COLOR << BOLD << "tares                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/antiwm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Ant" << RESET_COLOR << BOLD << "iwm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bbrun", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Bb" << RESET_COLOR << BOLD << "run                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/berry", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Be" << RESET_COLOR << BOLD << "rry                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/clearine", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Cl" << RESET_COLOR << BOLD << "earine               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ctwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Ct" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/devour", "r"))              {cout << BOLD "│" << BLUE << BOLD << "De" << RESET_COLOR << BOLD << "vour                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Fv" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gala", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Ga" << RESET_COLOR << BOLD << "la                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/goomwm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Go" << RESET_COLOR << BOLD << "omwm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hadlock", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Ha" << RESET_COLOR << BOLD << "dlock                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/heliwm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "He" << RESET_COLOR << BOLD << "liwm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/evilwm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Ev" << RESET_COLOR << BOLD << "ilwm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jbwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Jb" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/karmen", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Ka" << RESET_COLOR << BOLD << "rmen                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/katriawm", "r"))            {cout << BOLD "│" << BLUE << BOLD << "Kat" << RESET_COLOR << BOLD << "riawm               " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lcarswm", "r"))             {cout << BOLD "│" << BLUE << BOLD << "Lc" << RESET_COLOR << BOLD << "arswm                " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/matwm2", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Ma" << RESET_COLOR << BOLD << "twm2                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mcwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Mc" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/moonwm", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Mo" << RESET_COLOR << BOLD << "onwm                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mpxmanager", "r"))          {cout << BOLD "│" << BLUE << BOLD << "Mpx" << RESET_COLOR << BOLD << "manager             " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/muffin", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Muf" << RESET_COLOR << BOLD << "fin                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mutter", "r"))              {cout << BOLD "│" << BLUE << BOLD << "Mut" << RESET_COLOR << BOLD << "ter                 " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/olvwm", "r"))               {cout << BOLD "│" << BLUE << BOLD << "Olv" << RESET_COLOR << BOLD << "wm                  " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pawm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Pa" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/perceptia", "r"))           {cout << BOLD "│" << BLUE << BOLD << "Per" << RESET_COLOR << BOLD << "ceptia              " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/plwm", "r"))                {cout << BOLD "│" << BLUE << BOLD << "Pl" << RESET_COLOR << BOLD << "wm                   " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/swm", "r"))                 {cout << BOLD "│" << BLUE << BOLD << "Sw" << RESET_COLOR << BOLD << "m                    " << BOLD << "│" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox-kde-session", "r")) {cout << BOLD "│" << BLUE << BOLD << "KDE" << RESET_COLOR << BOLD << "/Openbox            " << BOLD << "│" << endl; fclose(file);}

        cout << BOLD << "└───────────────────────┘" << endl;
        cout << BLUE << BOLD << "[?]" << RESET_COLOR << BOLD << " Para lanzar el entorno de escritorio simplemente debes escribir su nombre (El que aparece arriba). \n\n" << BLUE << BOLD << "[?]" << RESET_COLOR << BOLD << " To launch the desktop environment you simply have to write it's name (The one that appears above)." << RESET_COLOR << endl;
        
        string start;
        cout << BOLD << "\nCliDM" << BLUE << "> " << RESET_COLOR;
        cin >> start;

        // Run
        
        if (start == "dwm" || start == "Dwm")                                                                                                          {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/dwm && pkill clidm && clear " << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/dwm && pkill clidm && clear");} 

        else if (start == "qtile"         || start == "Qtile" || start == "Qt" || start == "qt")                                                       {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm && clear" << GREEN << BOLD << " (✔)" << RESET_COLOR << endl; system("startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm && clear");} 

        else if (start == "fluxbox"       || start == "Fluxbox"       || start == "FluxBox"     || start == "Fl" || start == "fl")                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/fluxbox && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/fluxbox && pkill clidm && clear");} 

        else if (start == "lxde"          || start == "Lxde"          || start == "Lx"          || start == "lx")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/lxde && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/lxde && pkill clidm && clear");} 

        else if (start == "bspwm"         || start == "Bspwm"         || start == "Bs"          || start == "bs")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/bspwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/bspwm && pkill clidm && clear");} 

        else if (start == "xfce"          || start == "Xfce"          || start == "Xf"          || start == "xf")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/startxfce4 && pkill clidm && clear" << GREEN << BOLD << " (✔)"                      << RESET_COLOR << endl; system("startx /usr/bin/startxfce4 && pkill clidm && clear");} 

        else if (start == "gnome"         || start == "Gnome"         || start == "Gn"          || start == "gn")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/gnome-session && pkill clidm && clear" << GREEN << BOLD << " (✔)"                   << RESET_COLOR << endl; system("startx /usr/bin/gnome-session && pkill clidm && clear");} 

        else if (start == "openbox"       || start == "Openbox"       || start == "Op"          || start == "op")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/openbox && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/openbox && pkill clidm && clear");} 

        else if (start == "herbstluftwm"  || start == "Herbstluftwm"  || start == "He"          || start == "he")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/herbstluftwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                    << RESET_COLOR << endl; system("startx /usr/bin/herbstluftwm && pkill clidm && clear");} 

        else if (start == "dk"            || start == "Dk")                                                                                            {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/dk && pkill clidm && clear" << GREEN << BOLD << " (✔)"                              << RESET_COLOR << endl; system("startx /usr/bin/dk && pkill clidm && clear");} 

        else if (start == "gwm"           || start == "Gwm"           || start == "gw"          || start == "Gw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/gwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/gwm && pkill clidm && clear");} 

        else if (start == "lxqt"          || start == "Lxqt"          || start == "Lxq"         || start == "lxq")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/lxqt && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/lxqt && pkill clidm && clear");} 

        else if (start == "awesome"       || start == "Awesome"       || start == "Aw"          || start == "aw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/awesome && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/awesome && pkill clidm && clear");} 

        else if (start == "cinnamon"      || start == "Cinnamon"      || start == "Ci"          || start == "ci")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/cinnamon && pkill clidm && clear" << GREEN << BOLD << " (✔)"                        << RESET_COLOR << endl; system("startx /usr/bin/cinnamon && pkill clidm && clear");} 

        else if (start == "budgie"        || start == "Budgie"        || start == "Bu"          || start == "bu")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/budgie && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/budgie && pkill clidm && clear");} 

        else if (start == "pantheon"      || start == "Pantheon"      || start == "Pa"          || start == "pa")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/budgie && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/pantheon && pkill clidm && clear");} 

        else if (start == "unity"         || start == "Unity"         || start == "Un"          || start == "un")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/unity && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/unity && pkill clidm && clear");} 

        else if (start == "deepin"        || start == "Deepin"        || start == "De"          || start == "de")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/deepin && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/deepin && pkill clidm && clear");} 

        else if (start == "i3"            || start == "I3")                                                                                            {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/i3 && pkill clidm && clear" << GREEN << BOLD << " (✔)"                              << RESET_COLOR << endl; system("startx /usr/bin/i3 && pkill clidm && clear");} 

        else if (start == "sway"          || start == "Sway"          || start == "Sw"          || start == "sw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/sway && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/sway && pkill clidm && clear");} 

        else if (start == "xmonad"        || start == "Xmonad"        || start == "Xm"          || start == "xm")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/xmonad && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/xmonad && pkill clidm && clear");} 

        else if (start == "spectrwm"      || start == "Spectrwm"      || start == "Sp"          || start == "sp")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/spectrwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                        << RESET_COLOR << endl; system("startx /usr/bin/spectrwm && pkill clidm && clear");} 
    
        else if (start == "frankenwm"     || start == "Frankenwm"     || start == "Fr"          || start == "fr")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/frankenwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                       << RESET_COLOR << endl; system("startx /usr/bin/frankenwm && pkill clidm && clear");}
    
        else if (start == "chamfer"       || start == "Chamfer"       || start == "Ch"          || start == "ch")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/chamfer && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/chamfer && pkill clidm && clear");}
    
        else if (start == "flashfocus"    || start == "Flashfocus"    || start == "FlashFocus"  || start == "Fl" || start == "fl")                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/flashfocus && pkill clidm && clear" << GREEN << BOLD << " (✔)"                      << RESET_COLOR << endl; system("startx /usr/bin/flashfocus && pkill clidm && clear");}

        else if (start == "flatman"       || start == "Flatman"       || start == "Fl"          || start == "fl")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/flatman && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/flatman && pkill clidm && clear");}
        
        else if (start == "hikari"        || start == "Hikari"        || start == "Hi"          || start == "hi")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/hikari && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/hikari && pkill clidm && clear");}
        
        else if (start == "larswm"        || start == "Larswm"        || start == "La"          || start == "la")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/larswm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/larswm && pkill clidm && clear");}
        
        else if (start == "leftwm"        || start == "Leftwm"        || start == "Le"          || start == "le")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/leftwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/leftwm && pkill clidm && clear");}

        else if (start == "notion"        || start == "Notion"        || start == "No"          || start == "no")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/notion && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/notion && pkill clidm && clear");}

        else if (start == "futile"        || start == "Futile"        || start == "Fu"          || start == "fu")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/futile && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/futile && pkill clidm && clear");}

        else if (start == "stumpwm"       || start == "Stumpwm"       || start == "St"          || start == "st")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/stumpwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/stumpwm && pkill clidm && clear");}
        
        else if (start == "9wm"           || start == "9Wm"           || start == "9W"          || start == "9w")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/9wm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm && clear");}
        
        else if (start == "blackbox"      || start == "Blackbox"      || start == "BlackBox"    || start == "Bl" || start == "bl")                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/blackbox && pkill clidm && clear" << GREEN << BOLD << " (✔)"                        << RESET_COLOR << endl; system("startx /usr/bin/blackbox && pkill clidm && clear");}
        
        else if (start == "byobu"         || start == "Byobu"         || start == "By"          || start == "by")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/byobu && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/byobu && pkill clidm && clear");}
        
        else if (start == "cwm"           || start == "Cwm"           || start == "Cw"          || start == "cw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/cwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/cwm && pkill clidm && clear");}
        
        else if (start == "fvwm"          || start == "Fvwm"          || start == "Fv"          || start == "fv")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/fvwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm && clear");}
        
        else if (start == "lumina"        || start == "Lumina"        || start == "Lu"          || start == "lu")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/lumina && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/lumina && pkill clidm && clear");}
        
        else if (start == "musca"         || start == "Musca"         || start == "Mu"          || start == "mu")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/musca && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/musca && pkill clidm && clear");}
        
        else if (start == "pekwm"         || start == "Pekwm"         || start == "Pe"          || start == "pe")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/pekwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/pekwm && pkill clidm && clear");}
        
        else if (start == "sawfish"       || start == "Sawfish"       || start == "Sa"          || start == "sa")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/sawfish && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/sawfish && pkill clidm && clear");}
        
        else if (start == "wmx"           || start == "Wmx"           || start == "Wm"          || start == "wm")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/wmx && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/wmx && pkill clidm && clear");}
        
        else if (start == "twm"           || start == "Twm"           || start == "tw"          || start == "Tw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/twm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/twm && pkill clidm && clear");}
        
        else if (start == "2bwm"          || start == "2Bwm"          || start == "2b"          || start == "2B")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/2bwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/2bwm && pkill clidm && clear");}

        else if (start == "9wm"           || start == "9Wm"           || start == "9w"          || start == "9W")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/9wm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm && clear");}
        
        else if (start == "adwm"          || start == "Adwm"          || start == "ad"          || start == "Ad")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/adwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/adwm && pkill clidm && clear");}
        
        else if (start == "afterstep"     || start == "Afterstep"     || start == "af"          || start == "Af")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/afterstep && pkill clidm && clear" << GREEN << BOLD << " (✔)"                       << RESET_COLOR << endl; system("startx /usr/bin/afterstep && pkill clidm && clear");}
        
        else if (start == "antares"       || start == "Antares"       || start == "an"          || start == "An")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/antares && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/antares && pkill clidm && clear");}
        
        else if (start == "antiwm"        || start == "Antiwm"        || start == "ant"         || start == "Ant")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/antiwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/antiwm && pkill clidm && clear");}
        
        else if (start == "bbrun"         || start == "bbrun"         || start == "bb"          || start == "Bb")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/bbrun && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/bbrun && pkill clidm && clear");}
        
        else if (start == "berry"         || start == "Berry"         || start == "Be"          || start == "be")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/berry && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/berry && pkill clidm && clear");}

        else if (start == "clearine"      || start == "Clearine"      || start == "cl"          || start == "Cl")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/clearine && pkill clidm && clear" << GREEN << BOLD << " (✔)"                        << RESET_COLOR << endl; system("startx /usr/bin/clearine && pkill clidm && clear");}

        else if (start == "ctwm"          || start == "ctwm"          || start == "ct"          || start == "Ct")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/ctwm && pkill clidm && clear"  << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/ctwm && pkill clidm && clear");}

        else if (start == "devour"        || start == "Devour"        || start == "de"          || start == "De")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/devour && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/devour && pkill clidm && clear");}

        else if (start == "fvwm"          || start == "Fvwm"          || start == "fv"          || start == "Fv")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/fvwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm && clear");}

        else if (start == "gala"          || start == "Gala"          || start == "ga"          || start == "Ga")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/gala && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/gala && pkill clidm && clear");}

        else if (start == "goomwm"        || start == "Goomwm"        || start == "go"          || start == "Go")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/goomwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/goomwm && pkill clidm && clear");}

        else if (start == "hadlock"       || start == "Hadlock"       || start == "ha"          || start == "Ha")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/hadlock && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/hadlock && pkill clidm && clear");}

        else if (start == "heliwm"        || start == "Heliwm"        || start == "he"          || start == "He")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/heliwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/heliwm && pkill clidm && clear");}

        else if (start == "evilwm"        || start == "Evilwm"        || start == "ev"          || start == "Ev")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/evilwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/evilwm && pkill clidm && clear");}

        else if (start == "jbwm"          || start == "Jbwm"          || start == "jb"          || start == "Jb")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/jbwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/jbwm && pkill clidm && clear");}

        else if (start == "karmen"        || start == "Karmen"        || start == "ka"          || start == "Ka")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/karmen && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/karmen && pkill clidm && clear");}

        else if (start == "katriawm"      || start == "Katriawm"      || start == "kat"         || start == "Kat")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/katriawm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                        << RESET_COLOR << endl; system("startx /usr/bin/katriawm && pkill clidm && clear");}

        else if (start == "lcarswm"       || start == "Lcarswm"       || start == "lc"          || start == "Lc")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/lcarswm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                         << RESET_COLOR << endl; system("startx /usr/bin/lcarswm && pkill clidm && clear");}

        else if (start == "matwm2"        || start == "matwm2"        || start == "ma"          || start == "Ma")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/matwm2 && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/matwm2 && pkill clidm && clear");}

        else if (start == "mcwm"          || start == "Mcwm"          || start == "mc"          || start == "Mc")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/mcwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/mcwm && pkill clidm && clear");}

        else if (start == "moonwm"        || start == "Moonwm"        || start == "mo"          || start == "Mo")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/moonwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/moonwm && pkill clidm && clear");}

        else if (start == "mpxmanager"    || start == "Mpxmanager"    || start == "mpx"         || start == "Mpx")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/mpxmanager && pkill clidm && clear" << GREEN << BOLD << " (✔)"                      << RESET_COLOR << endl; system("startx /usr/bin/mpxmanager && pkill clidm && clear");}

        else if (start == "muffin"        || start == "Muffin"        || start == "muf"         || start == "Muf")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/muffin && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/muffin && pkill clidm && clear");}

        else if (start == "mutter"        || start == "Mutter"        || start == "mut"         || start == "Mut")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/mutter && pkill clidm && clear" << GREEN << BOLD << " (✔)"                          << RESET_COLOR << endl; system("startx /usr/bin/mutter && pkill clidm && clear");}

        else if (start == "olvwm"         || start == "Olvwm"         || start == "olv"         || start == "Olv")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/olvwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                           << RESET_COLOR << endl; system("startx /usr/bin/olvwm && pkill clidm && clear");}

        else if (start == "pawm"          || start == "Pawm"          || start == "pa"          || start == "Pa")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/pawm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/pawm && pkill clidm && clear");}

        else if (start == "perceptia"     || start == "Perceptia"     || start == "per"         || start == "Per")                                     {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/perceptia && pkill clidm && clear" << GREEN << BOLD << " (✔)"                       << RESET_COLOR << endl; system("startx /usr/bin/perceptia && pkill clidm && clear");}

        else if (start == "plwm"          || start == "Plwm"          || start == "pl"          || start == "Pl")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/plwm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                            << RESET_COLOR << endl; system("startx /usr/bin/plwm && pkill clidm && clear");}

        else if (start == "swm"           || start == "Swm"           || start == "Sw"          || start == "Sw")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/swm && pkill clidm && clear" << GREEN << BOLD << " (✔)"                             << RESET_COLOR << endl; system("startx /usr/bin/swm && pkill clidm && clear");}

        else if (start == "ratpoison"     || start == "Ratpoison"     || start == "Ra"          || start == "ra")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/ratpoison && pkill clidm && clear" << GREEN << BOLD << " (✔)"                       << RESET_COLOR << endl; system("startx /usr/bin/ratpoison && pkill clidm && clear");}
        
        else if (start == "enlightenment" || start == "Enlightenment" || start == "En"          || start == "en")                                      {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/enlightenment && pkill clidm && clear" << GREEN << BOLD << " (✔)"                   << RESET_COLOR << endl; system("startx /usr/bin/enlightenment && pkill clidm && clear");}

        else if (start == "KDE/Openbox"   || start == "Kde/Openbox"   || start == "kde/openbox" || start == "Kde" || start == "kde" || start == "KDE") {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/openbox-kde-session && pkill clidm && clear" << GREEN << BOLD << " (✔)"             << RESET_COLOR << endl; system("startx /usr/bin/openbox-kde-session && pkill clidm && clear");}

        else if (start == "kde-plasma"    || start == "Kde-Plasma"    || start == "Kde-plasma"  || start == "Kd"  || start == "kd")                    {cout << BOLD "Running Command: " << BLUE << BOLD << "startx /usr/bin/startplasma-x11 && pkill clidm && clear" << GREEN << BOLD << " (✔)"                 << RESET_COLOR << endl; system("startx /usr/bin/startplasma-x11 && pkill clidm && clear");}
        
        // Commands
        
        else if (start == "help" || start == "?"){
            system("clear");
            cout << BOLD << "help / ? " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Display this message." << endl;
            cout << BOLD << "exit     " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Exit the display manager." << endl;
            cout << BOLD << "exit!    " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Break the display manager." << endl; 
            cout << BOLD << "shutdown " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Shutdown your PC." << endl;
            cout << BOLD << "reboot   " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Reboot your PC." << endl;
            cout << BOLD << "docs     " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Documentation." << endl;
            cout << BOLD << "source   " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " SourceCode." << endl;
        }

        else if (start == "exit") {
            break;
        }

        else if (start == "exit!") {
            system("pkill clidm");
        }

        else if (start == "shutdown") {
            system("shutdown now");
        }

        else if (start == "reboot") {
            system("reboot");
        }

        else if (start == "docs") {
            system("clear");

            cout << BOLD << "CliDM is a display manager to log in from the tty (linux integrated terminal).\n\nWith it you can start your desktop environment like any other display manager.\n\nTo be able to use it properly you have to follow the next steps:\n\nWrite the name of your environment in the 'CliDM>' part, all your environments will appear in the top part and you only have to write its name or the first two letters (the ones that appear in color).\n\nThen press enter and you will launch your desktop environment :)\n\nAvailable Commands:" << endl;
            
            cout << BOLD << "help / ? " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " shows you all available commands.\n" << endl;

            cout << BOLD << "exit     " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " exit CliDM.\n" << endl;

            cout << BOLD << "exit!    " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Breaks CliDM to exit.\n" << endl;

            cout << BOLD << "shutdown " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Shutdown your PC.\n" << endl;

            cout << BOLD << "reboot   " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " reboot your PC.\n" << endl;

            cout << BOLD << "docs     " << BLUE << BOLD << "-" << RESET_COLOR << BOLD << " Shows you the documentation.\n" << endl;

            string quit;
            cout << ":q to exit the documentation.\n" << endl;
            cout << ":";
            cin >> quit;

            while (quit != "q") {
                cout << RED << BOLD << "Retry!" <<endl;
                cout << RESET_COLOR << BOLD << ":";
                cin >> quit;
            }

            system("clear");
        }

        else if (start == "source") {
            system("nano $HOME/CliDM/clidm.cpp");
        }

        else {cout << BOLD << RED << BOLD << "Entorno no Encontrado, por favor reportalo en GitHub. / Environment Not Found, please report it on GitHub. " << RESET_COLOR << endl; system("sleep 1 && clear");}
    
    }
    
    return 0;
}