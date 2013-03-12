#ifndef DAY_H
#define DAY_H
#include <iostream>

using namespace std; 

class day
{
	public:
	day();
	day(int date);
	day(string date);
	~day();
	string today();
	string tomorrow();
	string yesterday();
	string operator<<(const string date);
	int operator<<(const int daynum);
	int operator++(const int daynum);
	
	
	
	private:
	string date_;
	int daynum_;
};

day::day()
{
	date_ = "Monday";
	daynum_ = 1;
}

day::day(string date)
{
	date_ = date;
	//create code for conversion here
	daynum_ = 1;
}

day::day(int daynum)
{
	//create code for conversion here
	if(daynum == 1)
	date_ = "Monday";
	if(daynum == 2)
	date_ = "Teusday";
	if(daynum == 3)
	date_ = "Wednesday";
	if(daynum == 4)
	date_ = "Thursday";
	if(daynum == 5)
	date_ = "Friday";
	if(daynum == 6)
	date_ = "Saturday";
	if(daynum == 7)
	date_ = "Sunday";
	
	daynum_ = daynum;
}

day::~day()
{
}

	
	
	
	
	
	
	
#endif
