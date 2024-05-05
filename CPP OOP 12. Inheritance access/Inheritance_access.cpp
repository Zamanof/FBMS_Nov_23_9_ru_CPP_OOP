#include<iostream>

using namespace std;

class BaseClass {
private:
	int privateBaseField = 33;
protected:
	int protectedBaseField = 336;
public:
	int publicBaseField = 78;
};

class DerivedPublic : public BaseClass 
{
public:
	void showAccessInfo()
	{
		//	public ostayetsya public
		//	protected ostayetsya protected
		//	private ostayetsya private
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods - publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods -  protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont't have access private fields and methods"<< endl;
	}

};

class DerivedProtected : protected BaseClass
{
public:
	void showAccessInfo()
	{
		//	public stanet protected
		//	protected ostayetsya protected
		//	private ostayetsya private
		cout << ": protected BaseClass" << endl;
		cout << "Have access public fields and methods - publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods -  protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont't have access private fields and methods" << endl;
	}

};

class DerivedPrivate : private BaseClass
{
public:
	void showAccessInfo()
	{
		//	public stanet private
		//	protected stanet private
		//	private ostayetsya private
		cout << ": private BaseClass" << endl;
		cout << "Have access public fields and methods - publicBaseField = " << publicBaseField << endl;
		cout << "Have access protected fields and methods -  protectedBaseField = " << protectedBaseField << endl;
		cout << "Dont't have access private fields and methods" << endl;
	}

};

class ThirdInheritanceDerivedPublic : public DerivedPublic
{
public:
	void Method() {
		publicBaseField = 25; // public ostayetsya public
		protectedBaseField = 33;	//	protected ostayetsya protected
		/*privateBaseField = 22;*/	// private ostayetsya private
	}
};

class ThirdInheritanceDerivedProtected : public DerivedProtected
{
public:
	void Method() {
		publicBaseField = 25; // public stanet protected
		protectedBaseField = 33; // protected takje ostayetsya protected
		/*privateBaseField = 22;*/ // private ostayetsya private
	}
};

class ThirdInheritanceDerivedPrivate : public DerivedPrivate
{
public:
	void Method() {
		//publicBaseField = 25; // public stanet private
		//protectedBaseField = 33; // protected stanet private
		/*privateBaseField = 22;*/ // private ostayetsya private
	}
};

int main() {
	//DerivedPublic derivedPublic;
	//derivedPublic.publicBaseField = 25;
	///*derivedPublic.protectedBaseField = 11;
	//derivedPublic.privateBaseField = 41;*/
	//derivedPublic.showAccessInfo();

	//DerivedProtected derivedProtected;
	///*derivedProtected.publicBaseField = 25;*/
	//derivedProtected.showAccessInfo();

	/*DerivedPrivate derivedPrivate;
	derivedPrivate.showAccessInfo();*/

	ThirdInheritanceDerivedPublic third1;
	third1.publicBaseField;

	ThirdInheritanceDerivedProtected third2;
}