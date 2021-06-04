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
		cout << "Username: " << endl;
		cin.ignore();
		getline(cin, username);
		cout << "Password: " << endl;
		getline(cin, password);
		for(int i=1;i<=Files;i++)
		{
			string tst = "student-1-" + count + ".txt";
			int counter = stoi(count);
			ifstream read2(tst);
			getline(read2, us);
			getline(read2, pass);
			if (us == username && pass == password)
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
		cout << "Username: " << endl;
		cin.ignore();
		getline(cin, username);
		cout << "Password: " << endl;
		getline(cin, password);
		for (int i = 1;i <= Files;i++)
		{
			string tst = "student-2-" + count + ".txt";
			int counter = stoi(count);
			ifstream read2(tst);
			getline(read2, us);
			getline(read2, pass);
			if (us == username && pass == password)
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
void Student::edite(int academicYear, string c)
{
	if (academicYear == 1)
	{
		if (c == "1")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-1-1.txt");
			seek2.open("temp.txt");
			cout << "1-Edit username   2-Edit password" << endl; cin >> n;
			if (n == 1)
			{
				cout << "Enter Your old Username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the new Username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-1.txt");
				rename("temp.txt", "student-1-1.txt");
			}
			else if (n == 2)
			{
				cout << "Enter Your old Password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new Passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-1.txt");
				rename("temp.txt", "student-1-1.txt");
			}

		}
		else if (c == "2")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-1-2.txt");
			seek2.open("temp.txt");
			cout << "1-Edit Username   2-Edit Password" << endl; 
			cin >> n;
			if (n == 1)
			{
				cout << "Enter your Old Username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the New Username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-2.txt");
				rename("temp.txt", "student-1-2.txt");
			}
			else if (n == 2)
			{
				cout << "Enter your old password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-2.txt");
				rename("temp.txt", "student-1-2.txt");
			}

		}
		else if (c == "3")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-1-3.txt");
			seek2.open("temp.txt");
			cout << "1-Edit username   2-Edit password" << endl; cin >> n;
			if (n == 1)
			{
				cout << "Enter your old username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the new username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-3.txt");
				rename("temp.txt", "student-1-3.txt");
			}
			else if (n == 2)
			{
				cout << "Enter your old password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-1-3.txt");
				rename("temp.txt", "student-1-3.txt");
			}

		}
	}

	if (academicYear == 2)
	{
		if (c == "1")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-2-1.txt");
			seek2.open("temp.txt");
			cout << "1-Edit username   2-Edit password" << endl; cin >> n;
			if (n == 1)
			{
				cout << "enter your old username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the new username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-1.txt");
				rename("temp.txt", "student-2-1.txt");
			}
			else if (n == 2)
			{
				cout << "Enter your old password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-1.txt");
				rename("temp.txt", "student-2-1.txt");
			}

		}
		else if (c == "2")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-2-2.txt");
			seek2.open("temp.txt");
			cout << "1-Edit username   2-Edit password" << endl; cin >> n;
			if (n == 1)
			{
				cout << "Enter your old username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the new username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-2.txt");
				rename("temp.txt", "student-2-2.txt");
			}
			else if (n == 2)
			{
				cout << "Enter your old password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-2.txt");
				rename("temp.txt", "student-2-2.txt");
			}

		}
		else if (c == "3")
		{
			string newUserName, user, pass, newPassword;
			int n;
			string temp;
			ifstream seek1;
			ofstream seek2;
			seek1.open("student-2-3.txt");
			seek2.open("temp.txt");
			cout << "1-Edit username   2-Edit password" << endl; cin >> n;
			if (n == 1)
			{
				cout << "Enter your old username\n";
				cin.ignore();
				getline(cin, user);
				cout << "Enter the new username\n";
				getline(cin, newUserName);

				while (getline(seek1, temp))
				{
					if (temp.find(user) != string::npos)
					{
						temp.replace(temp.find(user), user.length(), newUserName);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-3.txt");
				rename("temp.txt", "student-2-3.txt");
			}
			else if (n == 2)
			{
				cout << "Enter your old password\n";
				cin.ignore();
				getline(cin, pass);
				cout << "Enter the new passwoed\n";
				getline(cin, newPassword);

				while (getline(seek1, temp))
				{
					if (temp.find(pass) != string::npos)
					{
						temp.replace(temp.find(pass), pass.length(), newPassword);
					}
					seek2 << temp << endl;

				}
				seek1.close();
				seek2.close();
				remove("student-2-3.txt");
				rename("temp.txt", "student-2-3.txt");
			}

		}
	}

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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
	cout << "Enter Name of the Course" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Physics1")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;

	}
	else if (name == "Calculus1")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Probability and Statistics")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
	cout << "Enter Name of the Course" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Electronics")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Calculus 2")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Physics 2")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
	cout << "Enter Name of the Course" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Discrete Mathematics ")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Logic Design")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Database Management Systems")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
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
	cout << "Enter Name of the Course" << endl;
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
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[0] << endl;
	}
	else if (name == "Computer Organization & Architecture")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[1] << endl;
	}
	else if (name == "Linear Algebra")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[2] << endl;
	}
	else if (name == "Artificial Intelligence")
	{
		cout << "Course Code             Course Name                  Maximum Students         Course Hours    Prerquistes" << endl;
		cout << v[3];
	}
}
