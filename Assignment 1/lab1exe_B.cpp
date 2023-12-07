/*
 *  lab1exe_B.cpp
 *  ENSF 614 Lab 1, exercise B
 *  Created by Mahmood Moussavi
 *  Completed by: Braden Tink
 *  Submission Date: Sept 20, 2023
 */
#include <iostream>
#include <cmath>
using namespace std;

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

void create_table(double v){
	double angle;
	double radians;
	double distance;
	double time;
	
	cout << "Angle 		t 		d\n";
	cout << "(deg)		(sec)		(m)\n";
	angle = 0; 
	while ( angle <= 90){
		radians = degree_to_radian(angle);
		
		distance = Projectile_travel_distance(radians, v);
		time = Projectile_travel_time(radians, v);
		
		cout << angle << "       	" << time << "       	" << distance << "\n";
		angle += 5.0;
	}
}

double Projectile_travel_time(double a, double v){
	return  ((2*v*sin(a))/G);
}
double Projectile_travel_distance(double a, double v){
	return ((v*v)/G)*sin(2*a);
}

double degree_to_radian(double d){
	return (d*PI)/180;
}

int main(void)
{
    double velocity;
   
    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
    cin >> velocity;
    
    if(!cin)  // means if cin failed to read
    {
        cout << "Invlid input. Bye...\n";
        exit(1);
    }
    
    while (velocity < 0 )
    {
        cout << "\nplease enter a positive number for velocity: ";
        cin >> velocity;
        if(!cin)
        {
            cout << "Invlid input. Bye...";
            exit(1);
        }
    }
	
	create_table(velocity);

    return 0;
}


