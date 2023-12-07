//Point.h
#ifndef POINT_H
#define POINT_H

class Point{
	public:
	
		Point(double _x, double _y);
		//Promises 
		/*
			Creates an object of tpye point 
		*/
		//Requires
		/*
			two arguments origin points x, y
			
		*/
		double get_xCoord() const;
		//Promises 
		/*
			Returns the x coordinate  
		*/
		//Requires
		/*
			requires no arguments
		*/
		double get_yCoord() const;
		//Promises 
		/*
			Returns the y coordinate  
		*/
		//Requires
		/*
			requires no arguments
		*/
		int get_pointCnt() const;
		//Promises 
		/*
			Returns the pointCnt coordinate  
		*/
		//Requires
		/*
			requires no arguments
		*/
		double get_ID();
		//Promises 
		/*
			Returns the ID coordinate  
		*/
		//Requires
		/*
			requires no arguments
		*/
		void setx(double _x);
		//Promises 
		/*
			setx function returns no value  
		*/
		//Requires
		/*
			Requries a double argument to set x class varialbe
		*/
		void sety(double _y);
		//Promises 
		/*
			sety function returns no value  
		*/
		//Requires
		/*
			Requries a double argument to set y class varialbee
		*/
	
		double distance(Point& _other);
		//Promises 
		/*
			Returns the distance between the object that calls the function 
			and the passed in object  
		*/
		//Requires
		/*
			Requires an object of type point to be passed in 
		*/
		static double distance(Point& _thePoint, Point& _other);
		//Promises 
		/*
			Returns the distance between the two objects that are passed in
		*/
		//Requires
		/*
			Requires two point objects to be passed in of type Point 
		*/
		void iterateCnt();
		//Promises 
		/*
			Returns  no value iterates the id count 
		*/
		//Requires
		/*
			Requires no variables to passed in 
		*/
	
	private:
		int id; 		//point id
		double x;		//x coordinate
		double y;		// y cordinaate
	
};
	
#endif //POINT.H