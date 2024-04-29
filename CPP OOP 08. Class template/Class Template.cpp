#include<iostream>

using namespace std;
class Point {
public:
	int X;
	int Y;
	friend Point operator+(const Point& left, const Point& right);
};

Point operator+(const Point& left, const Point& right) {
	return Point{ left.X + right.X, left.Y + right.Y };
}

//int add(int a, int b) {
//	return a + b;
//}
//float add(float a, float b) {
//	return a + b;
//}
//float add(float a, int b) {
//	return a + b;
//}
//float add(int a, float b) {
//	return a + b;
//}
//int add(int a, int b, int c) {
// return a + b + c;
//}

template<typename T>
T foo(int a, int b) {
	return a + b;
}

template<class T>
T add(T left, T right) {
	return left + right;
}

template<class T1, class T2>
T1 bar(T2 a, T2 b) {
	return a + b;
}

template<class T>
T maxValue(T left, T right) {
	if (left > right) return left;
	return right;
}

template<>
const char* maxValue(const char* left, const char* right) {
	if (strcmp(left, right) == 1) return left;
	return right;
}

// class template
template<class T1, class T2>
class Test {
private:
	T1 field1;
	T2 field2;
public:
	Test(T1 a) : field1{ a } {}
	void showInfo() {
		cout << "Template class" << endl;
		cout <<"field1 type = " << typeid(field1).name() << endl;
		cout <<"field2 type = " << typeid(field2).name() << endl;
	}
	T1 maxValue(T1 otherValue) {
		if (field1 > otherValue) return field1;
		return otherValue;
	}
};

template<>
class Test<const char*, float> {
private:
	const char* field1;
	float field2;
public:
	Test(const char* a) : field1{ a } {}
	void showInfo() {
		cout << "Spesizalization template class" << endl;
		cout <<"field1 type = " <<typeid(field1).name() << endl;
		cout <<"field2 type = " <<typeid(field2).name() << endl;
	}
	const char* maxValue(const char* otherValue) {
		if (strcmp(field1, otherValue) == 1) return field1;
		return otherValue;
	}
};

int main() {
	// static polymorphism
	// function overloading
	// template function
	// operator overloading
	// template class
	/*cout << add(2, 6) << endl;
	cout << add(2.3f, 6.6f) << endl;*/
	/*cout << add<string>("2.3", "6.6f") << endl;*/
	/*Point point = add(Point{5, 3}, Point{3, 56});
	cout <<"point.X = " << point.X << " point.Y = " << point.Y << endl;*/
	/*cout << add(2.3f, 3) << endl;
	cout << add(2, 6.6f) << endl;
	cout << add(2, 3, 9) << endl;*/

	/*cout << foo<int>(5, 3) << endl;
	cout << foo<char>(95, 3) << endl;*/
	/*cout << bar<int, float>(2.6f, 6.43f) << endl;*/

	/*cout << maxValue(2, 6) << endl;
	cout << maxValue('a', 'A') << endl;
	cout << maxValue(2.3, 0.02) << endl;
	cout << maxValue("Abd", "abd") << endl;*/

	Test<char, int> test1('c');
	test1.showInfo();
	cout<< "MaxValue = "<< test1.maxValue('b') << endl;
	/*Test<float, double> test2(2.3f);
	test2.showInfo();

	Test <double, float> test3(2.36);
	test3.showInfo();*/

	Test<const char*, float> test4("Salam");
	test4.showInfo();
	cout << test4.maxValue("Wello") << endl;

	Test<const char*, int> test5("Salam");
	test5.showInfo();
	cout << test5.maxValue("Hello") << endl;


}