#include<iostream>
#include<stdio.h>

//Colores

#define RESET_COLOR "\x1b[0m"
#define RED_T      "\x1b[31m"
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

        // pkill cldm para evitar un consumo excesivo de cpu
        if(decision == "dwm") {
            system("startx /usr/bin/dwm && pkill cldm");
        } else if (decision == "fluxbox") {
            system("startx /usr/bin/fluxbox && pkill cldm");
        } else if (decision == "lxde") {
            system("startx /usr/bin/lxde && pkill cldm");
        } else if (decision == "bspwm") {
            system("startx /usr/bin/bspwm");
        } else if (decision == "xfce") {
            system("startx /usr/bin/xfce");
        } else if (decision == "kde") {
            system("startx /usr/bin/kde");
        } else if (decision == "gnome") {
            system("startx /usr/bin/gnome");
        } else if (decision == "openbox") {
            system("startx /usr/bin/openbox");
        } else if (decision == "herbstluftwm") {
            system("startx /usr/bin/herbstluftwm");
        } else if (decision == "dk") {
            system("startx /usr/bin/dk");
        } else if (decision == "gwm") {
            system("startx /usr/bin/gwm");
        } else if (decision == "lxqt") {
            system("startx /usr/bin/lxqt");
        } else if (decision == "awesome") {
            system("startx /usr/bin/awesome");
        } else if (decision == "cinnamon") {
            system("startx /usr/bin/cinnamon");
        } else if (decision == "budgie") {
            system("startx /usr/bin/budgie");
        } else if (decision == "pantheon") {
            system("startx /usr/bin/pantheon");
        } else if (decision == "unity") {
            system("startx /usr/bin/unity");
        } else if (decision == "deepin") {
            system("startx /usr/bin/deepin");
        } else if (decision == "i3") {
            system("startx /usr/bin/i3");
        }
    
    return 0;
}
}
