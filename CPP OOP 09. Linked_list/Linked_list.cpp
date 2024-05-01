#include<iostream>

using namespace std;
template<class T>
struct Node
{
	T value;
	Node* next;
	Node(const T& value) : value(value), next(nullptr) {};
	void print() const { cout << value; }
};

template<class T>
class LinkedList {
public:
	Node<T>* head;
	LinkedList() : head(nullptr) {};
	void add(const T& value);
	void remove();
	Node<T>* find(const T& value) const;
	Node<T>* addAfter(const T& value, Node<T>* afterPtr);
	Node<T>* removeAfter(Node<T>* afterPtr);
	void clear();
	void doForEach(void (*func)(Node<T>* nodePtr));
	static void printNode(Node<T>* nodePtr) {
		nodePtr->print();
		cout<< " -> ";
	}
	void print() {
		doForEach(printNode);
		cout << '\n';
	}
};

template<class T>
void LinkedList<T>::add(const T& value) {
	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = head;
	head = nodePtr;
}

template<class T>
void LinkedList<T>::remove() {
	if (head != nullptr) {
		Node<T>* nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
}

template<class T>
Node<T>* LinkedList<T>::find(const T& value) const {
	for (Node<T>* nodePtr = head;
		nodePtr != nullptr;
		nodePtr = nodePtr->next)
	{
		if (nodePtr->value == value) {
			return nodePtr;
		}
	}
	return nullptr;
}

template<class T>
Node<T>* LinkedList<T>::addAfter(const T& value, Node<T>* afterPtr) {
	if (afterPtr == nullptr) return nullptr;
	Node<T>* nodePtr = new Node<T>(value);
	nodePtr->next = afterPtr->next;
	afterPtr->next = nodePtr;
	return afterPtr->next;
}

template<class T>
Node<T>* LinkedList<T>::removeAfter(Node<T>* afterPtr) {
	if (afterPtr != nullptr && afterPtr->next != nullptr) {
		Node<T>* nodePtr = afterPtr->next;
		afterPtr->next = afterPtr->next->next;
		delete nodePtr;
	}
	return afterPtr;
}

template<class T>
void LinkedList<T>::clear() {
	while (head != nullptr) remove();	
}
template<class T>
void LinkedList<T>::doForEach(void (*func)(Node<T>* nodePtr)) {
	for (Node<T>* nodePtr = head;
		nodePtr != nullptr;
		nodePtr = nodePtr->next)
	{
		func(nodePtr);
	}
}



int main() {
	/*
		Dynamic data structure
			- List (Linked, Double Linked)
			- Stack - LIFO
			- Queue - FIFO
			- Trees
			- Graphs
			- Hash tables
	*/

	LinkedList<int> list;
	list.add(13);
	list.add(52);
	list.add(33);
	list.add(4);
	list.add(16);
	list.add(7);
	list.add(78);
	list.print();
	Node<int>* node = list.find(4);
	list.print();
	if (node != nullptr) node->value = 12;
	list.print();
	list.addAfter(50, node->next);
	list.print();
	list.removeAfter(node);
	

}