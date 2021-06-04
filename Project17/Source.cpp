#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Student.h"
#include "Admin.h"
using namespace std;
int main()
{
	Student student;
	Admin admin; 
	string email, password, academicYear;
	int n,userChoice,adminChoice, studentChoice;

	cout << "1-Admin 2-Student" << endl;
		cin >> userChoice;
		if (userChoice == 1)
		{
			admin.long_in();
			if (!admin.isTrue)
			{
				cout << "Wrong data!" << endl;
				admin.long_in();
			}
			cout << "Enter Your Choice" << endl;
			cout << endl;
			cout << "1-Add new Student" << "\n" << "2-Add new Course" << "\n" << "3-Enter Course Prerequisite" << "\n"
				<< "4-View Students in Specific course" << "\n" << "5-View all courses in Specific Student" << "\n"
				<< "6-Edit Courses Data" << "\n" << "7-Log out" << endl;
			cin >> adminChoice;
			if (adminChoice == 1)
			{
				admin.addStudent();
			}
			if (adminChoice == 2)
			{
				admin.AddCourse();
			}

			if (adminChoice == 6)
			{
				admin.EditCourses();
			}
			while (adminChoice==7)
			{
				break;
			}
		}
		if (userChoice == 2)
		{
			cout << "Enter Your Semester" << endl;
			cin >> student.semster;

			student.long_in();
			if (!student.isTrue)
			{
				cout << "Wrong data!" << endl;
				student.long_in();
			}
			if (student.semster == 1)
			{
				cout << "Enter Your Choice" << endl;
				cout << endl;
				cout << "1-View list of available courses" << "\n" << "2-View details of a specific course" << "\n" << "3-Regiester for a course" << "\n"
					<< "4-View all Your courses" << "\n" << "5-Edit Your data" << "\n"
					<< "6-log out" << endl;
				cin >> studentChoice;
				if (studentChoice == 1)
				{
					student.display1();

				}
				if (studentChoice == 2)
				{

				}
				if (studentChoice == 3)
				{
					student.registerForCourse(student.count);
				}
				if (studentChoice == 4)
				{

				}
				if (studentChoice == 5)
				{

				}
				while (studentChoice == 6)
				{
					break;
				}
			}
			
			if (student.semster == 2)
			{
				cout << "Enter Your Choice" << endl;
				cout << endl;
				cout << "1-View list of available courses" << "\n" << "2-View details of a specific course" << "\n" << "3-Regiester for a course" << "\n"
					<< "4-View all Your courses" << "\n" << "5-Edit Your data" << "\n"
					<< "6-log out" << endl;
				cin >> studentChoice;
				if (studentChoice == 1)
				{
					student.display1();
				}
				if (studentChoice == 2)
				{

				}
				if (studentChoice == 3)
				{
					student.registerForCourse(student.count);
				}
				if (studentChoice == 4)
				{

				}
				if (studentChoice == 5)
				{

				}
				while (studentChoice == 6)
				{
					break;
				}
			}

			if (student.semster == 3)
			{
				cout << "Enter Your Choice" << endl;
				cout << endl;
				cout << "1-View list of available courses" << "\n" << "2-View details of a specific course" << "\n" << "3-Regiester for a course" << "\n"
					<< "4-View all Your courses" << "\n" << "5-Edit Your data" << "\n"
					<< "6-log out" << endl;
				cin >> studentChoice;
				if (studentChoice == 1)
				{
					student.display1();
				}
				if (studentChoice == 2)
				{

				}
				if (studentChoice == 3)
				{
					student.registerForCourse(student.count);
				}
				if (studentChoice == 4)
				{

				}
				if (studentChoice == 5)
				{

				}
				while (studentChoice == 6)
				{
					break;
				}
			}
			
			if (student.semster == 4)
			{
				cout << "Enter Your Choice" << endl;
				cout << endl;
				cout << "1-View list of available courses" << "\n" << "2-View details of a specific course" << "\n" << "3-Regiester for a course" << "\n"
					<< "4-View all Your courses" << "\n" << "5-Edit Your data" << "\n"
					<< "6-log out" << endl;
				cin >> studentChoice;
				if (studentChoice == 1)
				{
					student.display1();
				}
				if (studentChoice == 2)
				{

				}
				if (studentChoice == 3)
				{
					student.registerForCourse(student.count);
				}
				if (studentChoice == 4)
				{

				}
				if (studentChoice == 5)
				{

				}
				while (studentChoice == 6)
				{
					break;
				}
			}
		}
	
}