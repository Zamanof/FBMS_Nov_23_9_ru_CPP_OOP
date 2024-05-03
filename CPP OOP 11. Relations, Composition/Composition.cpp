#include<iostream>

using namespace std;
class Point 
{
	int x;
	int y;
public:
	Point(int x, int y)
		:x(x), y(y)
	{
		cout << "Point (" << x << ", " << y << ") was created" << endl;
	}
	void update(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point()
	{
		cout << "Point (" << x << ", " << y << ") was deleted" << endl;
	}
};

class Image 
{
	string name;
	int width;
	int height;
	Point position;
public:
	Image(string name, int width, int height, int x, int y)
		:name(name), width(width), height(height), position(Point(x, y))
	{
		cout << "Image " << name << ".png was created" << endl;
	}
	~Image()
	{
		cout << "Image " << name << ".png was deleted" << endl;
	}
	void moveTo(int x, int y) {
		cout << "Image " << name << ".png was moved to point (" << x << ", " << y << ");" << endl;
		position.update(x, y);
	}
};


int main() {
	// relations - otnosheniye
	// is - Yavlyaetsya (odin iz raznovidnostey) : Inheritance (nasledovaniye)
	// has - imeet (soderjit): Aggregation (Aqreqasiya), Composition(Kompozisiya)
	// depends on - zavisit ot
	// uses - ispolzuyetsya
	// part-whole - chast seloye: Nested classes (Vlojenniye klassi)

	// Aggregation
	// 1. Obyekt chast vxodit v sostav obyekt seloe
	// 2. Obyekt chast mojet prinadlejat tilko odnomu obyektu-selomu
	// 3. Obyekt chast ne mojet sushestvovat bez obyekta seloqo,
	//	  Seloye upravlyayet chastyu i nesyot otvestvennost za sushestvovaniye chasti
	// 4. Obyekt chast ne soderjit informasiyu ob obyekte selom


	Image("The Starry square", 520, 400, 0, 0);
	Image("Mojno Lizu?", 1500, 1200, 56, 36);
	Image("Black night", 12, 12, 59, 38);


}