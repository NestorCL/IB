#include <iostream>
int main() {
	int divisor{0};
	std::cout << "Introduce un número: " ;
	std::cin >> divisor;
	for (int i = 1; i <= divisor; ++i) {
		if (divisor % i == 0) {
		std::cout << i << " " ;
		}
	} 
	std::cout << std::endl;
}
