#include "persona.cc"

int main () {
    std::ifstream ifs("gente.txt");

    std::vector<Persona> personas;
    std::string nombre;
    int edad;

    while (ifs >> nombre >> edad) {
        Persona p(nombre,edad);
        personas.push_back(p);
    }

    for (const auto& p : personas) {
        p.Print();
    }
    return 0;
}