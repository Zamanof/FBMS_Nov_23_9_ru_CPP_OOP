#include<iostream>

using namespace std;

void foo(int&& n) {

}

int main() {
	int number = 25; 
	// to chto v permennoy naxoditsya v levoy 
	// chasti operatora prisvayivaniya eto l-value
	// l-value - funksiya, peremennaya, obyekt i t.d. kotoraya imeet svoy adress
	int number2 = number + 50;
	int&& rValueRef = number + 50;
	foo(number + 32);

}