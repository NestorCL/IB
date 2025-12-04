#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>
#include <string>
#include <fstream>

class Tarea {
    public:
        Tarea () {}
        Tarea(std::string, int, int);

        std::string getActividad();
        int getDuracion();
        int getRestante();

        void HorasDisponibles(int horas);
        Tarea Calcular(std::string tarea, int tiempo);

    private:
        std::string actividad_;
        int duracion_;
        int restante_;
};

#endif //HORARIO_H