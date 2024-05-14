#include<iostream>
#include<list>


using namespace std;

template<class T>
void showList(list<T> lst)
{
	cout << "List:" << endl;
	for (T item: lst)
	{
		cout << item << ' ';
	}
	cout << "\n";
	cout << "list front: " << lst.front() << endl;
	cout << "list back: " << lst.back() << endl;
	cout << "\n\n";
}


int main() {
	// Container list
	list<int> lst;
	lst.push_back(25);
	lst.push_back(15);
	lst.push_back(11);
	lst.push_back(2);
	lst.push_back(163);
	lst.push_back(1112);
	
	showList(lst);
	
	lst.push_front(45);
	lst.push_front(45);
	
	showList(lst);
	list<int>::iterator itera = lst.begin();
	++itera;
	++itera;
	lst.insert(itera, 45233);
	showList(lst);

	lst.sort();
	showList(lst);

	lst.unique();
	showList(lst);

	

}