#include <iostream>
#include <cmath>
int main() {
	double a, resultado;
	std::cout << "Introduce el angulo: " ;
	std::cin >> a;
	resultado = (sin(a) * sin(a)) + (cos(a) * cos(a));
	std::cout << resultado << std::endl;
	return 0;
}
