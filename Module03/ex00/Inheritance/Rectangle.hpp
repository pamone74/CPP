#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include <iomanip>

class Rectangle{
    public:
        Rectangle(){}; // default constructor
        Rectangle(double width, double height); // parameterized constructor
        Rectangle(const Rectangle &r); // copy constructor
        Rectangle &operator=(const Rectangle &r); // assignment operator
        ~Rectangle();
        double getWidth() const;
        double getHeight() const;
        void setWidth(double width);
        void setHeight(double Height);
        void setDimension(double width, double length)
        {
            _width = width;
            _height = length;
        }
        double getArea() const;
        void print() const;
        double getPerimeter() const;
    private:
        double _width;
        double _height;
};



#endif