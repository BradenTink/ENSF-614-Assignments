//curvecut.h


#ifndef CURVECUT_H
#define CURVECUT_H
#include "circle.h"
#include "rectangle.h"


class CurveCut: public Rectangle, Circle{
	protected: 
		
	public:

		CurveCut(int _x ,int _y, int _sideA, int _sideB, int _radius, const char* _name);
		
		double area() const;
		
		double perimeter()  const;
		
		void display() const;

      
	
	private:
		

};
	
	
#endif //CURVECUT_H