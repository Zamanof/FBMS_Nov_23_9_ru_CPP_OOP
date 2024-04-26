#include "DynamicArray.h"
#include<iostream>

using namespace std;

DynamicArray::DynamicArray()
	: DynamicArray(5)
{
	cout << "Default constructor" << endl;
}
DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{ size }
{
	cout << "DynamicArray(int size)" << endl;
}

// Copy Constructor
DynamicArray::DynamicArray(const DynamicArray& other) :
	arr{ new int[other.size] }, size{ other.size }
{
	cout << "Copy constructor - DynamicArray(const DynamicArray& other)" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

DynamicArray::DynamicArray(DynamicArray&& other) 
	: arr{ other.arr }, size{ other.size } 
{
	other.arr = nullptr;
	other.size = 0;
	cout << "DynamicArray move constructor" << endl;
}


// Copy Assign operator
DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
	if (!(this == &other)) {
		if (size != other.size) {
			delete[] arr;
			arr = new int[other.size];
		}
		size = other.size;
		cout << "Copy assign operator" << endl;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
		return *this;
	}
}


// Move Assign operator;
DynamicArray& DynamicArray::operator=(DynamicArray&& other) {
	if (!(this == &other)) {
		delete arr;
		arr = other.arr;
		size = other.size;
		other.arr = nullptr;
		other.size = 0;
	}
	cout << "Move assign operator" << endl;
	return *this;
}


void DynamicArray::show() {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void DynamicArray::randomize() {
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

DynamicArray::~DynamicArray() {
	cout << "Destructor: " << &this->arr[0] << endl;
	delete[] arr;
}

