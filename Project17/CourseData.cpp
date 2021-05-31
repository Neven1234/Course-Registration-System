#include "CourseData.h"
#include<vector>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void CourseData::display1()
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
		cout << "cours code      cours name                  maxmum student         cours hours"  << endl;
		while (it != v.end())
		{
			
			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void CourseData::search1()
{
	fstream data1;
	 string line;
	vector<string> v;
	string  name;
	cout << "enter the name of the course"<<endl;
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Physics1")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Calculus1")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Probability and Statistics")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[3];
	}

}
void CourseData::display2()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void CourseData::search2()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Electronics")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Calculus 2")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Physics 2")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[3];
	}

}
void CourseData::display3()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void CourseData::search3()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Discrete Mathematics ")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Logic Design")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Database Management Systems")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[3];
	}

}
void CourseData::display4()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		while (it != v.end())
		{

			cout << *it << endl;
			it++;
		}
		data.close();

	}
}
void CourseData::search4()
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
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Computer Organization & Architecture")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Linear Algebra")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Artificial Intelligence")
	{
		cout << "cours code      cours name                  maxmum student         cours hours" << endl;
		cout << v[3];
	}

}

