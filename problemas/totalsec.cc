#include <iostream>
int main() {
	int años, dias, horas, min, sec, total{0};
	std::cout << "Introduce años, días, horas, minutos y segundos: " ;
	std::cin >> años >> dias >> horas >> min >> sec;
	total = (años * 31536000) + (dias * 86400) + (horas * 3600) + (min * 60) + sec;
	std::cout << total << std::endl;
	return 0;
}
