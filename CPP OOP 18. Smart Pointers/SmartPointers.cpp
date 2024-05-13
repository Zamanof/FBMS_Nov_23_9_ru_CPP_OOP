#include<iostream>
#include<memory>

using namespace std;

template<class T>
class MySmartPointer
{
private:
	T* ptr;
public:
	explicit MySmartPointer(T* ptr = nullptr)
		:ptr(ptr)
	{}
	~MySmartPointer()
	{
		delete ptr;
	}
	T& operator*()const {
		return *ptr;
	}
	T* operator->()const
	{
		return ptr;
	}
};

class Test
{
public:
	string text;
	Test()
		:text("Salam")
	{
		cout << "Constructed" << endl;
	}

	void testFoo()
	{
		cout << "Foo" << endl;
	}

	~Test()
	{
		cout << "Destructed" << endl;
	}
};

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

//void foo() {
//	Test* test = new Test();
//	/*return;*/
//	throw new exception();
//	delete test;
//}

//void foo() {
//	MySmartPointer<Test> tmp(new Test);
//	tmp->testFoo();
//	return;	
//}


auto_ptr<Test> foo1() {
	auto_ptr <Test> tmp(new Test);
	/*tmp->testFoo();*/
	return tmp;
}

unique_ptr<Test> foo2() {
	unique_ptr<Test> tmp(new Test);
	return tmp;
}

int main() {
	// Smart pointers
	// auto_ptr
	// unique_ptr
	// shared_ptr
	// weak_ptr
	/*foo();*/

	/*auto_ptr<Test> test1(foo1());
	test1->testFoo();*/

	/*unique_ptr<Test> test2(foo2());
	test2->testFoo();
	int* arr = new int[5] {5, 36, 9, 84, 1};
	unique_ptr<int> arr2(arr);
	cout << arr2.get()[1] << endl;
	unique_ptr<Test> test3 = make_unique<Test>(new Test);*/
	ForShared* sh = new ForShared("object1");
	shared_ptr<Test> test13;
	shared_ptr<ForShared> shared1(sh);
	shared_ptr<ForShared> shared2(shared1);
	{
		shared_ptr<ForShared> shared3(shared1);
		cout << "Share " << shared1.use_count() << " smart pointers" << endl;
	}
	cout << "Share " << shared1.use_count() << " smart pointers" << endl;
}