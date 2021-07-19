echo '█░█ █▀█ █▀▄ ▄▀█ ▀█▀ █▀▀   █▀▀ █░░ █▀▄ █▀▄▀█'
echo '█▄█ █▀▀ █▄▀ █▀█ ░█░ ██▄   █▄▄ █▄▄ █▄▀ █░▀░█'

rm -r cldm---CONSOLE-DISPLAY-MANAGER

sudo rm /usr/bin/cldm

git clone https://github.com/martinval9/cldm---CONSOLE-DISPLAY-MANAGER

cd cldm---CONSOLE-DISPLAY-MANAGER

sudo bash install.sh
