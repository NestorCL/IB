#include "../include/horario.h"

int main (int argc, char* argv[]) {
    std::ifstream ifs(argv[1]);

    int horas;
    std::cin >> horas;
    Tarea tarea;
    tarea.HorasDisponibles(horas);

    std::string nombre_tarea;
    int tiempo;
    while (std::cin >> nombre_tarea >> tiempo) {
        tarea.Calcular(nombre_tarea, tiempo);
    }
    return 0;
}