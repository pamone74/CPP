#include "Derived.hpp"
#include "Rectangle.hpp"
void Boxtype::setDimension(double l, double w, double h)
{
    Rectangle::setDimension(w, l);
    if(h >= 0)
         _height = h;
    else
      _height = 0;
}
double Boxtype::getHeight()const{
    return _height;
}  
double Boxtype::area() const{
   
    return 2 * (getHeight() * getWidth() + getHeight() * getWidth() + getHeight() * getWidth());

}

void Boxtype::print() const
{
    Rectangle::print();
    std::cout << "Derived " <<  _height << std::endl;
}
Boxtype::Boxtype(const Boxtype& bt): Rectangle(bt)
{
   _height = bt._height;

}
double Boxtype::volume() const{
    return Rectangle::getArea() * _height;
}
Boxtype &Boxtype::operator=(const Boxtype &bt)
{
    if (this == &bt)
        return *this;
    Rectangle::operator=(bt);
    _height = bt._height;
    return *this;
}
Boxtype :: ~Boxtype()
{
    std::cout << "Destructor called" << std::endl;
}

Boxtype::Boxtype(){
    std::cout << "Constructor called" << std::endl;
};