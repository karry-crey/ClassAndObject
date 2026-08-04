#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
using namespace std;

class Date {
public:
	Date(int year = 1, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}

	Date(Date& d) {
		_year = d._day;
		_month = d._month;
		_day = d._day;
	}

private:
	int _year;
	int _month;
	int _day;
};



int main() {
	Date d1(2025, 4, 24);//普通构造
	Date d2(d1); //拷贝构造
	Date d3 = d1;//拷贝构造
	return 0;
}