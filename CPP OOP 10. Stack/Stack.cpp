#include<iostream>
#include"Stack.h"

using namespace std;



int main() {
	Stack<int> stack(5);
	cout << boolalpha << "Stack is empty = " << stack.empty() << endl; // true
	cout << "Stack size = " << stack.size() << endl; // 0
	stack.push(36);
	cout << '\n';
	cout << boolalpha <<"Stack is empty = " << stack.empty() << endl; // false
	cout << "Stack size = " << stack.size() << endl; // 1
	cout << "Stack top = " << stack.top() << endl; // 36
	cout << '\n';
	for (size_t i = 1; i < 5; i++)
	{
		stack.push((i+1) * 10);
	}
	/*stack.push(654);*/
	cout <<"Stack size = "<< stack.size() << endl; // 5
	cout <<"Stack top = "<< stack.top() << endl; // 50
	cout << '\n';
	stack.pop();
	cout << "Stack size = " << stack.size() << endl; // 4
	cout << "Stack top = " << stack.top() << endl; // 40
	cout << '\n';
	while (!stack.empty()) {
		cout << "Stack top = " << stack.top() << endl;
		stack.pop();
		cout << '\n';
	}
	cout << boolalpha << "Stack is empty = " << stack.empty() << endl; // true
	cout << "Stack size = " << stack.size() << endl; // 0
}