#include <iostream>
int main() {
	int num;
	std::cout << "Introduce un número: ";
	std::cin >> num;
	
	while (num != 1) {
		if (num % 2 == 0) {
			num /= 2;
		} else {
			num = (num * 3) + 1;
		}
		std::cout << num << " ";
	}
	std::cout << std::endl;
	return 0;
}
