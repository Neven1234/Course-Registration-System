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
	Student student;//coscos
	Admin admin; 
	/*admin.addStudent();*/
	string email, password, academicYear;
	int n,userChoice,adminChoice;

	cout << "1-Admin 2-Student" << endl;
		cin >> userChoice;
		if (userChoice == 1)
		{
			admin.long_in();
			if (!admin.isTrue)
			{
				cout << endl;
				cout << "Wrong data!" << endl;
				admin.long_in();
			}
			cout << "Enter Your Choice" << endl;
			cout << endl;
			cout << "1-Add new Student" << endl << "2-Add new Course" << endl << "3-Enter Course Prerequisite" << endl
				<< "4-View Students in Specific course" << endl << "5-View all courses in Specific Student" << endl
				<< "6-Edit Courses Data" << endl << "7-Log out" << endl;
			cin >> adminChoice;
			if (adminChoice == 1)
			{
				admin.addStudent();
			}
		}
	cout << "Enter Your Semster" << endl;
	cin >> student.semster;
	 if (student.semster ==1)
  {
	student.long_in();
	if (!student.isTrue)
	{ 
		cout << "Wrong data!" << endl;
		student.long_in();
	}
	else
	{
		cout << "1-View All Courses   2-Search   3-Add New Course" << endl;
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
	else 	 if (student.semster == 2)
	 {
		 student.long_in();
		 if (!student.isTrue)
		 {
			 cout << "Wrong data!" << endl;
			 student.long_in();
		 }
		 else
		 {
			 cout << "1-View All Courses   2-Search   3-Add New Course" << endl;
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
			cout << "Wrong data!" << endl;
			student.long_in();
		}
		else
		{
			cout << "1-View All Courses   2-Search   3-Add New Course" << endl;
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
			cout << "Wrong data!" << endl;
			student.long_in();
		}
		else
		{
			cout << "1-View All Courses   2-Search   3-Add New Course" << endl;
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