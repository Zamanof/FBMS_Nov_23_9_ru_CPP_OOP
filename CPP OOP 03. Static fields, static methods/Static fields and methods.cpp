#include <iostream>

using namespace std;
class Fraction {
private:
public:
	int numerator;
	int denominator;
	static int count;
	
	Fraction(int numerator, int denominator) :
		numerator{ numerator },
		denominator{ denominator } {
		count++;
	}
	static int getCount() {
		return count;
	}
	void show() {
		cout << this->numerator << endl;
	}
};

int Fraction::count = 0;

class Calculator {
public:
	static double add(double a, double b) {
		return a + b;
	}
	static double subtract(double a, double b) {
		return a - b;
	}
	static double multiply(double a, double b) {
		return a * b;
	}
	static double divide(double a, double b) {
		if (b == 0) throw exception("Can't divide by zero");
		return a / b;
	}
};

int main() {
	/*cout <<"Created object count = " << Fraction::count << endl;
	Fraction fr1(2, 5);
	cout <<"Created object count = " << Fraction::count << endl;
	Fraction fr2(25, 52);
	cout <<"Created object count = " << Fraction::count << endl;
	cout <<"&fr1.denominator ="<< &fr1.denominator << endl;
	cout <<"&fr2.denominator = "<< &fr2.denominator << endl;
	cout << "&Fraction::count = " << &Fraction::count << endl;
	cout <<"&fr1.count = " << &fr1.count << endl;
	cout <<"&fr2.count = " << &fr2.count << endl;
	cout << Fraction::getCount();
	*/

	cout << Calculator::add(5, 3) << endl;
	cout << Calculator::subtract(5, 3) << endl;
	cout << Calculator::multiply(5, 3) << endl;
	cout << Calculator::divide(5, 3) << endl;
}