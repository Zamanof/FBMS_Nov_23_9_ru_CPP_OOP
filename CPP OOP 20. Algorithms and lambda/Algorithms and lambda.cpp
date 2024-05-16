#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
template <class T>
void show(vector<T> vec) {
	for (T item : vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}

bool isEven(int number) {
	return number % 2 == 0;
}

int randint(int start, int end) {
	return rand() % (end - start + 1) + start;
}


class Randint
{
	int start;
	int end;

public:
	Randint(int start, int end)
		:start(start), end(end)
	{}
	int operator()() {
		return rand() % (end - start + 1) + start;
	}
};

int main() {
	srand(time(NULL));
	/*vector<int> numbers{ 13, 150, 65, -61, 40, -1, 2, 21, 87, 91, 111, 65 };
	vector<int> evenNumbers;*/
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
	/*auto upr_text = (char*)hello.c_str();
	_strupr_s(upr_text, hello.size() + 1);
	hello = string(upr_text);
	cout << hello << endl;*/

	/*for_each(hello.begin(), hello.end(), [](char& chr) {chr = tolower(chr); });
	cout << hello << endl;*/


	vector<int> vec(100);
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		vec[i] = randint(5, 36);
	}*/
	int start = 5, end = 78;

	//generate_n(vec.begin(), vec.size(), Randint(start, end));
	generate_n(vec.begin(), vec.size(), 
		[start, end]() {return rand() % (end - start + 1) + start; });
	show(vec);
}