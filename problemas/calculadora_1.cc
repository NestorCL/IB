#include <iostream>

int main() {
	int num1, num2, res;
	char opcion;
	bool salida{0};
	
	std::cout << "Introduce 2 números: " ;
	std::cin >> num1 >> num2;
	std::cout << "[+]" << std::endl
	          << "[-]" << std::endl
						<< "[q]" << std::endl;
	std::cin >> opcion;
	
	while(!salida) {
		switch (opcion) {
			case '+':
				res = num1 + num2;
				break;
			case '-':
				res = num1 - num2;
				break;
			case 'q':
				salida = 1;
				break;
		}
		std::cout << res << std::endl;
		break;
	}
	return 0;
}
