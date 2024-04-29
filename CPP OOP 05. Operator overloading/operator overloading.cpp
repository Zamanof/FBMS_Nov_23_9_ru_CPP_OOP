#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point() : Point(0, 0) {}

	Point(double x, double y) : x{ x }, y{ y } {}

	static double length(const Point& point) {
		return sqrt(SQR(point.x) + SQR(point.y));
	}

	void show()const {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

	// Binary operators (Arithmetic)
	friend Point operator+(const Point& left, const Point& right);
	friend double operator-(const Point& left, const Point& right);
	friend Point operator*(const Point& left, double value);
	friend Point operator*(double value, const Point& left);

	// operator unary -
	const Point operator-() {
		return Point(-x, -y);
	}

	// prefix increment ++
	Point& operator++() {
		++x;
		++y;
		return *this;
	}
	// prefix decrement --
	Point& operator--() {
		--x;
		--y;
		return *this;
	}

	// postfix increment ++
	const Point operator++(int) {
		Point point(x, y);
		++(*this);
		return point;
	}

	// postfix decrement --
	const Point operator--(int) {
		Point point(x, y);
		--(*this);
		return point;
	}

	// comparison operators
	friend bool operator==(const Point& left, const Point& right);
	friend bool operator!=(const Point& left, const Point& right);
	friend bool operator>(const Point& left, const Point& right);
	friend bool operator>=(const Point& left, const Point& right);
	friend bool operator<(const Point& left, const Point& right);
	friend bool operator<=(const Point& left, const Point& right);

	friend ostream& operator<<(ostream& output, const Point& point);
	friend istream& operator>>(istream& input, Point& point);
};

Point operator+(const Point& left, const Point& right) {
	return Point(left.x + right.x, left.y + right.y);
}

double operator-(const Point& left, const Point& right) {
	return sqrt(SQR(right.x - left.x) + SQR(right.y - left.y));
}

Point operator*(const Point& left, double value) {
	return Point(left.x * value, left.y * value);
}

Point operator*(double value, const Point& left) {
	return Point(left.x * value, left.y * value);
}

bool operator==(const Point& left, const Point& right) {
	return left.x == right.x && left.y == right.y;
}

bool operator!=(const Point& left, const Point& right) {
	return !(left == right);
}

bool operator>(const Point& left, const Point& right) {
	return Point::length(left) > Point::length(right);
}
bool operator<(const Point& left, const Point& right) {
	return Point::length(left) < Point::length(right);
}

bool operator>=(const Point& left, const Point& right) {
	return left > right || left == right;
}

bool operator<=(const Point& left, const Point& right) {
	return left < right || left == right;
}

// input and output operators
ostream& operator<<(ostream& output, const Point& point) {
	output << "Point(" << point.x << ", " << point.y << ")";
	return output;
}
istream& operator>>(istream& input, Point& point) {
	input >> point.x;
	input.ignore(1);
	input >> point.y;
	return input;
}

int main() {
	Point point1(3, 15);
	/*Point point2(25, 36);
	cout << point2 - point1 << endl;
	Point point3 = point2 + point1;
	point3.show();
	Point point4 = point3 * 2.5;
	point4.show();
	Point point5 = 2.5 * point3;
	point5.show();*/

	/*Point point5 = -point1;
	point5.show();*/
	/*--point1;
	point1.show();*/

	Point first(2, 3);
	Point second(15, 3);
	/*Point result =  first++ + second;
	result.show();
	first.show();*/
	cout << first << endl;
	cout << second << endl;

	Point pointNew;
	cin >> pointNew;
	cout << pointNew;

}