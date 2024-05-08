#include<iostream>

using namespace std;

class Base {
public:
	int* fieldA;
	void methodBase() {
		cout << "Base class method" << endl;
	}
	virtual ~Base() = 0;
};


class DerivedAbstract: public Base
{};

class Derived : public Base {
public:
	int* fieldDerived;
	~Derived();
	
};
Derived::~Derived() { delete fieldDerived; }

int main(){
	// Virtual Destructor and Pure Virtual Destructor
	
	// Kak tolko vernus rasskaju
	// Diamond problem solve
	// Interface
	
}