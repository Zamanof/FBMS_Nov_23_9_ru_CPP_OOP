#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;
template<class T>
class DynamicArray {
private:
	T* arr;
	int size;
public:
	friend ostream& operator<<<T>(ostream&, const DynamicArray<T>&);
	friend istream& operator>><T>(istream&, DynamicArray<T>&);
	DynamicArray()
		: DynamicArray(10)
	{}
	explicit DynamicArray(int size)
		:arr{ new T[size] {} }, size{ size }
	{}
	DynamicArray(const DynamicArray& other) :
		arr{ new T[other.size] }, size{ other.size }
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = other.arr[i];
		}
	}
	// assign operator overloading
	const DynamicArray& operator=(const DynamicArray& dynamicArray) {
		if (&dynamicArray != this) {
			if (size != dynamicArray.size) {
				delete[] arr;
				size = dynamicArray.size;
				arr = new T[size];
			}
			for (size_t i = 0; i < size; i++)
			{
				arr[i] = dynamicArray.arr[i];
			}
		}
		return *this;
	}

	bool operator==(const DynamicArray& dynamicArray) const {
		if (size != dynamicArray.size) return false;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] != dynamicArray.arr[i]) return false;
		}
		return true;
	}

	bool operator!=(const DynamicArray& dynamicArray) const {
		return !(*this == dynamicArray);
	}

	// index operator
	T& operator[](int index) const {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	int& operator[](int index) {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	void randomize() {
		srand(time(NULL));
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = (T)(rand() % 90 + 10);
		}
	}

	void sorting() {
		sort(&arr[0], &arr[size - 1]);
	}

	~DynamicArray() {
		delete[] arr;
	}

};
template<class T>
ostream& operator<<(ostream& output, const DynamicArray<T>& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		output << setw(3) << left << dynamicArray[i];
	}
	output << endl;
	return output;
}
template<class T>
istream& operator>>(istream& input, DynamicArray<T>& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		input >> dynamicArray[i];
	}
	return input;
}

template<>
class DynamicArray<char**> {
private:
	char** arr;
	int size;
	friend ostream& operator<<(ostream&, const DynamicArray&);
	friend istream& operator>>(istream&, DynamicArray&);
public:
	DynamicArray()
		: DynamicArray(10)
	{}
	explicit DynamicArray(int size)
		:arr{ new char* [size] {} }, size{ size }
	{}
	DynamicArray(const DynamicArray& other) :
		arr{ new char* [other.size] }, size{ other.size }
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = new char [strlen(other.arr[i] + 1)] {};
			strcpy_s(arr[i], strlen(other.arr[i] + 1), other.arr[i]);
		}
	}
	// assign operator overloading
	const DynamicArray& operator=(const DynamicArray& dynamicArray) {
		if (&dynamicArray != this) {
			if (size != dynamicArray.size) {
				delete[] arr;
				size = dynamicArray.size;
				arr = new char* [size];
			}
			for (size_t i = 0; i < size; i++)
			{
				arr[i] = new char [strlen(dynamicArray.arr[i] + 1)] {};
				strcpy_s(arr[i], strlen(dynamicArray.arr[i] + 1), dynamicArray.arr[i]);
			}
		}
		return *this;
	}

	bool operator==(const DynamicArray& dynamicArray) const {
		if (size != dynamicArray.size) return false;
		for (size_t i = 0; i < size; i++)
		{
			if (strcmp(arr[i], dynamicArray.arr[i]) != 0) return false;
		}
		return true;
	}

	bool operator!=(const DynamicArray& dynamicArray) const {
		return !(*this == dynamicArray);
	}

	// index operator
	char*& operator[](int index) const {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	char*& operator[](int index) {
		if (index < 0 || index >= size) {
			throw exception("Index out of range");
		}
		return arr[index];
	}

	void randomize() {
		srand(time(NULL));
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = new char[6] {};
			for (size_t j = 0; j < 5; j++)
			{
				arr[i][j] = rand() % 26 + 65;

			}
		}
	}

	void sorting() {
		sort(&arr[0], &arr[size], [](char* a, char* b) {return strcmp(a, b) == -1 ? true : false; });
	}
};

ostream& operator<<(ostream& output, const DynamicArray<char**>& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		output << setw(3) << left << dynamicArray[i] << " ";
	}
	output << endl;
	return output;
}

istream& operator>>(istream& input, DynamicArray<char**>& dynamicArray) {
	for (size_t i = 0; i < dynamicArray.size; i++)
	{
		input >> dynamicArray[i];
	}
	return input;
}

int main() {
	DynamicArray<int> array1;
	array1.randomize();
	cout << array1 << endl;
	array1.sorting();
	cout << array1 << endl;

	DynamicArray<char> array2;
	array2.randomize();
	cout << array2 << endl;

	DynamicArray<char**> array3;
	array3.randomize();
	cout << array3 << endl;
	array3[3] = new char [6] {"Salam"};
	array3.sorting();
	cout << array3 << endl;

}