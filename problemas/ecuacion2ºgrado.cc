#include <iostream>
#include <cmath>

int main() {
	double a, b, c, x, poli2, poli3;
	std::cout << "Introduce los valores de a, b, c" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "Introduce el valor de x: " ;
	std::cin >> x;
	poli2 = ((-b + sqrt((b * b) - (4 * a * c))) / (2 * a));
	poli3 = ((-b - sqrt((b * b) - (4 * a * c))) / (2 * a));
	std::cout << "Los resultados son " << poli2 << " y " << poli3 << std::endl;
return 0;
}
