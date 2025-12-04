#include "../include/horario.h"

Tarea::Tarea(std::string actividad, int duracion, int restante) : actividad_(actividad), duracion_(duracion), restante_(restante) {}

std::string Tarea::getActividad() {
    return actividad_;
};

int Tarea::getDuracion() {
    return duracion_;
};

int Tarea::getRestante() {
    return restante_;
};

void Tarea::HorasDisponibles(int horas) {
    restante_ = horas;
};

Tarea Tarea::Calcular(std::string tarea, int tiempo) {
    actividad_ = tarea;
    duracion_ = tiempo;

    if (duracion_ <= restante_) {
        restante_ -= duracion_;
        std::cout << "Instanciando tarea " << actividad_ << "(" << duracion_ << " h) - " << restante_ << " horas disponibles" << std::endl;
    } else {
        std::cout << "No se pudo instanciar la tarea " << actividad_ << "(" << duracion_ << ") - tiempo agotado" << std::endl;
    }
};