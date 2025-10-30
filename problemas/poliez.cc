#include <iostream>
	int main() {
		double a, b, c, x, poli;
		std::cout << "Introduce el valor de a: " ;
		std::cin >> a;
		std::cout << "Introduce el valor de b: " ;
		std::cin >> b;
		std::cout << "Introduce el valor de c: " ;
		std::cin >> c;
		std::cout << "Introduce el valor de x: " ;
		std::cin >> x;
		poli = (a * x * x) + (b * x) + c;
		std::cout << "f(" << x << ")= " << poli << std::endl;
		return 0;
}
