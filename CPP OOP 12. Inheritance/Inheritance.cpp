#include<iostream>
#include<format>

using namespace std;
//// Base class
//class Vehicle
//{
//	// fields
//	// Engine
//	// Wheels
//	// ...
//
//	// viewInfo()
//	// viewFuel()
//	// refuel()
//	// start()
//	// ...
//};
//
//// Derived classess
//class Truck: public Vehicle
//{
//	// capacity
//	// ...
//};
//
//class Bus : public Vehicle 
//{
//	// pasengerCapacity
//	// ...
//};

class Person 
{
private:
	string dream = "some dream";
public:
	string firstName;
	string lastName;
protected:
	int age;
public:
	Person(string firstName, string lastName, int age)
		: firstName(firstName), lastName(lastName), age(age)
	{
		cout << "Person parametrized constructor" << endl;
	}
	Person()
		: Person("Empty", "Empty", 0)
	{
		cout << "Person default constructor" << endl;
	}

	string getInfo() const
	{
		string result = format("First Name:\t{};\nLast Name:\t{};\nAge:\t\t{};\n",
			firstName, lastName, age);
		return result;
	}
	string getGreetings(string msgText = "")const
	{
		string result = format("I am {} {}.\n", firstName, lastName);
		if (!msgText.empty()) 
		{
			result += "I say: ";
			result += msgText;
		}
		else {
			result += "I say nothing.";
		}
		result += format("\nI have a dream {}\n", dream);
		return result;
	}
	~Person()
	{
		cout << "Person destructor" << endl;
	}

};

class Student : public Person
{
private:
	string faculty;
	float avgScore;
public:
	Student(float avgScore, string faculty = "Development")
		: avgScore(avgScore), faculty(faculty)
	{
		cout << "Student parametrized constructor Student(avgScore, faculty)" << endl;
	}
	Student(
		string firstName, 
		string lastName, 
		int age, 
		float avgScore, 
		string faculty = "Development")
		: Person(firstName, lastName, age), avgScore(avgScore), faculty(faculty)
	{
		cout << "Student parametrized constructor Student(firstName, lastName, age, avgScore, faculty)" << endl;
	}
	bool isSuccessful() const 
	{		
		return avgScore >= 7 ? true : false;
	}
	
	~Student()
	{
		cout << "Student destructor" << endl;
	}
};

int main() {
	/*
		Inheritance - nasledovainye
		Rashireniye funksionalnosti dochernoqo klassa
		za schet roditelskoqo klassa
		(Nasledovaniye public i protected poley i metodov
		roditelskoqo klassa)

		Base class (Bazoviy klass) -> Derived (Proizvodniy klass)
		Parent class (Roditelskiy klass) - Child class (Docherniy klass)
		Superclass (Super klass) -> Subclass (Podklass)

	*/
	/*Person person("Nadir", "Zamanov", 44);
	cout << person.getInfo();
	cout << person.getGreetings("Salam vsem prisustvuyushem na uroke");*/

	// relations - otnosheniye
	// is - Yavlyaetsya (odin iz raznovidnostey) : Inheritance (nasledovaniye)

	/*Student student(8);
	cout << boolalpha <<student.isSuccessful()<< endl;
	cout << student.getInfo();
	cout << student.getGreetings();*/

	Student student2("Sevda", "Abdullayeva", 18, 11.5);
	cout<< student2.getInfo();
	cout << student2.getGreetings("Ne znayu");
	cout << boolalpha << student2.isSuccessful() << endl;
	cout << student2.firstName << endl;
	
	
}