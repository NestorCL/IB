#include <iostream>
int main(){
	double cm;
	std::cout << "Introduzca la distancia en centímetros" << std::endl;
	std::cin >> cm;
	std::cout << cm << " cm en pulgadas es " << cm / 2.54 << std::endl;
	return 0;
}
