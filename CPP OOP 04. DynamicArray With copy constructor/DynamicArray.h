#pragma once
#include<iostream>

using namespace std;
class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray();
	DynamicArray(int size);
	DynamicArray(const DynamicArray& other);

	int getElement(int index) {
		if (index < size) return arr[index];
		else throw exception("Index out of range");
	}
	void setElement(int index, int value) {
		if (index < size) arr[index] = value;
		else throw exception("Index out of range");
	}
	int getSize() {
		return size;
	}
	void show();
	void randomize();
	~DynamicArray();
};



