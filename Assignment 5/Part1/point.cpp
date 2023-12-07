//point.cpp
#include <iostream>
#include "math.h"
#include "point.h"

using namespace std; 

int initID = 1000; 
Point::Point(double _x, double _y){
	
	iterateCnt();
	id = get_pointCnt();
	setx(_x);
	sety(_y); 
	
}
void Point::iterateCnt(){
	initID += 1;	
}

void Point::setx(double _x){	
	x = _x; 
}
void Point::sety(double _y){	
	y = _y;
}
double Point::get_xCoord() const{
	return x;
}		
double Point::get_yCoord() const{
	return y; 
}
int Point::get_pointCnt() const{
	return initID;
}	
double Point::distance(Point& _other){
	double x1, x2, y1, y2;
	x1 = x;
	y1 = y; 
	
	x2 = _other.get_xCoord();
	y2 = _other.get_yCoord();
	
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
double Point::distance(Point& _thePoint, Point& _other){
	
	double x1, x2, y1, y2;
	x1 = _thePoint.x;
	y1 = _thePoint.y; 
	

	x2 = _other.get_xCoord();
	y2 = _other.get_yCoord();
	
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}



