#include <iostream>

int main() {
    int time, h, m, s, aux;
    std::cin >> time;

    h = time / 3600;
    time %= 3600;
    m = time / 60;
    s = time % 60;

    std::cout << h << " " << m << " " << s << std::endl;
    return 0;
}