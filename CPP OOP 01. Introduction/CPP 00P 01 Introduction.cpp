#include<iostream>
#include"Teacher.h"

using namespace std;

struct Human {
	char name[50];
	char surname[50];
	int age;
};



void showInfo(Human human) {
	cout << "First name:\t" << human.name << endl;
	cout << "Last name:\t" << human.surname << endl;
	cout << "Age:\t\t" << human.age << endl;
	cout << '\n';
}

class Student {
public:
	// class fields - member field
	char name[50];
	char surname[50];
	int age;

	// class methods - member functions
	void showInfo() {
		cout << "First name:\t" << name << endl;
		cout << "Last name:\t" << surname << endl;
		cout << "Age:\t\t" << age << endl;
		cout << '\n';
	}
};


int main() {
	// OOP Principles
	// Abstraction	- Abstraksiya
	// Encapsulaton	- Inkapsulyasiya
	// Inhertion	- Nasledovanie
	// Polymorphism	- Polimorfizm

	/*Human human{ "Nadir", "Zamanov", 42 };
	showInfo(human);
	Student student{ "Nadir", "Zamavov", 42 };
	Student student2{ "Elvina", "Eteridze", 25 };
	student.showInfo();
	student2.showInfo();*/

	Teacher teacher;
	teacher.initialization("Muhammed", "Kananidze", "Kamikadze", 113, 10.5);
	cout << teacher.getSalary() << endl;
	teacher.setAge(36);
	teacher.show();
	
	/*teacher.show();*/

	// access modifier - modifikatori dostupa
	// public
	// private
	// protected

	// Ayaz krutoy
	Student AyazStudent{ "Ayaz", "Krutoy", 16 };
}