#include "DynamicArray.h"
#include<iomanip>

DynamicArray::DynamicArray()
	: DynamicArray(10)
{}
DynamicArray::DynamicArray(int size)
	:arr{ new int[size] {} }, size{ size }
{}
DynamicArray::DynamicArray(const DynamicArray& other) :
	arr{ new int[other.size] }, size{ other.size }
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

// assign operator overloading
const DynamicArray& DynamicArray::operator=(const DynamicArray& dynamicArray) {
	if (&dynamicArray != this) {
		if (size != dynamicArray.size) {
			delete[] arr;
			size = dynamicArray.size;
			arr = new int[size];
		}
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = dynamicArray.arr[i];
		}
	}
	return *this;
}

bool DynamicArray::operator==(const DynamicArray& dynamicArray) const {
	if (size != dynamicArray.size) return false;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != dynamicArray.arr[i]) return false;
	}
	return true;
}

bool DynamicArray::operator!=(const DynamicArray& dynamicArray) const {
	return !(*this == dynamicArray);
}

// index operator
int& DynamicArray::operator[](int index) const{
	if (index < 0 || index >= size) {
		throw exception("Index out of range");
	}
	return arr[index];
}

int& DynamicArray::operator[](int index) {
	if (index < 0 || index >= size) {
		throw exception("Index out of range");
	}
	return arr[index];
}

ostream& operator<<(ostream& output, const DynamicArray& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		output << setw(3) << left << dynamicArray[i];
	}
	output << endl;
	return output;
}
istream& operator>>(istream& input, DynamicArray& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		input >> dynamicArray[i];
	}
	return input;
}

void DynamicArray::randomize() {
	srand(time(NULL));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

DynamicArray::~DynamicArray() {
	delete[] arr;
}
