#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

template<class T>
void showSizeAndCapacity(const vector<T>& vec) {
	cout << "Size:\t\t" << vec.size() << endl;
	cout << "Capacity:\t" << vec.capacity() << endl;
	cout << endl;

}

int randint(int start, int end) {
	return rand() % (end - start + 1) + start;
}

template<class T>
void show(const vector<T>& vec) 
{
	// proxod vector-a s metodom .at()
	
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << ' ';
	}*/

	// proxod vector-a s operatorom [] - index
	/*for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}*/

	// proxod vector-a s pomoshyu iteratorov
	/*for (auto itera = vec.begin(); itera < vec.end(); itera++)
	{
		cout << *itera << ' ';
	}*/

	//  proxod vector-a s range based for
	for (auto item : vec)
	{
		cout << item << ' ';
	}

	cout << "\n\n";
}

int main() {
	// Containers - vector
	srand(time(NULL));

	vector<int> vec;
	cout << boolalpha << vec.empty() << endl;
	/*showSizeAndCapacity(vec);*/

	for (size_t i = 0; i < 20; i++)
	{
		vec.push_back(randint(10, 99));
		/*showSizeAndCapacity(vec);*/
	}
	cout << boolalpha << vec.empty() << endl;

	auto begin_itera = vec.begin();
	auto end_itera = vec.end();
	auto r_itera_begin = vec.rbegin();
	auto r_itera_end = vec.rend();
	
	/*cout << "First element - vec[0]: " << endl;
	cout << vec[0] << endl;
	cout << vec.at(0) << endl;
	cout << *begin_itera << endl;
	cout << *(r_itera_end -1) << endl;

	cout << "Last element - vec[vec.size() - 1]: " << endl;
	cout << vec[19] << endl;
	cout << vec.at(19) << endl;
	cout << *(end_itera - 1) << endl;
	cout << *r_itera_begin << endl;*/


	/*for (auto itera = vec.begin(); itera < vec.end(); itera++)
	{
		cout << *itera << ' ';
	}
	cout << '\n';

	for (auto itera = vec.rbegin(); itera < vec.rend(); itera++)
	{
		cout << *itera << ' ';
	}
	cout << '\n';*/

	/*cout << vec.end() - vec.begin() << endl;*/
	show(vec);
	vec.insert(vec.begin() + 3, 648);
	show(vec);

}