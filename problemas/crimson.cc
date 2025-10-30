#include <iostream>
int main(){
	int ahora, nhora, rhora;
	std::cout << "¿Qué hora es?" << std::endl;
	std::cin >> ahora;
	std::cout << "¿Cúanto tiempo ha pasado?" << std::endl;
	std::cin >> nhora;
	rhora = ahora + nhora;
	while (rhora > 12){
	rhora = rhora - 12;
	}
	std::cout << "(King Crimson) El reloj marca las " << rhora << std::endl;
	return 0;
}
