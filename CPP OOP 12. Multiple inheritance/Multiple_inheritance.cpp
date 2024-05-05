#include<iostream>

using namespace std;

class A {
public:
	int fieldA;
	A()
	{
		cout << "Constructor A()" << endl << endl;
	}
	void methodA() {
		cout << "methodA()" << endl << endl;
	}
	void print() {
		cout << "A::print() " << endl;
		cout << "fieldA = " << fieldA << endl << endl;
	}
	~A()
	{
		cout << "Destructor ~A()" << endl << endl;
	}
};

class B {
public:
	int fieldB;
	B()
	{
		cout << "Constructor B()" << endl << endl;
	}
	void methodB() {
		cout << "methodB()" << endl << endl;
	}
	void print() {
		cout << "B::print() " << endl;
		cout << "fieldB = " << fieldB << endl << endl;
	}
	~B()
	{
		cout << "Destructor ~B()" << endl << endl;
	}
};

class C : public A, public B
{
public:
	int fieldC;
	C()
	{
		cout << "Constructor C()" << endl << endl;
	}
	void methodC() {
		cout << "methodC()" << endl << endl;
	}
	void print() {
		A::print();
		B::print();
		cout << "C::print() " << endl;
		cout << "fieldC = " << fieldC << endl << endl;
	}
	~C()
	{
		cout << "Destructor ~C()" << endl << endl;
	}
};


// Diamond problem - problema rombovidnoqo nasledovaniya
// Dead diamond problem - problema almaz smerti
class D: public A, public C
{
public:
	D()
	{
		cout << "Constructor D()" << endl << endl;
	}
	~D()
	{
		cout << "Destructor ~D()" << endl << endl;
	}
};

int main() {
	//C cObject;
	//cObject.fieldA = 446;
	//cObject.fieldB = 45;
	//cObject.fieldC = 78;
	//cObject.methodA();
	//cObject.methodB();
	//cObject.methodC();
	///*cObject.A::print();
	//cObject.B::print();*/
	//cObject.print();

	D dObject;
}