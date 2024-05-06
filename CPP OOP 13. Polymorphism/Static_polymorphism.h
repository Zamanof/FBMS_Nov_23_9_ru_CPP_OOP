#pragma once
#pragma once
#include<iostream>

using namespace std;
void fillArray(int arr[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % 90 + 10;
	}
}

void fillArray(float arr[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = (rand() % 900 + 100) * 0.1f;
	}
}

void fillArray(char arr[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % ('Z' - 'A' + 1) + 'A';
	}
}

template<class T>
void showArray(T arr[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

