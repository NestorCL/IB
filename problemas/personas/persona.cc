#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Persona {
    public:
        Persona(std::string nombre = "", int edad = 0) : nombre_(nombre), edad_(edad) {}
        void Print() const {
            std::cout << nombre_ << " " << edad_ << std::endl;
        }

    private:
        std::string nombre_;
        int edad_;
};  