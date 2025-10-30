#include <iostream>
int main(){
	int fir, sek, zird, CUATRO;
	double suma;
	std::cout << "Primer valor: " ;
	std::cin >> fir;
	std::cout << "Segundo valor: " ;
	std::cin >> sek;
	std::cout << "Tercer valor: " ;
	std::cin >> zird;
	std::cout << "Cuarto valor: " ;
	std::cin >> CUATRO;
	suma = fir + sek + zird + CUATRO;
	suma /= 4;
	std::cout << "La media es " << suma << std::endl;
	return 0;
}
