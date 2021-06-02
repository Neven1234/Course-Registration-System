#include "Admin.h"
#include<fstream>
#include<string>
using namespace std;


bool Admin::long_in()
{
	

	string name;
	string password;
	string us;
	string pass;
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
	cout << "which year?" << endl;
	string year; cin >> year;
	cout << "student number" << endl;
	string count;
	cin >> count;
	cout << "name :";
	string name;
	cin.ignore();
	getline(cin, name);
	cout << "password : 1234" << endl;
	string password = "1234";
	cout << "ID :"; int id; cin >> id;
	string filename = "student" + year + '-' + count+".txt";
	fstream year_sem;
	year_sem.open(filename, ios::out | ios::app);
	year_sem << name << endl << password << endl << id  << endl;
	year_sem.close();

}
