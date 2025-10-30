#include <iostream>

int main() {
	int num1, num2, res;
	char opcion;
	bool salida{0};	
	
	while(!salida) {
		std::cout << "[+]" << std::endl
							<< "[-]" << std::endl
							<< "[q]" << std::endl;
		std::cin >> opcion;		
		std::cout << "Introduce 2 números: " ;
		std::cin >> num1 >> num2;

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
		std::cout << "\033[2j\033[H" << std::endl;
		std::cout << res << std::endl;
	}
	return 0;
}
