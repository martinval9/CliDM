# cldm---CONSOLE-DISPLAY-MANAGER
Iniciar sesión desde la terminal

![Preview Image]img1.png

## Instalación
cd cldm---CONSOLE-DISPLAY-MANAGER

sudo bash install.sh

En caso de que no funcione el _install.sh_ hay que ejecutar estos comandos:

cd cldm---CONSOLE-DISPLAY-MANAGER

sudo cp cldm /usr/bin/
sudo cp verificar.py /usr/bin/

sudo cp cldm.cpp .config

## Advertencia

No es nada recomendable lanzar un entorno de escritorio si no estas en el tty.
Para entrar al tty hay que hacer CTRL+Alt+F2 y escribir tu nombre de usuario y contraseña
Luego escribir cldm
