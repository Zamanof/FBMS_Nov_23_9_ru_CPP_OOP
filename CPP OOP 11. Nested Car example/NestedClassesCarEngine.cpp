#include<iostream>

using namespace std;

class Car
{
private:
	string model;
	int year;
	class Engine
	{
	private:
		bool isWorked;
		int horsePower;
		int cylinders;
	public:
		Engine(int horsePower, int cylinders) : horsePower(horsePower), cylinders(cylinders)
		{
			isWorked = false;
		}
		void start() {
			isWorked = true;
			cout << "Qrrrrrr, pirt, pirt, booom!" << endl;
		}
	};
	Engine* engine;
public:
	Car(string model, int year, int horsePower, int cylinders)
		:model(model), year(year), engine(new Engine(horsePower, cylinders))
	{
		cout << "Bombastic, fantastic car created" << endl;
	}
	void move() {
		engine->start();
		cout << "Tu tuuuuuuuu...." << endl;;
	}
	~Car() {
		delete engine;
	}
};


int main() {
	Car lamborghiniGallardo("Gallardo", 2024, 530, 8);
	lamborghiniGallardo.move();
}