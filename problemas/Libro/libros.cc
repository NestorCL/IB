#include "libros.h"

Libro::Libro(std::string title, int year, double price) : title_(title), year_(year), price_(price) {}
void Libro::CalculateTax(double percentage) {(taxprice_ += price_ + percentage / price_);}

std::ostream& operator<<(std::ostream& os, const Libro& libro) {
    os << libro.getTitle() << ", " << libro.getYear() << ", " << libro.getPrice() << ", " << libro.getTaxprice();
    return os;
}