//shape.h

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{

	public:
	
		Shape(int _x, int _y, const char* _name);
		//Promises 
		/*
			Creates an object of tpye Shape 
		*/
		//Requires
		/*
			three arguments origin points x, y
			name bing the shapeName 
		*/
		
		
		Shape(const Shape& _other);
		//Promises 
		/*
			Object construcotr for Shape  
		*/
		//Requires
		/*
			Requires an address of an object of type Shape
		*/

		Shape& operator=(const Shape& _other);
		//Promises 
		/*
			Object construcotr for Shape  
		*/
		//Requires
		/*
			Requires an address of an object of type Shape
		*/

		void setOrigin(int _x, int _y);
		//Promises 
		/*
			Set Origin of the object
		*/
		//Requires
		/*
			Requires two arguments x and y
		*/

		Point* getOrigin() const;
		//Promises 
		/*
			Get Origin returns a Point object  
		*/
		//Requires
		/*
			Requires no arguments 
		*/


		char* getName() const; 
		//Promises 
		/*
			returns a pointer of type char which will point to the name 
		*/
		//Requires
		/*
			Requires no arguments 
		*/
		
		virtual double area() const;
		//Promises 
		/*
			returns area of the shape of type double  
		*/
		//Requires
		/*
			Requires no arguments 
		*/
    	
    	
		virtual double perimeter() const;
		//Promises 
		/*
			returns perimeter of the shape of type double  
		*/
		//Requires
		/*
			Requires no arguments 
		*/


		void display() const;
		//Promises 
		/*
			Display which will display features of the shape
		*/
		//Requires
		/*
			Requires no arguments 
		*/
	
		double distance(Shape& _other);
		//Promises 
		/*
			Returns the distance between two shapes 
		*/
		//Requires
		/*
			Requires one argument of type shape 
		*/

		double distance(Shape& _theShape, Shape& _other);
		//Promises 
		/*
			Returns the distance between two shapes 
		*/
		//Requires
		/*
			Requires two argument of type shape 
		*/

		void move(double _dx, double _dy);
		//Promises 
		/*
			Returns no value
		*/
		//Requires
		/*
			Requires two argument of type double to move the x and y origin of the shape 
		*/

		virtual ~Shape();
		//Promises 
		/*
			Destructor of the shape name
		*/
		//Requires
		/*
			Requires no arguments 
		*/
		
	private:
		Point *origin;
		char *shapeName;
	
	
};
	
	
#endif //SHAPE_H