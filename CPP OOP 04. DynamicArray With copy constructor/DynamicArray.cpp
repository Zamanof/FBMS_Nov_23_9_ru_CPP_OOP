#include "DynamicArray.h"

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
DynamicArray::DynamicArray(const DynamicArray& other) :
	arr{new int[other.size]}, size{other.size}
{
	cout << "Copy constructor - DynamicArray(const DynamicArray& other)" << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
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


