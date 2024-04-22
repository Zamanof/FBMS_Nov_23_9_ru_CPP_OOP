#include <iostream>

using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	// void setDay(this, int value)
	void setDay(int value) {
		day = value;
	}

	// int getDay(const this) const
	int getDay() const {
		return day;
	}
};

int main() {
	Date date;
	int day = 5;
	date.setDay(day);
	cout << date.getDay() << endl;
}