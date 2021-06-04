#pragma once
#include <string>
#include<iostream>
class Admin
{
public:
	string username, password;
	bool isTrue;
public:
	bool long_in();
	void addStudent();
	void EditCourses();
	void SearchCourses();
	void AddCourse();
};

