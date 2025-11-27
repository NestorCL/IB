#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    std::string copy = argv[1];
    std::string paste = argv[2];

    if (argc != 3) {
        std::cerr << "Ha de incluir 2 archivos" << std::endl;
        return 1;
    }

    std::ifstream ifs (copy);
    ifs.is_open();
    if (!ifs.is_open()) {
        return 1;
    }

    std::ofstream ofs(paste);
    ofs.is_open();
    if (!ofs.is_open()) {
        return 1;
    }

    std::string linea;
    while (getline(ifs, linea)) {
        ofs << linea << std::endl;
    }

    ifs.close();
    ofs.close();
    return 0;
}