#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"CourseData.h"
using namespace std;
int main()
{
	CourseData c;
	int n,s;
	cout << "semster?" << endl;
	cin >> s;
	if (s == 1)
	{
		cout << "1-all courses   2-search" << endl;
		cin >> n;
		if (n == 1)
		{
			c.display1();

		}
		else if (n == 2)
		{
			c.search1();
		}
		else
			cout << "Wrong number" << endl;
	}
	else if (s == 2)
	{
		cout << "1-all courses   2-search" << endl;
		cin >> n;
		if (n == 1)
		{
			c.display2();

		}
		else if (n == 2)
		{
			c.search2();
		}
		else
			cout << "wrong number" << endl;
	}
	if (s == 3)
	{
		cout << "1-all courses   2-search" << endl;
		cin >> n;
		if (n == 1)
		{
			c.display3();

		}
		else if (n == 2)
		{
			c.search3();
		}
		else
			cout << "wrong number" << endl;
	}
	if (s == 4)
	{
		cout << "1-all courses   2-search" << endl;
		cin >> n;
		if (n == 1)
		{
			c.display4();

		}
		else if (n == 2)
		{
			c.search4();
		}
		else
			cout << "wrong number" << endl;
	}
	
}