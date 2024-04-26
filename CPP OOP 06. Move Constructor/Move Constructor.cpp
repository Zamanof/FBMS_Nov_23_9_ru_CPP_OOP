#include<iostream>
#include"DynamicArray.h"

using namespace std;

DynamicArray foo(DynamicArray array) {
	// some operations
	return array;
}

int main() {

	DynamicArray array1(1);
	array1.randomize();
	/*array1.show();*/
	DynamicArray array2 = array1;
	array2.show();
	/*array1 = foo(array1);*/

}