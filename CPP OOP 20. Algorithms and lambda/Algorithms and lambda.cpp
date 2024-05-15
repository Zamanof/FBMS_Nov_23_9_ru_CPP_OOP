#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
template <class T>
void show(vector<T> vec) {
	for (T item: vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}

bool isEven(int number) {
	return number % 2 == 0;
}


int main() {
	vector<int> numbers{ 13, 150, 65, -61, 40, -1, 2, 21, 87, 91, 111, 65 };
	vector<int> evenNumbers;
	/*copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), isEven);
	show(evenNumbers);*/

	// lambda expressions - anonymous functions
	// [](){}
	/*copy_if(numbers.begin(), 
			numbers.end(), 
			back_inserter(evenNumbers),
		[](int num) {return num % 2 == 0; }
		);
	show(evenNumbers);*/

	/*for_each(numbers.begin(), numbers.end(), [](int& n) {n *= n; });
	show(numbers);*/

	string hello = "Goodbye Lenin";
	auto upr_text = (char*)hello.c_str();
	_strupr_s(upr_text, hello.size() + 1);
	hello = string(upr_text);
	cout << hello << endl;

}