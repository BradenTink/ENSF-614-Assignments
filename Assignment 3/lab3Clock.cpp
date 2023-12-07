// lab3Clock.cpp
// ENSF 614 Lab 3 Exercise C

#include "lab3Clock.h"
#include <iostream>
using namespace std; 


Clock::Clock():second(0), minute(0),hour(0){
	
}

Clock::Clock(int tot){
	int total = tot;
	if(total < 0){
		set_hour(0);
		set_minute(0);
		set_second(0);
	}else{
		if(total >= 86400){
			total -= 86400;
		}
		
	}
	sec_to_hms(total);
	
}

Clock::Clock(int hour, int minute, int second){
	if((hour < 0 || minute < 0 || second < 0) || (hour > 23 || minute >59 || second > 59)){
		set_second(0);
		set_minute(0);
		set_hour(0); 
	}
	else{
		set_second(second);
		set_minute(minute);
		set_hour(hour);
	}
}

int Clock::get_second() const{
	return second;
}


int Clock::get_minute() const{
	return minute;
}

int Clock::get_hour() const{
	return hour;
}

void Clock::set_second(int sec){
	if(sec >= 60 || sec < 0 ){
		second = this->get_second();
	}
	else{
		second = sec;
	}
}

void Clock::set_minute(int min){
	if(min >= 60 || min < 0 ){
		minute = this->get_minute();
	}
	else{
		minute = min;
	}
}

void Clock::set_hour(int hr){
	if(hr > 24 || hr < 0 ){
		hour = this->get_hour();
	}
	else{
		hour = hr;
	}
}

void Clock::add_seconds(int sec){
	int total = 0; 
	total = hms_to_sec(); 
	total = total + sec;
	
	cout << total;
	
	while(total >= 86400){
		total -= 86400;
	}
	sec_to_hms(total);
}

void Clock::increment(){
	
	int total; 

	total = this -> get_second() + (this -> get_minute()*60) + (this -> get_hour()*3600);
	
	total += 1;
	
	if(total == 86400){
		this -> set_hour(0);
		this -> set_minute(0);
		this -> set_second(0); 
	}
	else {
		
		sec_to_hms(total);
	}
	
}

void Clock::decrement(){
	int total; 
	
	total = this -> get_second() + (this -> get_minute()*60) + (this -> get_hour()*3600);
	total -= 1;
	if (total == -1){
		this ->set_hour(23);
		this ->set_minute(59);
		this ->set_second(59);
	}
	else{
		this -> set_hour(total / 3600);
		total -= ((this -> get_hour())*3600);
		
		this -> set_minute(total/60);
		total -= ((this -> get_minute())*60);
		
		this -> set_second(total);
	}

}



int Clock::hms_to_sec(){
	int total = 0;
	total = this-> get_second() + (this->get_minute()*60) + (this->get_hour()*3600);
	return total;

}

void Clock::sec_to_hms(int sec){
	
	int temp = sec;
	
	this -> set_hour(sec/3600);
	
	temp -= hour*3600;
	
	this -> set_minute(temp/60);
	
	temp -= minute*60;
	
	this -> set_second(temp);
	
}
	

