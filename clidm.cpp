#include<iostream>
#include<stdio.h>

//Colors

#define RESET_COLOR "\x1b[0m"
#define RED_T       "\x1b[31m"
#define BLUE_T      "\x1b[34m"
#define BOLD        "\033[1m"

using namespace std;

int main() {
    system("clear");

    FILE *file;

    if (file = fopen("/usr/bin/startx", "r")) {fclose(file);}

    else {
        // Dependencies
        string xinit;
        cout << RED_T << "No tienes xorg-xinit instalado! / You don't have xorg-xinit installed! " << RESET_COLOR << endl;
        
        cout << BLUE_T << "¿" << RESET_COLOR << "Desea Instalarlo" << BLUE_T << "? / " << RESET_COLOR << "Do you want to install it" << BLUE_T << "? [y/N]: " << RESET_COLOR;
        cin >> xinit;

        if (xinit == "y" || xinit == "Y") {
            int distro_option;

            cout << BLUE_T << BOLD << "\n¿" << RESET_COLOR << BOLD << "En qué esta basada tu distro / What is your distro based on" << BLUE_T << "?\n" << endl;

            cout << BLUE_T << BOLD << "1." << RESET_COLOR << " Basado en Debian o Ubuntu. / " << BLUE_T << "1." << RESET_COLOR << BOLD << " Based on Debian or Ubuntu.\n" << endl;
            cout << BLUE_T << BOLD << "2." << RESET_COLOR << " Basado en Arch.            / " << BLUE_T << "2." << RESET_COLOR << BOLD << " Based on Arch.\n"             << endl;
            cout << BLUE_T << BOLD << "3." << RESET_COLOR << " Basado en Fedora.          / " << BLUE_T << "3." << RESET_COLOR << BOLD << " Based on Fedora.\n"           << endl;
            cout << BLUE_T << BOLD << "4." << RESET_COLOR << " Basado en RedHat.          / " << BLUE_T << "4." << RESET_COLOR << BOLD << " Based on RedHat.\n"           << endl;
            cout << BLUE_T << BOLD << "5." << RESET_COLOR << " Instalación Manual.        / " << BLUE_T << "5." << RESET_COLOR << BOLD << " Manual Installation.\n"       << endl;

            cout << "clidm" << BLUE_T << ": " << RESET_COLOR;
            cin >> distro_option;

            switch (distro_option) {
                case 1: cout << "Running Command:" << BLUE_T << BOLD << " sudo apt install xong-xinit" << RESET_COLOR << endl; system("sudo apt install xong-xinit"); break;

                case 2: cout << "Running Command:" << BLUE_T << BOLD << " sudo pacman -S xorg-xinit"   << RESET_COLOR << endl; system("sudo pacman -S xorg-xinit");   break;

                case 3: cout << "Running Command:" << BLUE_T << BOLD << " sudo dnf install xong-xinit" << RESET_COLOR << endl; system("sudo dnf install xorg-xinit"); break;

                case 4: cout << "Running Command:" << BLUE_T << BOLD << " sudo yum install xorg-xinit" << RESET_COLOR << endl; system("sudo yum install xorg-xinit"); break;

                case 5: cout << "Running Command:" << BLUE_T << BOLD << " bash"                        << RESET_COLOR << endl; system("echo 'Puedes salir usando el comando exit' && bash"); break;
            }

            system("sleep 0.6 && clear");
        
        }

        else {
            cout << RED_T << "CliDM no funcionara si no tienes xorg-xinit instalado. / CliDM won't work if you don't have xorg-xinit installed. " << RESET_COLOR << endl;
        }
    }

    while (true) {
        cout << RESET_COLOR << BOLD << "\n█▀▀█ █    ▀   █▀▀▄  █▀▄▀█ 　 " << BLUE_T << "▄█    ▄▀▀▄" <<endl; 
        cout << RESET_COLOR << BOLD << "█    █    █   █  █  █ █ █ 　 " << BLUE_T << " █    ▄▀▀▄" <<endl; 
        cout << RESET_COLOR << BOLD << "█▄▄█ ▀▀▀  ▀   █▄▄▀  █   █ 　 " << BLUE_T << "▄█▄ ▄ ▀▄▄▀ By martinval9\n" <<endl;

        cout << BOLD << "┌───────────────────────┐" << endl;
        cout << BOLD << "│Entornos | Environments│" << BLUE_T << endl;
        cout << BOLD << "│───────────────────────│" << RESET_COLOR << endl;

        // Check

        if (file = fopen("a.txt", "r")) {fclose(file);}

        if (file = fopen("/usr/bin/qtile", "r"))               {cout << "│" << BLUE_T << BOLD << "Qt" << RESET_COLOR << "ile                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startxfce4", "r"))          {cout << "│" << BLUE_T << BOLD << "Xf" << RESET_COLOR << "ce                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/i3", "r"))                  {cout << "│" << BLUE_T << BOLD << "i3" << RESET_COLOR << "                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sway", "r"))                {cout << "│" << BLUE_T << BOLD << "Sw" << RESET_COLOR << "ay                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/awesome", "r"))             {cout << "│" << BLUE_T << BOLD << "Aw" << RESET_COLOR << "esome                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cinnamon", "r"))            {cout << "│" << BLUE_T << BOLD << "Ci" << RESET_COLOR << "nnamon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/budgie", "r"))              {cout << "│" << BLUE_T << BOLD << "Bu" << RESET_COLOR << "dgie                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/deepin", "r"))              {cout << "│" << BLUE_T << BOLD << "De" << RESET_COLOR << "epin                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/unity", "r"))               {cout << "│" << BLUE_T << BOLD << "Un" << RESET_COLOR << "ity                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pantheon", "r"))            {cout << "│" << BLUE_T << BOLD << "Pa" << RESET_COLOR << "ntheon               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mate", "r"))                {cout << "│" << BLUE_T << BOLD << "Ma" << RESET_COLOR << "te                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fluxbox", "r"))             {cout << "│" << BLUE_T << BOLD << "Fl" << RESET_COLOR << "uxBox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bspwm", "r"))               {cout << "│" << BLUE_T << BOLD << "Bs" << RESET_COLOR << "pwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxde", "r"))                {cout << "│" << BLUE_T << BOLD << "Lx" << RESET_COLOR << "de                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/startplasma-x11", "r"))     {cout << "│" << BLUE_T << BOLD << "Kd" << RESET_COLOR << "e-Plasma             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gnome", "r"))               {cout << "│" << BLUE_T << BOLD << "Gn" << RESET_COLOR << "ome                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lxqt", "r"))                {cout << "│" << BLUE_T << BOLD << "Lxq" << RESET_COLOR << "t                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dwm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Dw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox", "r"))             {cout << "│" << BLUE_T << BOLD << "Op" << RESET_COLOR << "enbox                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/herbstluftwm", "r"))        {cout << "│" << BLUE_T << BOLD << "He" << RESET_COLOR << "rbstluftwm           │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/dk", "r"))                  {cout << "│" << BLUE_T << BOLD << "Dk" << RESET_COLOR << "                     │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gwm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Gw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/xmonad", "r"))              {cout << "│" << BLUE_T << BOLD << "Xm" << RESET_COLOR << "onad                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/spectrwm", "r"))            {cout << "│" << BLUE_T << BOLD << "Sp" << RESET_COLOR << "ectrwm               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jwm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Jw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/frankenwm", "r"))           {cout << "│" << BLUE_T << BOLD << "Fr" << RESET_COLOR << "ankenwm              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/chamfer", "r"))             {cout << "│" << BLUE_T << BOLD << "Ch" << RESET_COLOR << "amfer                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flashfocus", "r"))          {cout << "│" << BLUE_T << BOLD << "Fl" << RESET_COLOR << "ashfocus             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/flatman", "r"))             {cout << "│" << BLUE_T << BOLD << "Fl" << RESET_COLOR << "atman                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hikari", "r"))              {cout << "│" << BLUE_T << BOLD << "Hi" << RESET_COLOR << "kari                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/larswm", "r"))              {cout << "│" << BLUE_T << BOLD << "La" << RESET_COLOR << "rswm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/notion", "r"))              {cout << "│" << BLUE_T << BOLD << "No" << RESET_COLOR << "tion                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/futile", "r"))              {cout << "│" << BLUE_T << BOLD << "Fu" << RESET_COLOR << "tile                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/stumpwm", "r"))             {cout << "│" << BLUE_T << BOLD << "St" << RESET_COLOR << "umpwm                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/blackbox", "r"))            {cout << "│" << BLUE_T << BOLD << "Bl" << RESET_COLOR << "ackBox               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/byobu", "r"))               {cout << "│" << BLUE_T << BOLD << "By" << RESET_COLOR << "obu                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/cwm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Cw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/enlightenment", "r"))       {cout << "│" << BLUE_T << BOLD << "En" << RESET_COLOR << "lightenment          │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Fv" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lumina", "r"))              {cout << "│" << BLUE_T << BOLD << "Lu" << RESET_COLOR << "mina                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/musca", "r"))               {cout << "│" << BLUE_T << BOLD << "Mu" << RESET_COLOR << "sca                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pekwm", "r"))               {cout << "│" << BLUE_T << BOLD << "Pe" << RESET_COLOR << "kwm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ratpoison", "r"))           {cout << "│" << BLUE_T << BOLD << "Ra" << RESET_COLOR << "tpoison              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/sawfish", "r"))             {cout << "│" << BLUE_T << BOLD << "Sa" << RESET_COLOR << "wfish                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/twm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Tw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/wmx", "r"))                 {cout << "│" << BLUE_T << BOLD << "Wm" << RESET_COLOR << "x                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/2bwm", "r"))                {cout << "│" << BLUE_T << BOLD << "2b" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/9wm", "r"))                 {cout << "│" << BLUE_T << BOLD << "9w" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/adwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Ad" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/afterstep", "r"))           {cout << "│" << BLUE_T << BOLD << "Af" << RESET_COLOR << "terstep              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/antares", "r"))             {cout << "│" << BLUE_T << BOLD << "An" << RESET_COLOR << "tares                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/antiwm", "r"))              {cout << "│" << BLUE_T << BOLD << "Ant" << RESET_COLOR << "iwm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/bbrun", "r"))               {cout << "│" << BLUE_T << BOLD << "Bb" << RESET_COLOR << "run                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/berry", "r"))               {cout << "│" << BLUE_T << BOLD << "Be" << RESET_COLOR << "rry                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/clearine", "r"))            {cout << "│" << BLUE_T << BOLD << "Cl" << RESET_COLOR << "earine               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/ctwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Ct" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/devour", "r"))              {cout << "│" << BLUE_T << BOLD << "De" << RESET_COLOR << "vour                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/fvwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Fv" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/gala", "r"))                {cout << "│" << BLUE_T << BOLD << "Ga" << RESET_COLOR << "la                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/goomwm", "r"))              {cout << "│" << BLUE_T << BOLD << "Go" << RESET_COLOR << "omwm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/hadlock", "r"))             {cout << "│" << BLUE_T << BOLD << "Ha" << RESET_COLOR << "dlock                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/heliwm", "r"))              {cout << "│" << BLUE_T << BOLD << "He" << RESET_COLOR << "liwm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/evilwm", "r"))              {cout << "│" << BLUE_T << BOLD << "Ev" << RESET_COLOR << "ilwm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/jbwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Jb" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/karmen", "r"))              {cout << "│" << BLUE_T << BOLD << "Ka" << RESET_COLOR << "rmen                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/katriawm", "r"))            {cout << "│" << BLUE_T << BOLD << "Kat" << RESET_COLOR << "riawm               │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/lcarswm", "r"))             {cout << "│" << BLUE_T << BOLD << "Lc" << RESET_COLOR << "arswm                │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/matwm2", "r"))              {cout << "│" << BLUE_T << BOLD << "Ma" << RESET_COLOR << "twm2                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mcwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Mc" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/moonwm", "r"))              {cout << "│" << BLUE_T << BOLD << "Mo" << RESET_COLOR << "onwm                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mpxmanager", "r"))          {cout << "│" << BLUE_T << BOLD << "Mpx" << RESET_COLOR << "manager             │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/muffin", "r"))              {cout << "│" << BLUE_T << BOLD << "Muf" << RESET_COLOR << "fin                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/mutter", "r"))              {cout << "│" << BLUE_T << BOLD << "Mut" << RESET_COLOR << "ter                 │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/olvwm", "r"))               {cout << "│" << BLUE_T << BOLD << "Olv" << RESET_COLOR << "wm                  │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/pawm", "r"))                {cout << "│" << BLUE_T << BOLD << "Pa" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/perceptia", "r"))           {cout << "│" << BLUE_T << BOLD << "Per" << RESET_COLOR << "ceptia              │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/plwm", "r"))                {cout << "│" << BLUE_T << BOLD << "Pl" << RESET_COLOR << "wm                   │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/swm", "r"))                 {cout << "│" << BLUE_T << BOLD << "Sw" << RESET_COLOR << "m                    │" << endl; fclose(file);}

        if (file = fopen("/usr/bin/openbox-kde-session", "r")) {cout << "│" << BLUE_T << BOLD << "KDE" << RESET_COLOR << "/Openbox            │" << endl; fclose(file);}

        cout << "└───────────────────────┘" <<endl;
        cout << BLUE_T << BOLD << "[?]" << RESET_COLOR << BOLD << " Para lanzar el entorno de escritorio simplemente debes escribir su nombre (El que aparece arriba). \n\n" << BLUE_T << BOLD << "[?]" << RESET_COLOR << BOLD << " To launch the desktop environment you simply have to write its name (The one that appears above)." << RESET_COLOR << endl;
        
        string start;
        cout << BOLD << "\nCliDM" << BLUE_T << "> " << RESET_COLOR;
        cin >> start;

        // Run
        
        if(start == "dwm" || start == "Dwm")                                                                                                           {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/dwm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/dwm && pkill clidm && clear");} 

        else if (start == "qtile"         || start == "Qtile" || start == "Qt" || start == "qt")                                                       {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm && clear" << RESET_COLOR << endl; system("startx /usr/bin/qtile start -- :1 -nolisten tcp && pkill clidm && clear");} 

        else if (start == "fluxbox"       || start == "Fluxbox"       || start == "FluxBox"     || start == "Fl" || start == "fl")                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/fluxbox && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/fluxbox && pkill clidm && clear");} 

        else if (start == "lxde"          || start == "Lxde"          || start == "Lx"          || start == "lx")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/lxde && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/lxde && pkill clidm && clear");} 

        else if (start == "bspwm"         || start == "Bspwm"         || start == "Bs"          || start == "bs")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/bspwm && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/bspwm && pkill clidm && clear");} 

        else if (start == "xfce"          || start == "Xfce"          || start == "Xf"          || start == "xf")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/startxfce4 && pkill clidm && clear"                      << RESET_COLOR << endl; system("startx /usr/bin/startxfce4 && pkill clidm && clear");} 

        else if (start == "gnome"         || start == "Gnome"         || start == "Gn"          || start == "gn")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/gnome-session && pkill clidm && clear"                   << RESET_COLOR << endl; system("startx /usr/bin/gnome-session && pkill clidm && clear");} 

        else if (start == "openbox"       || start == "Openbox"       || start == "Op"          || start == "op")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/openbox && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/openbox && pkill clidm && clear");} 

        else if (start == "herbstluftwm"  || start == "Herbstluftwm"  || start == "He"          || start == "he")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/herbstluftwm && pkill clidm && clear"                    << RESET_COLOR << endl; system("startx /usr/bin/herbstluftwm && pkill clidm && clear");} 

        else if (start == "dk"            || start == "Dk")                                                                                            {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/dk && pkill clidm && clear"                              << RESET_COLOR << endl; system("startx /usr/bin/dk && pkill clidm && clear");} 

        else if (start == "gwm"           || start == "Gwm"           || start == "gw"          || start == "Gw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/gwm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/gwm && pkill clidm && clear");} 

        else if (start == "lxqt"          || start == "Lxqt"          || start == "Lxq"         || start == "lxq")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/lxqt && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/lxqt && pkill clidm && clear");} 

        else if (start == "awesome"       || start == "Awesome"       || start == "Aw"          || start == "aw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/awesome && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/awesome && pkill clidm && clear");} 

        else if (start == "cinnamon"      || start == "Cinnamon"      || start == "Ci"          || start == "ci")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/cinnamon && pkill clidm && clear"                        << RESET_COLOR << endl; system("startx /usr/bin/cinnamon && pkill clidm && clear");} 

        else if (start == "budgie"        || start == "Budgie"        || start == "Bu"          || start == "bu")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/budgie && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/budgie && pkill clidm && clear");} 

        else if (start == "pantheon"      || start == "Pantheon"      || start == "Pa"          || start == "pa")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/budgie && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/pantheon && pkill clidm && clear");} 

        else if (start == "unity"         || start == "Unity"         || start == "Un"          || start == "un")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/unity && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/unity && pkill clidm && clear");} 

        else if (start == "deepin"        || start == "Deepin"        || start == "De"          || start == "de")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/deepin && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/deepin && pkill clidm && clear");} 

        else if (start == "i3"            || start == "I3")                                                                                            {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/i3 && pkill clidm && clear"                              << RESET_COLOR << endl; system("startx /usr/bin/i3 && pkill clidm && clear");} 

        else if (start == "sway"          || start == "Sway"          || start == "Sw"          || start == "sw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/sway && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/sway && pkill clidm && clear");} 

        else if (start == "xmonad"        || start == "Xmonad"        || start == "Xm"          || start == "xm")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/xmonad && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/xmonad && pkill clidm && clear");} 

        else if (start == "spectrwm"      || start == "Spectrwm"      || start == "Sp"          || start == "sp")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/spectrwm && pkill clidm && clear"                        << RESET_COLOR << endl; system("startx /usr/bin/spectrwm && pkill clidm && clear");} 
    
        else if (start == "frankenwm"     || start == "Frankenwm"     || start == "Fr"          || start == "fr")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/frankenwm && pkill clidm && clear"                       << RESET_COLOR << endl; system("startx /usr/bin/frankenwm && pkill clidm && clear");}
    
        else if (start == "chamfer"       || start == "Chamfer"       || start == "Ch"          || start == "ch")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/chamfer && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/chamfer && pkill clidm && clear");}
    
        else if (start == "flashfocus"    || start == "Flashfocus"    || start == "FlashFocus"  || start == "Fl" || start == "fl")                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/flashfocus && pkill clidm && clear"                      << RESET_COLOR << endl; system("startx /usr/bin/flashfocus && pkill clidm && clear");}

        else if (start == "flatman"       || start == "Flatman"       || start == "Fl"          || start == "fl")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/flatman && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/flatman && pkill clidm && clear");}
        
        else if (start == "hikari"        || start == "Hikari"        || start == "Hi"          || start == "hi")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/hikari && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/hikari && pkill clidm && clear");}
        
        else if (start == "larswm"        || start == "Larswm"        || start == "La"          || start == "la")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/larswm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/larswm && pkill clidm && clear");}
        
        else if (start == "leftwm"        || start == "Leftwm"        || start == "Le"          || start == "le")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/leftwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/leftwm && pkill clidm && clear");}

        else if (start == "notion"        || start == "Notion"        || start == "No"          || start == "no")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/notion && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/notion && pkill clidm && clear");}

        else if (start == "futile"        || start == "Futile"        || start == "Fu"          || start == "fu")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/futile && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/futile && pkill clidm && clear");}

        else if (start == "stumpwm"       || start == "Stumpwm"       || start == "St"          || start == "st")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/stumpwm && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/stumpwm && pkill clidm && clear");}
        
        else if (start == "9wm"           || start == "9Wm"           || start == "9W"          || start == "9w")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/9wm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm && clear");}
        
        else if (start == "blackbox"      || start == "Blackbox"      || start == "BlackBox"    || start == "Bl" || start == "bl")                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/blackbox && pkill clidm && clear"                        << RESET_COLOR << endl; system("startx /usr/bin/blackbox && pkill clidm && clear");}
        
        else if (start == "byobu"         || start == "Byobu"         || start == "By"          || start == "by")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/byobu && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/byobu && pkill clidm && clear");}
        
        else if (start == "cwm"           || start == "Cwm"           || start == "Cw"          || start == "cw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/cwm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/cwm && pkill clidm && clear");}
        
        else if (start == "fvwm"          || start == "Fvwm"          || start == "Fv"          || start == "fv")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/fvwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm && clear");}
        
        else if (start == "lumina"        || start == "Lumina"        || start == "Lu"          || start == "lu")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/lumina && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/lumina && pkill clidm && clear");}
        
        else if (start == "musca"         || start == "Musca"         || start == "Mu"          || start == "mu")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/musca && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/musca && pkill clidm && clear");}
        
        else if (start == "pekwm"         || start == "Pekwm"         || start == "Pe"          || start == "pe")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/pekwm && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/pekwm && pkill clidm && clear");}
        
        else if (start == "sawfish"       || start == "Sawfish"       || start == "Sa"          || start == "sa")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/sawfish && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/sawfish && pkill clidm && clear");}
        
        else if (start == "wmx"           || start == "Wmx"           || start == "Wm"          || start == "wm")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/wmx && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/wmx && pkill clidm && clear");}
        
        else if (start == "twm"           || start == "Twm"           || start == "tw"          || start == "Tw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/twm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/twm && pkill clidm && clear");}
        
        else if (start == "2bwm"          || start == "2Bwm"          || start == "2b"          || start == "2B")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/2bwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/2bwm && pkill clidm && clear");}

        else if (start == "9wm"           || start == "9Wm"           || start == "9w"          || start == "9W")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/9wm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/9wm && pkill clidm && clear");}
        
        else if (start == "adwm"          || start == "Adwm"          || start == "ad"          || start == "Ad")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/adwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/adwm && pkill clidm && clear");}
        
        else if (start == "afterstep"     || start == "Afterstep"     || start == "af"          || start == "Af")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/afterstep && pkill clidm && clear"                       << RESET_COLOR << endl; system("startx /usr/bin/afterstep && pkill clidm && clear");}
        
        else if (start == "antares"       || start == "Antares"       || start == "an"          || start == "An")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/antares && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/antares && pkill clidm && clear");}
        
        else if (start == "antiwm"        || start == "Antiwm"        || start == "ant"         || start == "Ant")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/antiwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/antiwm && pkill clidm && clear");}
        
        else if (start == "bbrun"         || start == "bbrun"         || start == "bb"          || start == "Bb")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/bbrun && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/bbrun && pkill clidm && clear");}
        
        else if (start == "berry"         || start == "Berry"         || start == "Be"          || start == "be")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/berry && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/berry && pkill clidm && clear");}

        else if (start == "clearine"      || start == "Clearine"      || start == "cl"          || start == "Cl")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/clearine && pkill clidm && clear"                        << RESET_COLOR << endl; system("startx /usr/bin/clearine && pkill clidm && clear");}

        else if (start == "ctwm"          || start == "ctwm"          || start == "ct"          || start == "Ct")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/ctwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/ctwm && pkill clidm && clear");}

        else if (start == "devour"        || start == "Devour"        || start == "de"          || start == "De")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/devour && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/devour && pkill clidm && clear");}

        else if (start == "fvwm"          || start == "Fvwm"          || start == "fv"          || start == "Fv")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/fvwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/fvwm && pkill clidm && clear");}

        else if (start == "gala"          || start == "Gala"          || start == "ga"          || start == "Ga")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/gala && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/gala && pkill clidm && clear");}

        else if (start == "goomwm"        || start == "Goomwm"        || start == "go"          || start == "Go")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/goomwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/goomwm && pkill clidm && clear");}

        else if (start == "hadlock"       || start == "Hadlock"       || start == "ha"          || start == "Ha")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/hadlock && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/hadlock && pkill clidm && clear");}

        else if (start == "heliwm"        || start == "Heliwm"        || start == "he"          || start == "He")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/heliwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/heliwm && pkill clidm && clear");}

        else if (start == "evilwm"        || start == "Evilwm"        || start == "ev"          || start == "Ev")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/evilwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/evilwm && pkill clidm && clear");}

        else if (start == "jbwm"          || start == "Jbwm"          || start == "jb"          || start == "Jb")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/jbwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/jbwm && pkill clidm && clear");}

        else if (start == "karmen"        || start == "Karmen"        || start == "ka"          || start == "Ka")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/karmen && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/karmen && pkill clidm && clear");}

        else if (start == "katriawm"      || start == "Katriawm"      || start == "kat"         || start == "Kat")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/katriawm && pkill clidm && clear"                        << RESET_COLOR << endl; system("startx /usr/bin/katriawm && pkill clidm && clear");}

        else if (start == "lcarswm"       || start == "Lcarswm"       || start == "lc"          || start == "Lc")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/lcarswm && pkill clidm && clear"                         << RESET_COLOR << endl; system("startx /usr/bin/lcarswm && pkill clidm && clear");}

        else if (start == "matwm2"        || start == "matwm2"        || start == "ma"          || start == "Ma")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/matwm2 && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/matwm2 && pkill clidm && clear");}

        else if (start == "mcwm"          || start == "Mcwm"          || start == "mc"          || start == "Mc")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/mcwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/mcwm && pkill clidm && clear");}

        else if (start == "moonwm"        || start == "Moonwm"        || start == "mo"          || start == "Mo")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/moonwm && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/moonwm && pkill clidm && clear");}

        else if (start == "mpxmanager"    || start == "Mpxmanager"    || start == "mpx"         || start == "Mpx")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/mpxmanager && pkill clidm && clear"                      << RESET_COLOR << endl; system("startx /usr/bin/mpxmanager && pkill clidm && clear");}

        else if (start == "muffin"        || start == "Muffin"        || start == "muf"         || start == "Muf")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/muffin && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/muffin && pkill clidm && clear");}

        else if (start == "mutter"        || start == "Mutter"        || start == "mut"         || start == "Mut")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/mutter && pkill clidm && clear"                          << RESET_COLOR << endl; system("startx /usr/bin/mutter && pkill clidm && clear");}

        else if (start == "olvwm"         || start == "Olvwm"         || start == "olv"         || start == "Olv")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/olvwm && pkill clidm && clear"                           << RESET_COLOR << endl; system("startx /usr/bin/olvwm && pkill clidm && clear");}

        else if (start == "pawm"          || start == "Pawm"          || start == "pa"          || start == "Pa")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/pawm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/pawm && pkill clidm && clear");}

        else if (start == "perceptia"     || start == "Perceptia"     || start == "per"         || start == "Per")                                     {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/perceptia && pkill clidm && clear"                       << RESET_COLOR << endl; system("startx /usr/bin/perceptia && pkill clidm && clear");}

        else if (start == "plwm"          || start == "Plwm"          || start == "pl"          || start == "Pl")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/plwm && pkill clidm && clear"                            << RESET_COLOR << endl; system("startx /usr/bin/plwm && pkill clidm && clear");}

        else if (start == "swm"           || start == "Swm"           || start == "Sw"          || start == "Sw")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/swm && pkill clidm && clear"                             << RESET_COLOR << endl; system("startx /usr/bin/swm && pkill clidm && clear");}

        else if (start == "ratpoison"     || start == "Ratpoison"     || start == "Ra"          || start == "ra")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/ratpoison && pkill clidm && clear"                       << RESET_COLOR << endl; system("startx /usr/bin/ratpoison && pkill clidm && clear");}
        
        else if (start == "enlightenment" || start == "Enlightenment" || start == "En"          || start == "en")                                      {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/enlightenment && pkill clidm && clear"                   << RESET_COLOR << endl; system("startx /usr/bin/enlightenment && pkill clidm && clear");}

        else if (start == "KDE/Openbox"   || start == "Kde/Openbox"   || start == "kde/openbox" || start == "Kde" || start == "kde" || start == "KDE") {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/openbox-kde-session && pkill clidm && clear"             << RESET_COLOR << endl; system("startx /usr/bin/openbox-kde-session && pkill clidm && clear");}

        else if (start == "kde-plasma"    || start == "Kde-Plasma"    || start == "Kde-plasma"  || start == "Kd"  || start == "kd")                    {cout << "Running Command: " << BLUE_T << BOLD << "startx /usr/bin/startplasma-x11 && pkill clidm && clear"                 << RESET_COLOR << endl; system("startx /usr/bin/startplasma-x11 && pkill clidm && clear");}

        else {cout << RED_T << BOLD << "Entorno no Encontrado, por favor reportalo en GitHub. / Environment Not Found, please report it on GitHub. " << RESET_COLOR << endl; system("sleep 1 && clear");}
    }
    
    return 0;
}