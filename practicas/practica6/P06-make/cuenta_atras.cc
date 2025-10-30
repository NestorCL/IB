#include <iostream>
int main() {
	int num{0};
	std::cout << "Introduzca un valor: ";
	std::cin >> num;
	
	if(num < 0)	{
		std::cout << "El valor no es positivo." << std::endl;
		return 1;
	}	

	for (int i = num; i >= 0; i--) {
		std::cout << i << " "; 
	}
	std::cout << std::endl;	
	return 0;
}
