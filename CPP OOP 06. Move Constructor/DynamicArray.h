#pragma once
class DynamicArray
{
private:
	int* arr;
	int size;
public:
	DynamicArray();
	DynamicArray(int size);
	// Copy Constructor
	DynamicArray(const DynamicArray& other);
	// Move Constructor
	DynamicArray(DynamicArray&& other);

	// Copy Assign operator
	DynamicArray& operator=(const DynamicArray& other);

	// Move Assign operator
	DynamicArray& operator=(DynamicArray&& other);
	void show();
	void randomize();

	~DynamicArray();
};


