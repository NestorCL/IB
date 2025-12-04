#include <iostream>
#include <cmath>

class NumerosComplejos{
    public:
        NumerosComplejos() {}
        NumerosComplejos(double real, double imaginario) : real_(real), imaginario_(imaginario) {}
        NumerosComplejos operator+(const NumerosComplejos& other) {
           NumerosComplejos resultado(real_ + other.real_, imaginario_ + other.imaginario_);
           return resultado;
        };
        NumerosComplejos operator-(const NumerosComplejos& other) {
            NumerosComplejos resultado(real_ - other.real_, imaginario_ - other.imaginario_);
            return resultado;
        };
        NumerosComplejos operator*(const NumerosComplejos& other) {
            NumerosComplejos resultado((real_ * other.real_) - (imaginario_ * other.imaginario_), (imaginario_ * other.real_) + (real_* other.imaginario_));
            return resultado;
        };
        NumerosComplejos operator/(const NumerosComplejos& other) {
            NumerosComplejos resultado((real_ * other.real_) + (imaginario_ * other.imaginario_) / (std::pow (other.real_, 2) + std::pow(other.imaginario_, 2)), ((imaginario_ * other.real_) - (real_ * other.imaginario_) / (std::pow (other.real_, 2) + std::pow(other.imaginario_, 2))));
            return resultado;
        }
        double getReal() const {return real_;}
        double getImaginario() const {imaginario_;}

        void setReal(const double& new_real) { real_ = new_real; }

    private:
        double real_;
        double imaginario_;

};
std::ostream& operator<<(std::ostream& os, const NumerosComplejos& numeroscomplejos) {
    os << "(" << numeroscomplejos.getReal() << ", " << numeroscomplejos.getImaginario() << ")";
    return os;
}