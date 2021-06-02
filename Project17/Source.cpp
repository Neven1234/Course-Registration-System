#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"CourseData.h"
#include"Student.h"
#include "Admin.h"
using namespace std;
int main()
{
	CourseData c;
	Student student;
	Admin admin; 
	//admin.addStudent();
	string email, password, academicYear;
	int n;
	cout << "Enter Semster?" << endl;
	cin >> student.semster;
	if (student.semster == 1)
	{
		student.long_in();
		if (!student.isTrue)
		{
			cout << "wrong data yaba" << endl;
		}
		else
		{
			cout << "1- all courses   2- search 3- add course" << endl;
			cin >> n;
			if (n == 1)
			{
				student.display1();

			}
			else if (n == 2)
			{
				student.search1();
			}
			else if (n == 3)
			{
				student.registerForCourse(student.count);
			}
			else
				cout << "Wrong number" << endl;
		}
	}
	else if (student.semster == 2)
	{
		student.long_in();
		if (!student.isTrue)
		{
			cout << "wrong data yaba" << endl;
		}
		else
		{
			cout << "1- all courses   2- search 3- add course" << endl;
			cin >> n;
			if (n == 1)
			{
				student.display2();

			}
			else if (n == 2)
			{
				student.search2();
			}
			else if (n == 3)
			{
				student.registerForCourse(student.count);
			}
			else
				cout << "Wrong number" << endl;
		}
	}
	else if (student.semster == 3)
	{
		student.long_in();
		if (!student.isTrue)
		{
			cout << "wrong data yaba" << endl;
		}
		else
		{
			cout << "1- all courses   2- search 3- add course" << endl;
			cin >> n;
			if (n == 1)
			{
				student.display3();

			}
			else if (n == 2)
			{
				student.search3();
			}
			else if (n == 3)
			{
				student.registerForCourse(student.count);
			}
			else
				cout << "Wrong number" << endl;
		}
	}
	else if (student.semster == 4)
	{
		student.long_in();
		if (!student.isTrue)
		{
			cout << "wrong data yaba" << endl;
		}
		else
		{
			cout << "1- all courses   2- search 3- add course" << endl;
			cin >> n;
			if (n == 1)
			{
				student.display4();

			}
			else if (n == 2)
			{
				student.search4();
			}
			else if (n == 3)
			{
				student.registerForCourse(student.count);
			}
			else
				cout << "Wrong number" << endl;
		}
	}
	
}