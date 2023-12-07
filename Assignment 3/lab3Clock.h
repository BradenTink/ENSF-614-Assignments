// lab3Clock.h
// ENSF 614 Lab 3 Exercise C

#ifndef LAB3CLOCK_H
#define LAB3CLOCK_H
class Clock {
public:
	Clock ();

	Clock (int tot);
	
	Clock (int second, int minute, int hour);
	
	
	int get_second() const;
	
	int get_minute() const;
	
	int get_hour() const;
	
	void set_second(int sec);
	
	void set_minute(int min);

	void set_hour(int hour);
	
	void add_seconds(int sec);
	
	void add_minute(int min);
	
	void increment();

	void decrement();
	
	

private:
	int second;  // the second part of the clock
    int minute;  // the minute part of the clock
	int hour;	 // the hour part of the clock
	
	int hms_to_sec();
	void sec_to_hms(int sec);
	
};

#endif //LAB3_CLOCK_H



