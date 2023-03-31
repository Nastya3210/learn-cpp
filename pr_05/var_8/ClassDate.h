#pragma once
using namespace std;
#include <iostream>

class ClassDate
{
private:
	int day;
	int month;
	int year;
	char delimeter='.';

public:


	ClassDate() {
		this->day = 1;
		this->month = 1;
		this->year = 1970;
	}	
	ClassDate(int _day, int _month, int _year) {
		this->day = _day;
		this->month = _month;
		this->year = _year;
	}
	void print() {
		cout << this->day << this->delimeter << this->month << this->delimeter << this->year << this->delimeter << endl;
	}



};

