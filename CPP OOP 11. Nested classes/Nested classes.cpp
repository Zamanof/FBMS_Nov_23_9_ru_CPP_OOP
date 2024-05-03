#include<iostream>

using namespace std;

class Enclosing
{
private:
	int outerValue = 15;
	class Inner
	{
	private:
		int innerValue1 = 258;
	public:
		int innerValue2 = 225381;
		void showInnerValues();
		void showOuterValuesInIneerClass(Enclosing* object);
	};
public:
	void showOuterValue();
	
	

	Inner innerObject;
};

void Enclosing::showOuterValue() {
	cout << "outerValue = " << outerValue << endl;
}
void Enclosing::Inner::showInnerValues() {
	cout << "innerValue1 = " << innerValue1 << endl;
	cout << "innerValue2 = " << innerValue2 << endl;
	// vlojenniy class ne imeet dostupa k private polyam vneshnoqo klassa
	/*cout << "outerValue = " << outerValue << endl;*/
}

void Enclosing::Inner::showOuterValuesInIneerClass(Enclosing* object)
{
	object->outerValue = 36;
	cout << "outerValue = " << object->outerValue << endl;

}

int main() {
	Enclosing enclosingObject;
	enclosingObject.showOuterValue();
	enclosingObject.innerObject.showOuterValuesInIneerClass(&enclosingObject);
	enclosingObject.showOuterValue();

	// Sozdat takim obrazom obyekt vlojennoqo klassa nevozmojno;
	/*Inner innerObject;*/


	// Mojno takim obrazom obyekt vlojennoqo klassa mojno
	// no ne rekomenduyetsya, potomu chto teryayetsya smisl vlojennix klassov 
	// Chtobi izbejat etoqo mojno bilo vlojenniy klass sdelat private
	/*Enclosing::Inner innerObject;
	innerObject.showInnerValues();*/
}