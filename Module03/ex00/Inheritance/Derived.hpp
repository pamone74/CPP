#include "Rectangle.hpp"

class Boxtype: public Rectangle
{
    double _height;
    public:
        void setDimension(double l, double w, double h);
        double getHeight() const;
        double area() const;
        double volume() const;
        void print() const;
        Boxtype(); // default constructor
        ~Boxtype(); //Destructor
        Boxtype(const Boxtype &bt); // copy oconstructor
        Boxtype &operator=(const Boxtype& bt); // copy asignment operator
};