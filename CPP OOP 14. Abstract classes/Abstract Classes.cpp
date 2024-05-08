#include<iostream>
#include<vector>

using namespace std;

// abstract class
class Animal 
{
public:
	string name;
	// Pure virtual method - chisto virtualniy method
	virtual void Sound() = 0;

};

// Esli class nasleduyetsya ot abstractnoqo class-a
// no ne realizuyet chisto virtualniy metod
// etot class avtomaticheski stanovitsya abstract class
class Mammal : public Animal {};

class Cat : public Mammal 
{
public:
	float price;
	void Sound() override {
		cout << name << " - Meow meow!" << endl;
	}
	virtual void LifeIdea() = 0;
};

class Bird : public Animal {};

class CheshireCat : public Cat {
public:
	void LifeIdea() override {
		cout << "Zaputat proxojix umnimi slovami" << endl;
	}
};

class Sphynx : public Cat {
public:
	void LifeIdea() {
		cout << "Ya lisiy kusok koji i yestestvenno i blox netu" << endl;
	}
};

void infoAnimal(Animal& animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}

void infoCat(Cat& cat) {
	cout << "This is " << cat.name << endl;
	cat.Sound();
	cat.LifeIdea();
}

int main() {
	CheshireCat cheshir;
	cheshir.name = "Bummble bee";
	cheshir.price = 0.25;
	/*infoAnimal(cheshir);
	infoCat(cheshir);*/

	vector<Animal*> animals;
	animals.push_back(new CheshireCat());
	animals[0]->name = "Piton";
	animals[0]->Sound();

	vector<Mammal*> mammals;
	mammals.push_back(new Sphynx());
	mammals.push_back(new CheshireCat());
	
	vector<Cat*> cats;
	cats.push_back(new Sphynx());
	cats.push_back(new CheshireCat());
}