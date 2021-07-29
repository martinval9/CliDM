all:
	c++ cldm.cpp -o cldm
	sudo cp cldm /usr/bin/
	sudo cp verificar.py /usr/bin/
	sudo cp cldm.cpp .config
