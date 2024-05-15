#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

class addNumberFrom
{
	int delta;
	int current;
public:
	addNumberFrom(int number, int from = 0)
		:delta(number), current(from)
	{}
	int operator()() {
		return current += delta;
	}

};

int main() {
	cout << "Multiple table" << endl;
	for (int i = 1; i < 10; i++)
	{
		list<int> lst(10);
		generate_n(lst.begin(), lst.size(), addNumberFrom(i));
		copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, "\t"));
		cout << "\n";
	}

	/*
		Arithmetic functros:
			plus				x+y
			minus				x-y
			multipiles			x*y
			divides				x/y
			modulus				x%y
			negate				-x

		Compare functors:
			equal_to			x==y
			not_equal			x!=y
			greater				x>y
			less				x<y
			greater_equal		x>=y
			less_equal			x<=y

		Logical functors:
			logical_and			x&&y
			logical_or			x||y
			logical_not			!x
		
	
	*/
}