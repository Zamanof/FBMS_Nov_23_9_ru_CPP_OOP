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

int main() {
	cout <<"Created object count = " << Fraction::count << endl;
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
	
}