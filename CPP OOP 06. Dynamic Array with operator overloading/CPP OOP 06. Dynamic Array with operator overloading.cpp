#include<iostream>
#include"DynamicArray.h"

using namespace std;

int main() {
	DynamicArray array(5);
	array.randomize();
	/*cin >> array;*/
	cout << array;
	array[2] = 5;
	cout << array[2] << endl;
	cout << array;
}