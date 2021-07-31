echo ''
echo '█ █ █▀█ █▀▄ ▄▀█ ▀█▀ █▀▀   █▀▀ █   █ █▀▄ █▀▄▀█'
echo '█▄█ █▀▀ █▄▀ █▀█  █  ██▄   █▄▄ █▄▄ █ █▄▀ █ ▀ █'

sudo rm -r CliDM-Console-Display-Manager

sudo rm /usr/bin/clidm

git clone https://github.com/martinval9/CliDM-Console-Display-Manager

cd CliDM-Console-Display-Manager

sudo make

echo ''

echo 'Recuerda revisar github para enterarte sobre las actualizaciones / Remember to check github to find out about the updates'

echo ''

echo 'CliDM Actualizado :D / CliDM Updated :D'
