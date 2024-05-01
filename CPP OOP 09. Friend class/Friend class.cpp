#include<iostream>

using namespace std;

class Some {
	int some;
public:
	Some() :Some(0) {};
	Some(int some) : some{ some } {};
	friend class Other;
};

class Other {
	int other;
	Some someField;
public:
	Other(): Other(0){}
	Other(int other) : other{ other } {
		someField.some = 45;
	}
	friend void foo(Other other);
	void Show() {
		cout << someField.some << endl;
	}
};

void foo(Other other) {
	cout << other.other << endl;
	other.Show();
}

int main() {

	Other other(5);
	Some some(26);
	other.Show();
	foo(other);

}