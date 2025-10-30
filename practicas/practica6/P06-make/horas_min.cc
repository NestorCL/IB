#include <iostream>
int main() {
	int hour, min;
	std::cout << "Introduzca dos valores: "; 
	std::cin >> hour >> min;
	
	if (hour >= 24 || min >= 60) {
		std::cout << "No es una hora válida" << std::endl;
	} else {
		std::cout << hour << " hora(s) y " << min << " minuto(s)." << std::endl;
	}
	return 0;
}
