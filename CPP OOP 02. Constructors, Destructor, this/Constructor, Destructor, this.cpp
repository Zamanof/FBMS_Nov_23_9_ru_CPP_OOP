#include<iostream>
#include"Cat.h"

using namespace std;

void foo(Cat cat) {
	/*Cat cat1("Salam", "Malas", 26);*/	
}

int main() {
	// constructor, destructor, this
	// Iz pod kapota v lyubom klasse sushestvuyet 4 metoda
	// 1. default constructor
	// 2. copy constructor
	// 3. move constructor
	// 4. destructor

	Cat cat();
	/*cat.initialization("Murka", "Sfinks", 2);*/
	/*cat.showInfo();*/
	Cat cat1("Mastan", "Siam", 3);
	/*cat1.showInfo();*/
	/*foo(cat1);*/
	cout << cat1.getName() << endl;
	Cat cat2("Bobik", "Pitbulterier");

}