#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
using namespace std;

class Date {
public:
	Date(int year = 1, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& d) {
		_year = d._day;
		_month = d._month;
		_day = d._day;
	}

	//隐含了this 参数
	bool operator==(Date& d) {
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

private:
	int _year;
	int _month;
	int _day;
};

//bool operator==(Date& d1, Date& d2) {
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

class A {
public:
	void func() {
		cout << "A::func()" << endl;
	}
};

void f() {
	cout << "f()" << endl;
}

//int main() {
//	Date d1(2025, 4, 24);//普通构造
//	Date d2(d1); //拷贝构造
//	Date d3 = d1;//拷贝构造
//	Date d4(2025, 5, 26);
//	cout << (d1 == d4) << endl;//加括号，<<优先级大于运算符
//	//operator==(d1, d4);
//	cout << d1.operator==(d4) << endl;
//
//	return 0;
//}

int main() {
	void(*func1)() = f;
	(*func1)();

	//成员函数
	void(A:: * func2)() = &A::func;
	A aa;
	(aa.*func2)();
	return 0;
}