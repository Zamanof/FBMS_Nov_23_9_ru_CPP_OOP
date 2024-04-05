#pragma once
#include<iostream>

using namespace std;

class Teacher
{
private:
	short Age;
	double Salary;
	void setSalary(double salary);

public:
	char FirstName[50];
	char LastName[50];
	char Position[50];
	void initialization(const char* name, const char* surname, const char* position, int age, double salary);
	void show();
	
	void setAge(int age);	// Setter - accessor
	int getAge();			// Getter - mutator, inspector

	double getSalary();
};

