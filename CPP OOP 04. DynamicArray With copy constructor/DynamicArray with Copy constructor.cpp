#include<iostream>
#include "DynamicArray.h"

using namespace std;

void Foo(DynamicArray arr) {
	cout << arr.getElement(0) << endl;
}

int main() {
	 

	DynamicArray array1;
	// Default constructor
	// DynamicArray(int size)
	// Destructor
	array1.randomize();
	array1.show();

	/*DynamicArray array2(25);*/
	// cout << "DynamicArray(int size)" << endl;
	// Destructor 
	DynamicArray array3(array1);
	array3.show();
	cout << array3.getElement(15) << endl;

	/*
	array3.setElement(0, 398);
	array1.show();
	array3.show();*/

	/*array2.show();*/

	Foo(array1);

	DynamicArray array4 = array1;
}