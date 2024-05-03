#include<iostream>

using namespace std;

class Address {
	string City;
	string Street;
	int House;
	int Apartament;
public:
	Address(string City, string Street, int House, int Apartament)
		: City(City),
		Street(Street),
		House(House),
		Apartament(Apartament)
	{
		cout << "Address was created" << endl;
	}
	void show()
	{
		cout << "City:\t\t" << City << ";" << endl;
		cout << "Street\t\t" << Street << ";" << endl;
		cout << "House:\t\t" << House << ";" << endl;
		if (Apartament != 0)
		{
			cout << "Apartament:\t" << Apartament << ";" << endl;
		}
	}
	~Address()
	{
		cout << "Address was deleted" << endl;
	}
};

class Student {
	string FirstName;
	string LastName;
	int Age;
	float AverageScore;
	Address& address;
public:
	Student(string FirstName, string LastName, int Age, float AverageScore, Address& address)
		:FirstName(FirstName),
		LastName(LastName),
		Age(Age),
		AverageScore(AverageScore),
		address(address)

	{
		cout << "Student was created" << endl;
	}

	void Show() {
		cout << "Hello. I am " << FirstName << ' ' << LastName << '.' << endl;
		cout << "I am " << Age << " years old." << endl;
		cout << "My address:\n";
		address.show();
	}

	~Student()
	{
		cout << "Student was deleted" << endl;
	}
};

class Teacher {
	string FirstName;
	string LastName;
	int Age;
	float Salary;
	Address& address;
public:
	Teacher(string FirstName, string LastName, int Age, float Salary, Address& address)
		:FirstName(FirstName),
		LastName(LastName),
		Age(Age),
		Salary(Salary),
		address(address)

	{
		cout << "Teacher was created" << endl;
	}

	void Show() {
		cout << "Hello. I am " << FirstName << ' ' << LastName << '.' << endl;
		cout << "I am " << Age << " years old." << endl;
		cout << "My address:\n";
		address.show();
	}

	~Teacher()
	{
		cout << "Teacher was deleted" << endl;
	}
};

void Foo(Address& address) {
	Student student("Aydan", "Zaman",15,  11, address);
}

int main() {
	// relations - otnosheniye
	// is - Yavlyaetsya (odin iz raznovidnostey) : Inheritance (nasledovaniye)
	// has - imeet (soderjit): Aggregation (Aqreqasiya), Composition(Kompozisiya)
	// depends on - zavisit ot
	// uses - ispolzuyetsya
	// part-whole - chast seloye: Nested classes (Vlojenniye klassi)

	// Aggregation
	// 1. Obyekt chast vxodit v sostav obyekt seloe
	// 2. Obyekt chast mojet prinadlejat bolee chem odnomu obyektu-selomu
	// 3. Obyekt chast mojet sushestvovat vne obyekta seloqo
	// 4. Obyekt chast ne soderjit informasiyu ob obyekte selom

	Address address("Absheron", "Saray MTK", 70, 10);
	Foo(address);
	Teacher teacher("Nadir", "Zamanov", 44, 50000, address);
	Student student("Ayan", "Zaman", 10, 11.5, address);
	student.Show();
	teacher.Show();
}