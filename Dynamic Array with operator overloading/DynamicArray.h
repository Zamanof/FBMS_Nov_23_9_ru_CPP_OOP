#pragma once
#include<iostream>

using namespace std;
class DynamicArray
{
private:
	int* arr;
	int size;
	friend ostream& operator<<(ostream&, const DynamicArray&);
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray();
	explicit DynamicArray(int size);
	DynamicArray(const DynamicArray& other);

	const DynamicArray& operator=(const DynamicArray&);

	bool operator==(const DynamicArray&) const;
	bool operator!=(const DynamicArray&) const;

	int& operator[](int);
	int& operator[](int) const;

	
	int getSize() {
		return size;
	}
	void show();
	void randomize();
	~DynamicArray();
};




