#include<iostream>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int day, int month, int year)
		: day{ day }, month{ month }, year{ year }
	{
		cout << "Constructor Date(int day, int month, int year)" << endl;
	}
	// explicit constructor
	explicit Date(int year) : Date(1, 1, year) {
		cout << "Constructor Date(int year)" << endl;
	}
	friend void show(Date date);
};
void show(Date date) {
	cout << "Day: " << date.day << endl;
	cout << "Month: " << date.month<< endl;
	cout << "Year: " << date.year << endl;
}

class Array {
private:
	int size;
	int* array;
public:
	explicit Array(int size = 10) : size{ size }, array{ new int[size] } 
	{
		cout << "Constructor Array(int size = 10)" << endl;
	}

	~Array()
	{
		delete[] array;
	}

	int getSize() const {
		return size;
	}
	int getValue(const int index) const {		
		return array[index];
	}
	void setValue(const int index, const int value) {
		array[index] = value;
	}
	void showValue(const int index) const {
		cout << array[index] << ' ';
	}
};

void show(const Array& array) {
	for (size_t i = 0; i < array.getSize(); i++)
	{
		array.showValue(i);
	}
	cout << '\n';
}

int main() {
	srand(time(NULL));
	/*Date date{ 22, 4, 2024 };
	show(date);*/
	/*Date date1(2024);
	show(date1);*/

	/*Date date2(2020);
	show(date2);*/
	int length = 5;
	Array array(length);
	for (size_t i = 0; i < length; i++)
	{
		array.setValue(i, rand() % 90 + 10);
	}
	show(array);
}