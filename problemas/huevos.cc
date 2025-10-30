#include <iostream>
int main() {
	int huevos, cajas, sueltos;
	std::cout << "¿Cúantos huevos tienes? " ;
	std::cin >> huevos;
	cajas = huevos / 6;
	sueltos = huevos % 6;
	std::cout << "Te da para llenar " << cajas << " cajas" << std::endl;
	std::cout << "Y te quedán " << sueltos << " huevos sueltos" << std::endl;
	return 0;
}
