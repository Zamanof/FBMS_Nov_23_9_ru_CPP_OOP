#include<iostream>
#include<memory>

using namespace std;

class ForShared
{
	string name;
	int* arr;
public:
	ForShared(string name)
		:name(name)
	{
		arr = new int[10000];
		cout << "Object - " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] arr;
		cout << "Object - " << name << " destructed" << endl;
	}
	void Foo() {
		cout << "Foooooooo" << endl;
	}
};
int main() {
	ForShared* shared = new ForShared("first");
	shared_ptr<ForShared> shPtr1(shared);
	shared_ptr<ForShared> shPtr2(shPtr1);
	cout << shPtr1.use_count() << endl;
	weak_ptr<ForShared> weakPtr(shPtr1);
	cout << shPtr1.use_count() << endl;

	((shared_ptr<ForShared>)weakPtr)->Foo();
	
}