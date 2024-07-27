#include "Rectangle.hpp"
Rectangle::Rectangle(double width, double height)
{
    _width = width;
    _height = height;
}
Rectangle::Rectangle(const Rectangle &r)
{
    std::cout << "Copy constructor called" << std::endl;
    _width = r._width;
    _height = r._height;
}

void Rectangle::print() const
{
    std::cout << "Width: " << _width << std::endl;
    std::cout << "Height: " << _height << std::endl;
    // std::cout << "Area: " << getArea() << std::endl;
    
}

Rectangle::~Rectangle()
{
    std::cout << "Destructor called" << std::endl;
}
double Rectangle::getWidth() const
{
    return _width;
}

double Rectangle::getHeight() const
{
    return _height;
}

double Rectangle::getArea() const
{
    return _width * _height;
}

double Rectangle::getPerimeter() const
{
    return 2 * (_width + _height);
}

void Rectangle::setWidth(double width)
{
    _width = width;
}
void Rectangle::setHeight(double height)
{
    _height = height;
}

Rectangle &Rectangle::operator=(const Rectangle &r)
{
    std::cout << "Assignment operator called" << std::endl;
    _width = r._width;
    _height = r._height;
    return (*this);
}