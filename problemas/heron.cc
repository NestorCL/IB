#include <iostream>
#include <cmath>
int main() {
	double a, b, c, s, hero;
	std::cout << "Introduce los valores de a, b, c:" ;
	std::cin >> a >> b >> c;
	s = (a + b + c) / 2;
	hero = sqrt (s * (s - a) * (s - b) * (s - c));
	std::cout << "El área del triangulo es " << hero << std::endl;
	return 0;
}
