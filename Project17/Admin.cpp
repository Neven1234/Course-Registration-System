#include "Admin.h"
#include "Student.h"
#include<vector>
#include <string>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

Student s;
fstream filesem;

string CourseName, code;
int max_num_of_students, hours;

void Admin::long_in()
{

	string us, pass, name, password;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, name);
	cout << "password: " << endl;
	getline(cin, password);
	for (int i = 1; i <= 2; i++)
	{
		string tst = "Admin-" + s.count + ".txt";
		int counter = stoi(s.count);
		ifstream read2(tst);
		getline(read2, us);
		getline(read2, pass);
		if (us == name && pass == password)
		{
			read2.close();
			isTrue = true;
			break;
		}
		else
			counter++;
		stringstream ss;
		ss << counter;
		ss >> s.count;
		isTrue = false;
	}

}


void Admin::addStudent()
{
	cout << "Enter Student Year" << endl;
	 cin >> s.academicYear;
	cout << "Student Number" << endl;
	string count;
	cin >> count;
	cout << "Enter Student Name:";
	s.username;
	cin.ignore();
	getline(cin, s.username);
	cout << "Enter Student Passowrd: " << endl;
	cin.ignore();
	getline(cin, s.password);
	cout << "Enter Student ID: ";
	cin >> s.id;

	string filename = "Student-" + s.academicYear + '-' + count+".txt";
	fstream year_sem;
	year_sem.open(filename, ios::out | ios::app);
	year_sem << s.username << endl << s.password << endl << s.id  << endl;
	year_sem.close();
	s.Files++;
}

void Admin::AddCourse()
{
	cout << "Enter Semester" << endl;
	cin >> s.semster;
	if (s.semster == 1)
	{
		filesem.open("Semster1.txt", fstream::out | fstream::app);
		cout << endl;
		cout << endl;
		cout << "Enter Course Code" << endl;
	    cin>> code;

		cout << "Enter Course Name" << endl;
		cin.ignore();
		getline(cin, CourseName);
		
		cout << "Enter Course Maximum Number of Students" << endl;
		cin>> max_num_of_students;
		cout << "Enter Course Hours" << endl;
		cin >> hours;
		filesem << code << "        " << CourseName << "         " << max_num_of_students << "                    " << hours << endl;
		filesem.close();
		cout << "Course Has been Added Successfully" << endl;
	}
	if (s.semster == 2)
	{
		filesem.open("Semster2.txt", fstream::out | fstream::app);
		cout << endl;
		cout << endl;
		cout << "Enter Course Code" << endl;
		cin >> code;

		cout << "Enter Course Name" << endl;
		cin.ignore();
		getline(cin, CourseName);

		cout << "Enter Course Maximum Number of Students" << endl;
		cin >> max_num_of_students;
		cout << "Enter Course Hours" << endl;
		cin >> hours;
		filesem << code << "        " << CourseName << "         " << max_num_of_students << "                    " << hours << endl;
		filesem.close();
		cout << "Course Has been Added Successfully" << endl;
	}
	if (s.semster == 3)
	{
		filesem.open("Semster3.txt", fstream::out | fstream::app);
		cout << endl;
		cout << endl;
		cout << "Enter Course Code" << endl;
		cin >> code;

		cout << "Enter Course Name" << endl;
		cin.ignore();
		getline(cin, CourseName);

		cout << "Enter Course Maximum Number of Students" << endl;
		cin >> max_num_of_students;
		cout << "Enter Course Hours" << endl;
		cin >> hours;
		filesem << code << "        " << CourseName << "         " << max_num_of_students << "                    " << hours<< endl;
		filesem.close();
		cout << "Course Has been Added Successfully" << endl;
	}
	if (s.semster == 4)
	{
		filesem.open("Semster4.txt", fstream::out | fstream::app);
		cout << endl;
		cout << endl;
		cout << "Enter Course Code" << endl;
		cin >> code;

		cout << "Enter Course Name" << endl;
		cin.ignore();
		getline(cin, CourseName);

		cout << "Enter Course Maximum Number of Students" << endl;
		cin >> max_num_of_students;
		cout << "Enter Course Hours" << endl;
		cin >> hours;
		filesem << code << "        " << CourseName << "         " << max_num_of_students << "                    " << hours<< endl;
		filesem.close();
		cout << "Course Has been Added Successfully" << endl;
	}
}







void Admin::EditCourses()
{
	cout << "Enter Semester" << endl;
	cin >> s.semster;
	if (s.semster == 1)
	{
		filesem.open("Semster1.txt", fstream::out | fstream::app);
	}
	if (s.semster == 2)
	{

	}
	if (s.semster == 3)
	{

	}
	if (s.semster == 4)
	{

	}
}
