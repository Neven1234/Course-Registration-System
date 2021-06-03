#include "Admin.h"
#include<fstream>
#include<string>
#include"Student.h"
using namespace std;

bool Admin::long_in()
{
	string us,pass;
	string name, password;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, name);
	cout << "password: " << endl;
	getline(cin, password);	
		ifstream read("Admin.txt");
		while (read.good())
		{
			getline(read, us);
			getline(read, pass);
			if (us == name && pass == password)
				return true;
		}
	
	return 0;

}

void Admin::addStudent()
{
	Student s;
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
	//cout << "Enter Student Finished Courses: ";
	//cin >> s.;

	string filename = "Student-" + s.academicYear + '-' + count+".txt";
	fstream year_sem;
	year_sem.open(filename, ios::out | ios::app);
	year_sem << s.username << endl << s.password << endl << s.id  << endl;
	year_sem.close();
	s.Files++;

}
