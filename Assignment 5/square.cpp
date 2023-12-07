//Square.cpp

#include <iostream>
#include "square.h"
#include <cstring>

using namespace std; 

Square::Square(int _x ,int _y, int _sideA, const char * _name)
    : Shape(_x, _y, _name){
    set_side_a(_sideA);
 
   
}
Square::Square(const Square& _other) : Shape(_other){
    set_side_a(_other.sideA);
   
}

void Square::set_side_a(int _sideA){
   sideA = _sideA;
}

int Square::get_side_a(){
    return sideA;
}

double Square::area() const {

    return (sideA*sideA);
}

double Square::perimeter() const {

    return (sideA*4); 
}

void Square::display() const{
    cout << "\nSquare Name: " << getName() << " \n";
    Point sqaureOrigin = *getOrigin();
    cout << "X-coordinate: " << sqaureOrigin.get_xCoord() << " \n";
    cout << "Y-coordinate: " << sqaureOrigin.get_yCoord() << " \n";
    cout << "Side a: " << sideA << " \n";
    cout << "Area: " << area() << " \n";
    cout << "Perimeter: " << perimeter() << " \n";

}

