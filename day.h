#ifndef DAY_H
#define DAY_H
#include <iostream>
#include <string>
#include <stdexcept>

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
	string convert(int daynum);
	
	
	
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

string day::convert(int daynum)
{
	if(daynum == 1)
	return "Monday";
	if(daynum == 2)
	return "Teusday";
	if(daynum == 3)
	return "Wednesday";
	if(daynum == 4)
	return "Thursday";
	if(daynum == 5)
	return "Friday";
	if(daynum == 6)
	return "Saturday";
	if(daynum == 7)
	return "Sunday";
}
string day::today()
{
	return date_;
}

string day::tomorrow()
{
	if(daynum_!=7)
	return (convert(daynum_+1));
	else
	return "Monday";
}

string day::yesterday()
{
	if(daynum_!=1)
	return (convert(daynum_-1));
	else
	return "Sunday";
}
	
	
	
	
	
	
#endif
