#include <iostream> 

	int Sumar(int n) {
		int res;
		res = n * (n + 1) / 2;
		return res;
	}
	
	int main() {
		int n;
		std::cout << "Introduce un número: " ;
		std::cin >> n;
		std::cout << Sumar(n) << std::endl;
		return 0;
	
}
