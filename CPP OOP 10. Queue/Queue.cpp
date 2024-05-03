#include<iostream>
#include "Queue.h"

using namespace std;

template<class T>
void printSize(const Queue<T>& queue) {
	cout << endl;
	cout << "Size = " << queue.size() << endl;
	cout << boolalpha << "is empty = " << queue.empty() << endl;
	cout << boolalpha << "is full = " << queue.full() << endl;
	cout << endl;
}

int main() {
	
	srand(time(NULL));
	Queue<int> queue(10);
	printSize(queue);

	for (size_t i = 0; i < 5; i++)
	{
		queue.enqueue(rand() % 90 + 10);
		cout << queue.back() << endl;
	}
	printSize(queue);

	for (size_t i = 0; i < 5; i++)
	{
		queue.enqueue(rand() % 90 + 10);
		cout << queue.back() << endl;
	}
	printSize(queue);
	cout << "Front = " << queue.front() << endl;
	cout << "Back = " << queue.back() << endl;

	cout << "Dequeue element = " << queue.dequeue() << endl;
	cout << "Front = " << queue.front() << endl;
	cout << "Back = " << queue.back() << endl;

	while (!queue.empty())
	{
		cout << "Dequeue element = " << queue.dequeue() << endl;
		cout << "Front = " << queue.front() << endl;
		cout << "Back = " << queue.back() << endl;
		printSize(queue);
	}

	printSize(queue);
}