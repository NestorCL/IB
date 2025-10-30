#include <iostream>
int main() {
	int radio, diametro;
	double perimetro, area;
	std::cout << "Introduce radio: " ;
	std::cin >> radio;
	diametro = radio * 2;
	perimetro = diametro * 3.1416;
	std::cout << "El perímetro es " << perimetro << std::endl;
	area = radio * radio * 3.1416;
	std::cout << "El área es " << area << std::endl;
	std::cout << "w speed" << std::endl;
	return 0;
}
