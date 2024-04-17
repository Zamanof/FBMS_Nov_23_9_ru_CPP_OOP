#include<iostream>

using namespace std;

short currentYear = 2024;

class Person {
public:
	char* name;
	char* surname;
	short bornYear;
	short age;
	Person() :
		Person(nullptr, nullptr, 0)
	{
		cout << "Person created with default constructor" << endl;
	}
	Person(const char* name, const char* surname) :
		Person(name, surname, 0)
	{
		cout << "Person created with parametrized constructor Person(const char* name, const char* surname)" << endl;
	}
	Person(const char* name) :
		Person(name, nullptr, 0)
	{
		cout << "Person created with parametrized constructor Person(const char* name, const char* surname)" << endl;
	}


	Person(const char* name, const short bornYear) :
		Person(name, nullptr, bornYear)
	{
		cout << "Person created with parametrized constructor Person(const char* name, const char* surname)" << endl;
	}

	Person(const char* name, const char* surname, const short bornYear) :
		name{ name ? new char[strlen(name) + 1] : nullptr },
		surname{ new char[strlen(surname) + 1] },
		bornYear{ bornYear },
		age{ bornYear == 0? bornYear: currentYear - bornYear}
	{
		if (!name) {
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		if (!surname) {
			strcpy_s(this->surname, strlen(surname) + 1, surname);
		}
		cout << "Person created with parametrized constructor Person(const char* name, const char* surname, const short bornYear)" << endl;
	}

	void showInfo() {
		cout << "Name:\t\t" << name << endl;
		cout << "Surname:\t" << surname << endl;
		cout << "Age:\t\t" << age << endl;
	}
};





int main() {
	//int number1 = 5;	//	copy initialize 
	//int number2{ 5 };	//	uniform initialize
	//int number3(5);		//	direct	initialize


	Person person;
	Person person("Salam", "Salamzade");
	Person person("Salam", "Salamzade", 1980);
	Person person("Salam", 1980);


}