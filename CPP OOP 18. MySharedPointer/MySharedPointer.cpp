#include<iostream>

using namespace std;
template<class T>
class MySharedPointer
{
private:
	T* ptr;
	size_t* count;
public:
	MySharedPointer()
		:ptr(nullptr), count(nullptr)
	{}
	MySharedPointer(T* ptr)
		:ptr(ptr), count(new size_t(1))
	{}
	MySharedPointer(MySharedPointer<T>& other)
		:ptr(other.ptr), count(other.count)
	{
		(*count)++;
	}
	MySharedPointer<T>& operator=(MySharedPointer<T>& other)
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}
	MySharedPointer<T>& operator=(T* ptr)
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0) {
				delete ptr;
				delete count;
			}
		}
		count = new size_t(1);
		this->ptr = ptr;
		(*count)++;
		return this;
	}

	int use_count()
	{
		return *count;
	}
	T& operator*()const { return *ptr; }
	T& operator->()const { return ptr; }
	T& get() const { return ptr; };

	~MySharedPointer()
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
	}

};

class ForShared
{
	string name;
	int* arr;
public:
	ForShared(string name)
		:name(name)
	{
		arr = new int[10000];
		cout << "Object - " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] arr;
		cout << "Object - " << name << " destructed" << endl;
	}
	void Foo() {
		cout << "Foooooooo" << endl;
	}
};

template<class T>
void Bar(MySharedPointer<T> shp)
{
	cout << "Share " << shp.use_count() << " smart pointers. In Bar() method" << endl;
}

int main()
{
	ForShared* sh = new ForShared("object1");
	MySharedPointer<ForShared> shared1(sh);
	MySharedPointer<ForShared> shared2(shared1);
	{
		MySharedPointer<ForShared> shared3(shared1);
		cout << "Share " << shared1.use_count() << " smart pointers. In Scopes" << endl;
		Bar(shared1);
	}
	cout << "Share " << shared1.use_count() << " smart pointers.  In main()" << endl;
}