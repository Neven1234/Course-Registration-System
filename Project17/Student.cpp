#include "Student.h"
#include<vector>
#include <string>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;


void Student::long_in()
{
	string us, pass;
	cout << "Enter Your Academic Year" << endl;
	cin >> academicYear;
	if (academicYear == 1)
	{
		cout << "email: " << endl;
		cin.ignore();
		getline(cin, email);
		cout << "password: " << endl;
		getline(cin, password);
		while (true)
		{
			string tst = "student-1-" + count + ".txt";
			int counter = stoi(count);
			ifstream read2(tst);
			getline(read2, us);
			getline(read2, pass);
			if (us == email && pass == password)
			{				
				read2.close();
				isTrue = true;
				break;
			}
			else
			counter++;
			stringstream ss;
			ss << counter;
			ss >> count;
			isTrue = false;
		}
		
	}
	if (academicYear == 2)
	{
		cout << "email: " << endl;
		cin.ignore();
		getline(cin, email);
		cout << "password: " << endl;
		getline(cin, password);
		while (true)
		{
			string tst = "student-2-" + count + ".txt";
			int counter = stoi(count);
			ifstream read2(tst);
			getline(read2, us);
			getline(read2, pass);
			if (us == email && pass == password)
			{
				read2.close();
				isTrue = true;
				break;
			}
			else
				counter++;
			stringstream ss;
			ss << counter;
			ss >> count;
			isTrue = false;
		}

	}
	
}
void Student::registerForCourse(string C)
{
	int class1, class2, class3, class4;
	if (academicYear == 1)
	{
		if (semster == 1)
		{
			display1();
			cin >> class1 >> class2 >> class3 >> class4;
			movetousers(class1, class2, class3, class4 ,"1","1" , C);
	    }

		else if (semster == 2)
		{
			display2();
			cin >> class1 >> class2 >> class3 >> class4;
			movetousers(class1, class2, class3, class4 , "1","2", C);
		}

	}
	else if (academicYear == 2)
	{
		if (semster == 3)
		{
			display3();
			cin >> class1 >> class2 >> class3 >> class4;
			movetousers(class1, class2, class3, class4, "2","3", C);
		}
		else if (semster == 4)
		{
			display4();
			cin >> class1 >> class2 >> class3 >> class4;
			movetousers(class1, class2, class3, class4, "2","4", C);
		}

	}

	

}
void Student::movetousers(int number1, int number2, int number3, int number4 , string year ,string smester, string studentNum)
{
	vector<string> v;
	fstream data;
	if (smester == "1")
	{
		data.open("Semster1.txt", ios::in);
		if (data.is_open())
		{
			string line;
			while (getline(data, line))
			{
				v.push_back(line);
			}
			data.close();
		}
	}
	else if (smester == "2")
	{
		data.open("Semster2.txt", ios::in);
		if (data.is_open())
		{
			string line;
			while (getline(data, line))
			{
				v.push_back(line);
			}
			data.close();
		}
	}
	else if (smester == "3")
	{
		data.open("Semster3.txt", ios::in);
		if (data.is_open())
		{
			string line;
			while (getline(data, line))
			{
				v.push_back(line);
			}
			data.close();
		}
	}
	else if (smester == "4")
	{
		data.open("Semster4.txt", ios::in);
		if (data.is_open())
		{
			string line;
			while (getline(data, line))
			{
				v.push_back(line);
			}
			data.close();
		}
	}
	
	string filename = "student-" + year + '-' + studentNum + ".txt";
	fstream  mainfile;
	mainfile.open(filename, ios::out | ios::app);
	mainfile << v[number1 - 1] << endl << v[number2 - 1] << endl << v[number3 - 1] << endl << v[number4 - 1] << endl;
	mainfile.close();
}
void Student::display1()
{

	fstream data;
	data.open("Semster1.txt", ios::in);
	if (data.is_open())
	{
		string line;
		vector<string> v;

		while (getline(data, line))
		{
			v.push_back(line);

		}
		vector<string>::iterator it;
		it = v.begin();
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}

}
void Student::search1()
{
	fstream data1;
	string line;
	vector<string> v;
	string  name;
	cout << "enter the name of the course" << endl;
	cin.ignore();
	getline(cin, name);

	data1.open("Semster1.txt", ios::in);
	if (data1.is_open())
	{


		while (getline(data1, line))
		{
			v.push_back(line);
		}

		data1.close();
	}
	if (name == "Introduction to Computer Science")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Physics1")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;

	}
	else if (name == "Calculus1")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Probability and Statistics")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[3];
	}

}
void Student::display2()
{
	fstream data;
	data.open("Semster2.txt", ios::in);
	if (data.is_open())
	{
		string line;
		vector<string> v;

		while (getline(data, line))
		{
			v.push_back(line);

		}
		vector<string>::iterator it;
		it = v.begin();
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void Student::search2()
{
	fstream data1;
	string line;
	vector<string> v;
	string  name;
	cout << "enter the name of the course" << endl;
	cin.ignore();
	getline(cin, name);

	data1.open("Semster2.txt", ios::in);
	if (data1.is_open())
	{


		while (getline(data1, line))
		{
			v.push_back(line);
		}

		data1.close();
	}
	if (name == "Structured Programming")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Electronics")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Calculus 2")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Physics 2")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[3];
	}

}
void Student::display3()
{
	fstream data;
	data.open("Semster3.txt", ios::in);
	if (data.is_open())
	{
		string line;
		vector<string> v;

		while (getline(data, line))
		{
			v.push_back(line);

		}
		vector<string>::iterator it;
		it = v.begin();
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void Student::search3()
{
	fstream data1;
	string line;
	vector<string> v;
	string  name;
	cout << "enter the name of the course" << endl;
	cin.ignore();
	getline(cin, name);

	data1.open("Semster3.txt", ios::in);
	if (data1.is_open())
	{


		while (getline(data1, line))
		{
			v.push_back(line);
		}

		data1.close();
	}
	if (name == "Object Oriented Programming")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Discrete Mathematics ")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Logic Design")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Database Management Systems")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[3];
	}

}
void Student::display4()
{
	fstream data;
	data.open("Semster4.txt", ios::in);
	if (data.is_open())
	{
		string line;
		vector<string> v;

		while (getline(data, line))
		{
			v.push_back(line);

		}
		vector<string>::iterator it;
		it = v.begin();
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void Student::search4()
{
	fstream data1;
	string line;
	vector<string> v;
	string  name;
	cout << "enter the name of the course" << endl;
	cin.ignore();
	getline(cin, name);

	data1.open("Semster4.txt", ios::in);
	if (data1.is_open())
	{


		while (getline(data1, line))
		{
			v.push_back(line);
		}

		data1.close();
	}
	if (name == "Data Structures")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Computer Organization & Architecture")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Linear Algebra")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Artificial Intelligence")
	{
		cout << "course code             course name                  maxmum student         course hours    Prequisites" << endl;
		cout << v[3];
	}
}
