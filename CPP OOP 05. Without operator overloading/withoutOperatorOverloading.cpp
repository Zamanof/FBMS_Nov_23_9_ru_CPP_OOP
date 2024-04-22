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
	static Point add(const Point& left, const Point& right) {
		return Point(left.x + right.x, left.y + right.y);
	}
	static Point multiple(const Point& left, double value) {
		return Point(left.x * value, left.y * value);
	}
	static double distance(const Point& left, const Point& right) {
		return sqrt(SQR(right.x - left.x) + SQR(right.y - left.y));
	}
	static bool isEqual(const Point& left, const Point& right) {
		return left.x == right.x && left.y == right.y;
	}
};

int main() {
	Point point1(3, 15);
	Point point2(25, 36);

	cout << Point::distance(point2, point1) << endl;
	cout<<boolalpha<<Point::isEqual(point1, point2)<<endl;
}