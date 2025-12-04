#include <iostream>

class Libro {
    public:
        Libro() {}
        Libro(std::string, int, double);
        void CalculateTax(double);
        std::string getTitle() const {return title_;}
        int getYear() const {return year_;}
        double getPrice() const {return price_;}
        double getTaxprice() const {return taxprice_;}

    private:
        std::string title_;
        int year_;
        double price_;
        double taxprice_;
};
std::ostream& operator<<(std::ostream&, const Libro&);