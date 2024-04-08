#include "Cat.h"

//void Cat::initialization(const char* n, const char* b, short a) {
//	setName(n);
//	setBreed(b);
//	setAge(a);
//}

void Cat::showInfo() {
	cout << "Name:\t" << name << endl;
	cout << "Breed:\t" << breed << endl;
	cout << "Age:\t" << age << endl;
	cout << "Life:\t" << life << endl;
	cout << '\n';
}

Cat::Cat() {
	cout << "Constructor without parameters called" << endl;
	setName("Empty");
	setBreed("Empty");
	setAge(0);
	life = 9;
}

Cat::Cat(const char* name, const char* breed, short age) {
	cout << "Constructor with parameters (Cat(const char* n, const char* b, short a)) called" << endl;
	setName(name);
	setBreed(breed);
	setAge(age);
	life = 9;
}

Cat::Cat(const char* name, const char* breed) {
	cout << "Constructor with parameters (Cat(const char* n, const char* b)) called" << endl;
	setName(name);
	setBreed(breed);
	setAge(0);
	life = 9;
}

Cat::~Cat()
{
	cout << "Destructor " << this->name << " is called" << endl;
	delete[] name;
}