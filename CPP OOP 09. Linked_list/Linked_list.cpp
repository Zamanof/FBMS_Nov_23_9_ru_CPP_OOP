#include<iostream>
#include"LinkedList.h"

using namespace std;


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
	list.addAfter(50, node);
	list.print();
	list.removeAfter(node);
	

}