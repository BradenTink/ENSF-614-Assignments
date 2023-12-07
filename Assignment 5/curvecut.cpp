//Circle.cpp

#include <iostream>
#include "curvecut.h"
#include "math.h"
#include <cstring>


using namespace std; 

CurveCut::CurveCut(int _x ,int _y, int _sideA, int _sideB, int _radius, const char* _name)
    : Circle(_x, _y, _radius, _name), Rectangle(_x, _y, _sideA, _sideB, _name), Shape(_x, _y, _name){
   
    if (_radius > _sideA || _radius > _sideB ){
        cout << "Radius is of the circle is greater than one of the rectangle sides" << endl;
    }     
}

double CurveCut::area() const{
   return(sideA*sideB - ((M_PI * pow(radius, 2))/4));
}

double CurveCut::perimeter() const {

   return((sideA*2) + (sideB*2) + ((2*M_PI*radius)/4) - (2*radius));
}

void CurveCut::display()const {
    cout << "\nCurveCut Name: " << this->getName() << " \n";
    Point sqaureOrigin = *getOrigin();
    cout << "X-coordinate: " << sqaureOrigin.get_xCoord() << " \n";
    cout << "Y-coordinate: " << sqaureOrigin.get_yCoord() << " \n";
    cout << "Side a: " << get_side_a() << " \n";
    cout << "Side b: " << sideB << " \n";
    cout << "Radius: " << get_radius() << " \n";
    cout << "Area: " << area() << " \n";
    cout << "Perimeter: " << perimeter() << " \n";


}

