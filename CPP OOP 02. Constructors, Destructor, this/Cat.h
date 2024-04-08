#pragma once
#include<iostream>
using namespace std;

class Cat
{
private:
	char* name;
	char breed[50];
	short age;
	short life;

public:
	// this - ukazatel na nineshniy obyekt
	
	// constructor - metod kotoriy vizivayetsya pri sozdanii obyekta 
	// i ispolzuyetsya dlya pervonachalnoy inisializasii poley

	Cat();
	Cat(const char* name, const char* breed);
	Cat(const char* name, const char* breed, short age);

	void setName(const char* name) {
		if (strlen(name) != 0) {
			this->name = new char[strlen(name) + 1] {};
			strcpy_s(this->name, strlen(name) + 1, name);
		}
		else {
			throw "Empty name";
		}
	}
	const char* getName() {
		return name;
	}

	void setBreed(const char* breed) {
		if (strlen(breed) != 0) {
			strcpy_s(this->breed, 50, breed);
		}
		else {
			throw "Empty breed";
		}
	}
	const char* getBreed() {
		return breed;
	}

	void setAge(short age) {
		if (age >= 0) {
			this->age = age;
		}
		else {
			throw "Incorrect data";
		}
	}
	short getAge() {
		return age;
	}

	short getLife() {
		return life;
	}

	/*void initialization(const char* n, const char* breed, short age);*/
	void showInfo();

	~Cat();
};

