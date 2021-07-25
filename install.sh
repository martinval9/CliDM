echo '█▀▀ █░░ █▀▀▄ █▀▄▀█ 　 ▀█▀ █▀▀▄ █▀▀ ▀▀█▀▀ █▀▀█ █░░ █░░ █▀▀█ ▀▀█▀▀ ░▀░ █▀▀█ █▀▀▄' 
echo '█░░ █░░ █░░█ █░▀░█ 　 ▒█░ █░░█ ▀▀█ ░░█░░ █▄▄█ █░░ █░░ █▄▄█ ░░█░░ ▀█▀ █░░█ █░░█' 
echo '▀▀▀ ▀▀▀ ▀▀▀░ ▀░░░▀ 　 ▄█▄ ▀░░▀ ▀▀▀ ░░▀░░ ▀░░▀ ▀▀▀ ▀▀▀ ▀░░▀ ░░▀░░ ▀▀▀ ▀▀▀▀ ▀░░▀'

g++ cldm.cpp -o cldm
sudo cp cldm /usr/bin/
sudo cp verificar.py /usr/bin/

sudo cp cldm.cpp .config

echo 'Console Display Manager Instalado :D / Console Display Manager Installed :D'

echo ''

echo 'Para lanzarlo debes entrar al tty(Ctrl+Alt+F2) de tu distro linux y escribir "cldm" sin las comillas / To launch it you must enter the tty (Ctrl + Alt + F2) of your linux distro and write "cldm" without the quotes'
