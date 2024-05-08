#include<iostream>
#include<format>

using namespace std;

class Human {
public:
	string FirstName;
	string LastName;
	int Age;
	Human(string FirstName, string LastName, int Age)
		:FirstName(FirstName), LastName(LastName), Age(Age)
	{}
	Human() {};
	void showInfo() {
		cout << format("{} {} - {}", FirstName, LastName, Age) << endl;
	}
};

template<class T>
void bubble_sorting(T* arr, int length, bool(*predicate)(T, T));

void showArray(Human* arr, int length);

bool predicateFirstName(Human left, Human right) {
	return left.FirstName > right.FirstName;
}

bool predicateLastName(Human left, Human right) {
	return left.LastName > right.LastName;
}

bool predicateAge(Human left, Human right) {
	return left.Age > right.Age;
}

int main() {
	srand(time(NULL));
	Human humans[3]{
		Human("Nadir", "Zamanov", 44),
		Human("Salam", "Salamzade", 25),
		Human("Ali", "ALiyev", 115)
	};
	bubble_sorting(humans, 3, predicateAge);
	showArray(humans, 3);
	
}

template<class T>
void bubble_sorting(T* arr, int length, bool(*predicate)(T, T)=nullptr) {
	T temp{};
	bool swapped = false;
	int pos = 0;
	do
	{
		swapped = false;

		for (int i = 0; i < length - pos - 1; i++)
		{

			if (predicate(arr[i], arr[i + 1])) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
		pos++;
	} while (swapped);
}





void showArray(Human * arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i].showInfo();
	}
	cout << '\n';
}