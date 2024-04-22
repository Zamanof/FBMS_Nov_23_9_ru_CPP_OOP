#include<iostream>
#define SQR(x) (x)*(x)

using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double x, double y) : x{ x }, y{ y } {}

	void show()const {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

	friend Point operator+(const Point& left, const Point& right);
	friend double operator-(const Point& left, const Point& right);
	friend Point operator*(const Point& left, double value);
	friend Point operator*(double value, const Point& left );
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
int main() {

	Point point1(3, 15);
	Point point2(25, 36);
	cout << point2 - point1 << endl;
	Point point3 = point2 + point1;
	point3.show();
	Point point4 = point3 * 2.5;
	point4.show();
	Point point5 = 2.5 * point3;
	point5.show();

}