//Shape.cpp
#include <iostream>
#include "shape.h"
#include "math.h"
using namespace std; 


Shape::Shape(int _x, int _y, const char* _name) {
    origin = new Point(_x, _y);
    shapeName = new char[strlen(_name) + 1];
    strcpy(shapeName, _name);
}

Shape::Shape(const Shape& _other) {
    origin = new Point(_other.getOrigin()->get_xCoord(), _other.getOrigin()->get_yCoord());
    shapeName = new char[strlen(_other.shapeName) + 1];
    strcpy(shapeName, _other.shapeName);
}

Shape& Shape::operator=(const Shape& _other) {
     if (this != &_other){
       
        delete [] (this -> shapeName);            // de-allocate heap storage pointed to by shapeName
        this -> shapeName = new char[strlen(_other.shapeName) + 1];    // allocate new heap storage to shapeName
        strcpy(this->shapeName, _other.shapeName);         // copy new shapeName
        
        this -> setOrigin(_other.getOrigin()->get_xCoord(), _other.getOrigin()->get_yCoord());       // copy x- and y- coordinates.
    }

    return *this;
}

void Shape::setOrigin(int _x, int _y){
    Point the_Origin = *getOrigin();
    the_Origin.setx(_x) ;
    the_Origin.sety(_y);
 
}
Point* Shape::getOrigin() const{   
    return origin;
}

char* Shape::getName() const {
    return shapeName;

}

double Shape::area() const{
    return 0.0;
}
    	
double Shape::perimeter()const{ 
    return 0.0;
}


void Shape::display() const{
    cout << "\nSquare Name: " << getName() << " \n";
    Point sqaureOrigin = *getOrigin();
    cout << "X-coordinate: " << sqaureOrigin.get_xCoord() << " \n";
    cout << "y-coordinate: " << sqaureOrigin.get_yCoord() << " \n";


}

double Shape::distance(Shape& _other){
    Point the_Origin = *getOrigin();
    Point the_other = *_other.getOrigin();



    double x1, x2, y1, y2;
	x1 = the_Origin.get_xCoord();
	y1 = the_Origin.get_yCoord();
	
	
	
	x2 = the_other.get_xCoord();
	y2 = the_other.get_yCoord();
	
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

}



double Shape::distance(Shape& _theShape, Shape& _other){
    Point the_Origin = *_theShape.getOrigin();
    Point the_other = *_other.getOrigin();



    double x1, x2, y1, y2;
	x1 = the_Origin.get_xCoord();
	y1 = the_Origin.get_yCoord();
	
	
	
	x2 = the_other.get_xCoord();
	y2 = the_other.get_yCoord();
	
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

}


void Shape::move(double _dx, double _dy){
    Point the_Origin = *getOrigin();
    the_Origin.setx(the_Origin.get_xCoord() + _dx) ;
    the_Origin.sety(the_Origin.get_yCoord() + _dy);

}

Shape::~Shape(){
    delete[] shapeName;
    delete origin;
}
