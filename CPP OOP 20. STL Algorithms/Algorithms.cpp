#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

class Cat 
{
public:
	string name;
	int age;
	int life;
	Cat(string name, int age, int life)
		:name(name), age(age), life(life)
	{}
	void show() const {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Life: " << life << endl << endl;
	}
	bool operator==(const Cat& other) {
		return(name == other.name && age == other.age && other.life);
	}
	bool operator!=(const Cat& other) {
		return !(operator==(other));
	}
	bool operator> (const Cat & other) {
		return age > other.age;
	}
	bool operator>= (const Cat& other) {
		return age >= other.age;
	}
	bool operator< (const Cat& other) {
		return age < other.age;
	}
	bool operator<= (const Cat& other) {
		return age <= other.age;
	}
};

template<class T>
void show(vector<T>& vect);

// Predicates - predikati
bool isPrime(int number);
bool isPositive(int number);
bool isNegative(int number);
bool isEven(int number);
bool isOdd(int number);

bool lifePred(const Cat& left, const Cat& right) {
	return left.life < right.life;
}
bool agePred(const Cat& left, const Cat& right) {
	return left.age < right.age;
}

void make_negative(int& number) {
	number = number > 0 ? -number : number;
}
void pow2(int& number) {
	number *= number;
}

void cat_show(const Cat& cat) {
	cat.show();
}

int main() {
	// STL algorithms

	vector<int> numbers{ 13, 15, 65, -61, 39, -1, 2, 21, 87, 91, 111, 65 };
	auto start = numbers.begin();
	auto end = numbers.end();
	show(numbers);

#pragma region find
	// find()
	/*int numb{};
	cout << "Enter any number for search: ";
	cin >> numb;

	auto result = find(start, end, numb);
	if (result != end)
	{
		cout << *result << " in this vector" << endl;
	}
	else {
		cout << numb << " is not found" << endl;
	}*/

#pragma endregion

#pragma region find_if
	/*auto result = find_if(start, end, isPrime);
	if (result != end) {
		cout << "One or more prime number in this vector" << endl;
	}
	else {
		cout << "Not prime numbers in this vector" << endl;
	}*/
#pragma endregion

#pragma region copy
	/*vector<int> new_numbers;
	copy(start, end, back_inserter(new_numbers));
	show(new_numbers);*/
#pragma endregion

#pragma region copy_if
	/*vector<int> new_numbers;
	copy_if(start, end, back_inserter(new_numbers), isPrime);
	show(new_numbers);*/
#pragma endregion

#pragma region max_element, min_element
	/*cout << *(max_element(start, end)) << endl;
	cout << *(min_element(start, end)) << endl;*/
#pragma endregion

	vector<Cat> cats{
		Cat("Neznayu", 6, 1),
		Cat("Neznayu2", 15, 100),
		Cat("Garfield", 25, 5),
		Cat("Barsik", 1, 9),
		Cat("Winson", 2, 7),
		Cat("Danya", 3, 7),
		Cat("Matroskin", 5, 5),
		Cat("Catus Julius Catesar", 150, 15),
		Cat("Puss in boots", 15, 1)
	};
	/*auto max_cat = max_element(cats.begin(), cats.end());
	max_cat->show();
	max_cat = max_element(cats.begin(), cats.end(), lifePred);
	max_cat->show();*/
	/*sort(numbers.begin(), numbers.end());
	show(numbers);*/

	/*sort(cats.begin(), cats.end());

	for (Cat cat : cats)
	{
		cat.show();
	}*/
	/*sort(cats.begin(), cats.end(), lifePred);
	for (Cat cat : cats)
	{
		cat.show();
	}*/

#pragma region for_each
	for_each(start, end, make_negative);
	show(numbers);
	for_each(start, end, pow2);
	show(numbers);

	/*for_each(cats.begin(), cats.end(), cat_show);*/
#pragma endregion

}

template<class T>
void show(vector<T>& vect) {
	for (T item : vect)
	{
		cout << item << ' ';
	}
	cout << "\n\n";
}

bool isPrime(int number) {
	if (isNegative(number)) return false;

	if (number == 1 || number == 2) {
		return true;
	}
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}
bool isPositive(int number) {
	return number > 0;
}
bool isNegative(int number) {
	return number < 0;
}
bool isEven(int number) {
	return number % 2 == 0;
}
bool isOdd(int number) {
	return number % 2 != 0;
}