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

string CourseName, code,newCourseName,newcode;
int max_num_of_students, hours,newMaximum,newHours;

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


void Admin::EditCourses(int semster)
{
	int n;
	string temp;
	ifstream seek1;
	ofstream seek2;
	
	if (semster == 1)
	{
		seek1.open("Semster1.txt");
		seek2.open("temp.txt");
		cout << "1-Edit Code   2-Edit Cours Name"    "3-Edit Maximum Nmber of Students"
			"4-Edit Course Hours" << endl;
		cin >> n;
		if (n == 1)
		{
			cout << "Enter your old Code\n";
			cin.ignore();
			getline(cin, code);
			cout << "Enter the new Code\n";
			getline(cin, newcode);

			while (getline(seek1, temp))
			{
				if (temp.find(code) != string::npos)
				{
					temp.replace(temp.find(code), code.length(), newcode);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster1.txt");
			rename("temp.txt", "Semster1.txt");
		}

		if (n == 2)
		{
			cout << "Enter your old Course Name\n";
			cin.ignore();
			getline(cin, CourseName);
			cout << "Enter the new Course Name\n";
			getline(cin, newCourseName);

			while (getline(seek1, temp))
			{
				if (temp.find(CourseName) != string::npos)
				{
					temp.replace(temp.find(CourseName), CourseName.length(), newCourseName);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster1.txt");
			rename("temp.txt", "Semster1.txt");
		}

		if (n == 3)
		{
			cout << "Enter your old Maximum Number Of Students\n";
			string maxnumofstudents = to_string(max_num_of_students);
			cin.ignore();
			getline(cin, maxnumofstudents);
			cout << "Enter the new Maximum Number Of Students\n";
			string SnewMaximumw = to_string(newMaximum);
			getline(cin, SnewMaximumw);

			while (getline(seek1, temp))
			{
				if (temp.find(max_num_of_students) != string::npos)
				{
					temp.replace(temp.find(max_num_of_students), code.length(), SnewMaximumw);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster1.txt");
			rename("temp.txt", "Semster1.txt");
		}

		if (n == 4)
		{
			cout << "Enter your old Course Hours\n";
			string Shours = to_string(hours);
			string SnewHours = to_string(newHours);
			cin.ignore();
			getline(cin, Shours);
			cout << "Enter the new Course Hours\n";
			getline(cin, Shours);

			while (getline(seek1, temp))
			{
				if (temp.find(Shours) != string::npos)
				{
					temp.replace(temp.find(Shours), code.length(), SnewHours);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster1.txt");
			rename("temp.txt", "Semster1.txt");
		}
	}


	if (semster == 2)
	{
		seek1.open("Semster2.txt");
		seek2.open("temp.txt");
		cout << "1-Edit Code   2-Edit Cours Name"    "3-Edit Maximum Nmber of Students"
			"4-Edit Course Hours" << endl;
		cin >> n;
		if (n == 1)
		{
			cout << "Enter your old Code\n";
			cin.ignore();
			getline(cin, code);
			cout << "Enter the new Code\n";
			getline(cin, newcode);

			while (getline(seek1, temp))
			{
				if (temp.find(code) != string::npos)
				{
					temp.replace(temp.find(code), code.length(), newcode);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster2.txt");
			rename("temp.txt", "Semster2.txt");
		}

		if (n == 2)
		{
			cout << "Enter your old Course Name\n";
			cin.ignore();
			getline(cin, CourseName);
			cout << "Enter the new Course Name\n";
			getline(cin, newCourseName);

			while (getline(seek1, temp))
			{
				if (temp.find(CourseName) != string::npos)
				{
					temp.replace(temp.find(CourseName), CourseName.length(), newCourseName);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster2.txt");
			rename("temp.txt", "Semster2.txt");
		}

		if (n == 3)
		{
			cout << "Enter your old Maximum Number Of Students\n";
			string maxnumofstudents = to_string(max_num_of_students);
			cin.ignore();
			getline(cin, maxnumofstudents);
			cout << "Enter the new Maximum Number Of Students\n";
			string SnewMaximumw = to_string(newMaximum);
			getline(cin, SnewMaximumw);

			while (getline(seek1, temp))
			{
				if (temp.find(max_num_of_students) != string::npos)
				{
					temp.replace(temp.find(max_num_of_students), code.length(), SnewMaximumw);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster2.txt");
			rename("temp.txt", "Semster2.txt");
		}

		if (n == 4)
		{
			cout << "Enter your old Course Hours\n";
			string Shours = to_string(hours);
			string SnewHours = to_string(newHours);
			cin.ignore();
			getline(cin, Shours);
			cout << "Enter the new Course Hours\n";
			getline(cin, Shours);

			while (getline(seek1, temp))
			{
				if (temp.find(Shours) != string::npos)
				{
					temp.replace(temp.find(Shours), code.length(), SnewHours);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster2.txt");
			rename("temp.txt", "Semster2.txt");
		}
	}


	if (semster == 3)
	{
		seek1.open("Semster3.txt");
		seek2.open("temp.txt");
		cout << "1-Edit Code   2-Edit Cours Name"    "3-Edit Maximum Nmber of Students"
			"4-Edit Course Hours" << endl;
		cin >> n;
		if (n == 1)
		{
			cout << "Enter your old Code\n";
			cin.ignore();
			getline(cin, code);
			cout << "Enter the new Code\n";
			getline(cin, newcode);

			while (getline(seek1, temp))
			{
				if (temp.find(code) != string::npos)
				{
					temp.replace(temp.find(code), code.length(), newcode);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster3.txt");
			rename("temp.txt", "Semster3.txt");
		}

		if (n == 2)
		{
			cout << "Enter your old Course Name\n";
			cin.ignore();
			getline(cin, CourseName);
			cout << "Enter the new Course Name\n";
			getline(cin, newCourseName);

			while (getline(seek1, temp))
			{
				if (temp.find(CourseName) != string::npos)
				{
					temp.replace(temp.find(CourseName), CourseName.length(), newCourseName);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster3.txt");
			rename("temp.txt", "Semster3.txt");
		}

		if (n == 3)
		{
			cout << "Enter your old Maximum Number Of Students\n";
			string maxnumofstudents = to_string(max_num_of_students);
			cin.ignore();
			getline(cin, maxnumofstudents);
			cout << "Enter the new Maximum Number Of Students\n";
			string SnewMaximumw = to_string(newMaximum);
			getline(cin, SnewMaximumw);

			while (getline(seek1, temp))
			{
				if (temp.find(max_num_of_students) != string::npos)
				{
					temp.replace(temp.find(max_num_of_students), code.length(), SnewMaximumw);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster3.txt");
			rename("temp.txt", "Semster3.txt");
		}

		if (n == 4)
		{
			cout << "Enter your old Course Hours\n";
			string Shours = to_string(hours);
			string SnewHours = to_string(newHours);
			cin.ignore();
			getline(cin, Shours);
			cout << "Enter the new Course Hours\n";
			getline(cin, Shours);

			while (getline(seek1, temp))
			{
				if (temp.find(Shours) != string::npos)
				{
					temp.replace(temp.find(Shours), code.length(), SnewHours);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster3.txt");
			rename("temp.txt", "Semster3.txt");
		}
	}


	if (semster == 4)
	{
		seek1.open("Semster4.txt");
		seek2.open("temp.txt");
		cout << "1-Edit Code   2-Edit Cours Name"    "3-Edit Maximum Nmber of Students"
			"4-Edit Course Hours" << endl;
		cin >> n;
		if (n == 1)
		{
			cout << "Enter your old Code\n";
			cin.ignore();
			getline(cin, code);
			cout << "Enter the new Code\n";
			getline(cin, newcode);

			while (getline(seek1, temp))
			{
				if (temp.find(code) != string::npos)
				{
					temp.replace(temp.find(code), code.length(), newcode);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster4.txt");
			rename("temp.txt", "Semster4.txt");
		}

		if (n == 2)
		{
			cout << "Enter your old Course Name\n";
			cin.ignore();
			getline(cin, CourseName);
			cout << "Enter the new Course Name\n";
			getline(cin, newCourseName);

			while (getline(seek1, temp))
			{
				if (temp.find(CourseName) != string::npos)
				{
					temp.replace(temp.find(CourseName), CourseName.length(), newCourseName);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster4.txt");
			rename("temp.txt", "Semster4.txt");
		}

		if (n == 3)
		{
			cout << "Enter your old Maximum Number Of Students\n";
			string maxnumofstudents = to_string(max_num_of_students);
			cin.ignore();
			getline(cin, maxnumofstudents);
			cout << "Enter the new Maximum Number Of Students\n";
			string SnewMaximumw = to_string(newMaximum);
			getline(cin, SnewMaximumw);

			while (getline(seek1, temp))
			{
				if (temp.find(max_num_of_students) != string::npos)
				{
					temp.replace(temp.find(max_num_of_students), code.length(), SnewMaximumw);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster4.txt");
			rename("temp.txt", "Semster4.txt");
		}

		if (n == 4)
		{
			cout << "Enter your old Course Hours\n";
			string Shours = to_string(hours);
			string SnewHours = to_string(newHours);
			cin.ignore();
			getline(cin, Shours);
			cout << "Enter the new Course Hours\n";
			getline(cin, Shours);

			while (getline(seek1, temp))
			{
				if (temp.find(Shours) != string::npos)
				{
					temp.replace(temp.find(Shours), code.length(), SnewHours);
				}
				seek2 << temp << endl;

			}
			seek1.close();
			seek2.close();
			remove("Semster4.txt");
			rename("temp.txt", "Semster4.txt");
		}
	}

}