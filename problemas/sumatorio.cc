#include <iostream>
	int main() {
		int n, aux{0};
		std::cout << "Introduce un número: " ;
		std::cin >> n;
		for (int i = 0; i <= n; i++) {
		aux += i;
		}
		std::cout << "La suma de todos los números hasta el dado es = " << aux << std::endl;
	return 0;
	}
