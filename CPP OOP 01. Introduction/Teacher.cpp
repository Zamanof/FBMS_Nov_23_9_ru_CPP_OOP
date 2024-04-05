#include "Teacher.h"

void Teacher::show() {
	cout << "First name:\t" << FirstName << endl;
	cout << "Last name:\t" << LastName << endl;
	cout << "Age:\t\t" << Age << endl;
	cout << "Position:\t" << Position << endl;
	cout << '\n';
}

void Teacher::initialization(const char* name, const char* surname, const char* position, int age, double salary) {
	strcpy_s(FirstName, 50, name);
	strcpy_s(LastName, 50, surname);
	strcpy_s(Position, 50, position);
	setAge(age);
	setSalary(salary);
}

void  Teacher::setAge(int age) {
	if (age >= 0) {
		Age = age;
	}
	else {
		throw exception("Incorrect data");
	}
}
int Teacher::getAge() {
	return Age;
}

void Teacher::setSalary(double salary) {
	if (salary >= 0) {
		Salary = salary;
	}
	else {
		throw exception("Incorrect data");
	}
}
double Teacher::getSalary() {
	return Salary;
}
