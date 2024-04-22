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
		name{ nullptr },
		surname{ nullptr },
		bornYear{ 0 },
		age{ 0 } 
	{
		cout << "Person created with default constructor" << endl;
	}
	Person(const char* name, const char* surname, const short bornYear):
		name{new char[strlen(name) + 1]},
		surname{new char[strlen(surname) + 1]},
		bornYear{bornYear},
		age{currentYear - bornYear}
	{		
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->surname, strlen(surname) + 1, surname);
		cout << "Person created with parametrized constructor" << endl;
	}

	void showInfo() {
		cout << "Name:\t\t" << name << endl;
		cout << "Surname:\t" << surname << endl;
		cout << "Age:\t\t" << age << endl;
	}
};

class BankAccount
{
public:
	Person person;
	float balans;
	const short percent;

	BankAccount(const char* name, const char* surname, const short bornYear, float balans, short percent) :
		person(name, surname, bornYear),
		balans{ balans },
		percent{ percent }
	{
		
		/*person.name = new char[strlen(name) + 1];
		person.surname = new char[strlen(surname) + 1];
		strcpy_s(person.name, strlen(name) + 1, name);
		strcpy_s(person.surname, strlen(surname) + 1, surname);
		person.bornYear = bornYear;
		person.age = currentYear - bornYear;*/
		cout << "Bank account reated with parametrized constructor"<<endl;
	}
	void showInfo() {
		person.showInfo();
		cout << "Balans:\t\t" << balans << endl;
		cout << "Percent:\t" << percent << endl;
		cout << endl;
	}

};



int main() {
	//int number1 = 5;	//	copy initialize 
	//int number2{ 5 };	//	uniform initialize
	//int number3(5);		//	direct	initialize

	/*BankAccount myAccount(250);
	BankAccount myAccount2;
	myAccount.showInfo();
	myAccount2.showInfo();*/
	/*Person person1("Nadir", "Zamanov", 1980);
	person1.showInfo();*/

	BankAccount nadirAccount("Nadir", "Zamanov", 1980, 2500, 12);
	BankAccount cheyToAccount("Chey", "To", 2000, 12500, 17);
	nadirAccount.showInfo();
	cheyToAccount.showInfo();
	

}