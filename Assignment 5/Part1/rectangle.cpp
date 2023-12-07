//rectangle.cpp

#include <iostream>
#include "rectangle.h"

using namespace std; 


Rectangle::Rectangle(int _x ,int _y, int _sideA, int _sideB, const char * _name) 
    : Square(_x, _y, _sideA, _name){
    set_side_b(_sideB);

}
 
Rectangle::Rectangle(const Rectangle& _other) 
    : Square(_other){

    set_side_b(_other.sideB);

}

int Rectangle::get_side_a() const{
    return Square::sideA;

}

void Rectangle::set_side_a(int _a){

    sideA = _a;
}
void Rectangle::set_side_b(int _b){

    sideB = _b;
}

double Rectangle::area() const {

    return (sideB*sideA);
}

double Rectangle::perimeter() const {

    return (sideB*2+sideA*2); 
}

void Rectangle::display() const{
   
    cout << "\nRectangle Name: " << this->getName() << " \n";
    Point sqaureOrigin = *getOrigin();
    cout << "X-coordinate: " << sqaureOrigin.get_xCoord() << " \n";
    cout << "Y-coordinate: " << sqaureOrigin.get_yCoord() << " \n";
    cout << "Side a: " << get_side_a() << " \n";
    cout << "Side b: " << sideB << " \n";
    cout << "Area: " << area() << " \n";
    cout << "Perimeter: " << perimeter() << " \n";


}
