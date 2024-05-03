#pragma once

#include<iostream>

using namespace std;

template<class T>
class Queue {
private:
	T* queuePtr;
	const int maxSize;
	int first;
	int next;
	bool over;
public:
	Queue(int size = 100);
	~Queue();
	void enqueue(const T& value);
	T dequeue();
	T& front() const;
	T& back() const;
	bool empty() const;
	bool full() const;
	int size() const;
};

template<class T>
Queue<T>::Queue(int size) : maxSize(size) {
	queuePtr = new T[maxSize];
	first = 0;
	next = 0;
	over = false;
}

template<class T>
Queue<T>::~Queue() {
	delete[] queuePtr;
}

template<class T>
void Queue<T>::enqueue(const T& value) {
	if (full()) throw exception("Queue is full");
	queuePtr[next++] = value;
	if (next == maxSize) {
		over = true;
		next = 0;
	}
}
template<class T>
T Queue<T>::dequeue() {
	if (empty()) throw exception("Queue is empty");
	T current = queuePtr[first++];
	if (first == maxSize) {
		over = true;
		first = 0;
	}
	return current;
}

template<class T>
T& Queue<T>::front() const{
	if (empty()) throw exception("Queue is empty");
	return  queuePtr[first];
}

template<class T>
T& Queue<T>::back() const {
	if (empty()) throw exception("Queue is empty");

	if (next == 0 && over) return queuePtr[maxSize - 1];

	return queuePtr[next - 1];
}

template<class T>
bool Queue<T>::empty() const {

	return size() == 0;
}

template<class T>
bool Queue<T>::full() const {

	return size() == maxSize;
}

template<class T>
int Queue<T>::size() const {
	if (next > first) return next - first;
	else if (first > next) return  maxSize - (first - next);
	else if (over) return  maxSize;
	else return 0;
	
}