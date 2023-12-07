//Circle.cpp

#include <iostream>
#include "circle.h"
#include "math.h"
#include <cstring>


using namespace std; 


Circle::Circle(int _x ,int _y, int _radius, const char* _name):Shape(_x, _y, _name){
    set_radius(_radius);

}


void Circle::set_radius(int _radius){
    radius = _radius;
}

int Circle::get_radius()const{
    return radius;
}

double Circle::area()  const{

    return (M_PI * pow(radius, 2));
}

double Circle::perimeter()const {

    return (2 * M_PI * radius);
}



void Circle::display()const {
    cout << "Circle Name: " << this->getName() << " \n";
    Point circleOrigin = *getOrigin();
    cout << "X-coordinate: " << circleOrigin.get_xCoord() << " \n";
    cout << "Y-coordinate: " << circleOrigin.get_yCoord() << " \n";
    cout << "Radius: " << get_radius() << " \n";
    cout << "Area: " << area() << " \n";
    cout << "Perimeter: " << perimeter() << " \n";



}
