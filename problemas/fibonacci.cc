#include <iostream>
int main() {
	int repes, ant{0}, act{1}, res;
	std::cout << "¿Cúantas veces hacemos este bodrio? " ;
	std::cin >> repes;
	if (repes <= 0) {
		std::cout << "Al menos una vez chacho, q la inteligencia no va tan rápido" << std::endl;
		return 1;
	}
	std::cout << "0 " ;
	for (int i = 0; i <= repes; ++i) {
		std::cout << act << " " ;
		res = ant + act;
		ant = act;
		act = res;
	}
	std::cout << std::endl;
	return 0;
}
