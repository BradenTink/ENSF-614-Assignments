//square.h


#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape{
	
	public:

		Square(int _x ,int _y, int _sideA, const char* _name);
		//Promises 
		/*
			Creates an object of tpye square 
		*/
		//Requires
		/*
			four arguments origin points x, y
			itn side_A  
			name bing the shapeName 
		*/
		
		Square(const Square& _other);
		//Promises 
		/*
			Object construcotr for Square  
		*/
		//Requires
		/*
			Requires an address of an object of type square
		*/

		double area()const;
		//Promises 
		/*
			Area function returns a double being the area of the square 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		double perimeter() const;
		//Promises 
		/*
			perimeter function returns a double being the perimeter of the square 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		
		void display() const override;
		//Promises 
		/*
			Display function returns no value  
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		int get_side_a();
		//Promises 
		/*
			Returns the value of side A of type int  
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/

		void set_side_a(int _sideA);
		//Promises 
		/*
			set_side_a function returns no value  
		*/
		//Requires
		/*
			Requries an int argument to set _side_A class varialbe
		*/

	protected: 
		int sideA;

	private:
		

};
	
	
#endif //SQUARE_H