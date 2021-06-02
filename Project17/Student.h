#pragma once
#include <string>
#include<iostream>
using namespace std;
class Student
{
public:
	string email, password, SavilableHours, count = "1";
	int academicYear, semster , avilableHours,C=2;
	bool isTrue;

public:
	void long_in();
	void display1();
	void search1();
	void display2();
	void search2();
	void display3();
	void search3();
	void display4();
	void search4();
	void registerForCourse(string C);
	void movetousers(int number1, int number2, int number3 ,int number4 , string year, string semster, string studentNum);
	void edite( string  email,string password,string c);
};

