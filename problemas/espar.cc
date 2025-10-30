#include <iostream>
#include <cmath>
int main() {
	int num;
	std::cout << "Introduzca un número: " ;
	std::cin >> num ;
	if (num % 2 == 0) {
		std::cout << "El número " << num << " es par" << std::endl;
	 } else {
		 std::cout << "El número " << num << " es impar" << std::endl;
	 }
	return 0;
}
