#include <iostream>

int main() {
    int temp;
    std::cin >> temp;

    if (temp < 10) {
        std::cout << "it's cold" << std::endl;
        if (temp <= 0) {
            std::cout << "water would freeze" << std::endl;
        }
    } else if (temp >= 10 && temp <= 30) {
        std::cout << "it's ok" << std::endl;
    } else if (temp > 30) {
        std::cout << "it's hot" << std::endl;
        if (temp >= 100) {
            std::cout << "water would boil" << std::endl;
        }
    }
    return 0;
}