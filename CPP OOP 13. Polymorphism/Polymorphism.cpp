#include<iostream>
#include"Static_polymorphism.h"

using namespace std;

class Animal
{
public:
	string name;
	virtual void Sound() {
		cout << name << " - some sound" << endl;
	}
};

class Dog : public Animal
{
public:
	int age;
	// method override - peropredelinye metoda
	void Sound() override{
		cout << name << " - wang wang" << endl;
	}
};

class Cat : public Animal
{
public:
	float price;
	void Sound() override {
		cout << name << " - xochu kotletku" << endl;
	}
};

class CheshireCat : public Cat
{
public:
	string smartSentence;
	void Sound() override {
		cout << name << " - Esli neznayesh kuda xochesh popast. Toqda vseravno kuda idti." << endl;
	}
};

void infoCat(Cat cat) {
	cout << "This is" << cat.name << endl;
	cat.Sound();
}





int main() {

#pragma region Static polymorphism
	/*srand(time(NULL));*/
	/*
		Static polymorphism:
			- Overload function
			- Template function
			- Temlate class
			- Operator overloading

	*/
	/*const int length = 5;
	float arr[length]{};
	fillArray(arr, length);
	showArray(arr, length);*/
#pragma endregion

#pragma region Dynamic polymorphism
	//Animal animal;
	//animal.name = "666";
	///*animal.Sound();*/
	Dog dog;
	dog.name = "Cerber";
	/*dog.Sound();*/

	Cat cat;
	cat.name = "Gav";
	///*cat.Sound();*/

	///*infoCat(cat);*/

	//CheshireCat cheshir;
	//cheshir.name = "Cheshire cat";
	///*cheshir.Sound();*/
	//infoCat(cheshir);

	/*Animal cat = Cat();
	cat.name = "Murka";
	cat.Sound();*/
	
	// ukazatel na bazoviy klass
	 /*Animal* cat1 = &cat;
	 cat1->Sound();*/
	
	 // ssilka na bazobiy klass
	 /*Animal& cat2 = cat;
	 cat2.Sound();*/


	/*Animal* cheshireCat = new Cat();
	cheshireCat->name = "Alisa";
	cheshireCat->Sound();*/

	Animal** animals = new Animal*[5]{
		new Dog(),
		new Cat(),
		new Dog(),
		new CheshireCat(),
		new Cat()
	};

	for (size_t i = 0; i < 5; i++)
	{
		animals[i]->Sound();
	}

#pragma endregion


}