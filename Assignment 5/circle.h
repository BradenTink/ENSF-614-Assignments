//circle.h


#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: virtual public  Shape{
	protected: 
		int radius;
	public:

		Circle(int x ,int y, int _radius, const char* _name);
		//Promises 
		/*
			Creates an object of tpye circle 
		*/
		//Requires
		/*
			four arguments origin points x, y
			itn radius  
			name bing the shapeName 
		*/
		
        void set_radius(int _radius);
		//Promises 
		/*
			set_radius function returns no value  
		*/
		//Requires
		/*
			Requries an int argument to set radius class varialbe
		*/

        int get_radius()const;
		//Promises 
		/*
			Returns the radius of type int 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/

		double area()const override;
		//Promises 
		/*
			Area function returns a double being the area of the circle 
		*/
		//Requires
		/*
			Requries no arguments function will use getter functions
		*/
		
		double perimeter() const override;
		//Promises 
		/*
			perimeter function returns a double being the perimeter of the circle 
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
		

};
	
	
#endif //CIRCLE_H