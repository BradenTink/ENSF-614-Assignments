//rectangle.h


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle: public Square {

	public:
		
		Rectangle(int _x ,int _y, int _sideA, int _sideB, const char* _name);
		//Promises 
		/*
			Creates an object of tpye rectangle 
		*/
		//Requires
		/*
			four arguments origin points x, y
			int side_a, side_
			name bing the shapeName 
		*/
		Rectangle(const Rectangle& _other);
		//Promises 
		/*
			Creates an object of tpye circle 
		*/
		//Requires
		/*
			A object of type rectangle 
		*/
		
		void set_side_a(int _a);
		//Promises 
		/*
			set_side_a function returns no value  
		*/
		//Requires
		/*
			Requries an int argument to set _a class varialbe
		*/

		void set_side_b(int _b);
		//Promises 
		/*
			set_side_b function returns no value  
		*/
		//Requires
		/*
			Requries an int argument to set _b class varialbe
		*/

		int get_side_a() const;
		//Promises 
		/*
			Returns the side a of type int 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		double area()const;
		//Promises 
		/*
			Area function returns a double being the area of the rectangle 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		double perimeter() const;
		//Promises 
		/*
			perimeter function returns a double being the perimeter of the rectangle 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		void display() const;
		//Promises 
		/*
			Display function returns no value  
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		

	private:
		int sideB;
	
};
	
	
#endif //RECTANGLE.H