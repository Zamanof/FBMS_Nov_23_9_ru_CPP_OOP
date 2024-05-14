#include<iostream>

using namespace std;

int main() {
	const int length = 10;
	int arr[length]{ 23, 45, 1, 54, 66, 448, 122, 221, 156, 13 };
	
	/*for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';*/

	/*for (int item : arr)
	{
		item *= 10;
	}*/

	for (int item : arr)
	{
		cout << item << " ";
	}
	cout << '\n';

	// Iterators
	// input - vxodniye iteratori
	//			dlya chteniya adresuemix dannix iz pamyati
	// ==, !=, ++i, i++, *i++
	 
	// output - vixodniye iteratori
	//			addresuyut danniye dlya zapisi v pamyat
	// ++i, i++, *i = value, *i++ = value
	
	// forward - odnonapravlenniye iteratori
	//			soderjit vse svoystva input i output iteratorov
	//			moqut peremeshatsya ot nachala posledovatelnosti
	//			do konsa posledovatelnosti
	// ==, != , *i, ++i, i++, *i++
	
	// bidirectional - dvunapravlenniye iteratori
	//			soderjit vse svoystva input i output iteratorov
	//			moqut peremeshatsya ot nachala posledovatelnosti
	//			do konsa posledovatelnosti i naoborot
	// ==, != , *i, ++i, i++, *i++, --i, i--, *i--
	
	// random access - iterator proizvolnoqo dostupa
	//			soderjit vse svoystva vishe perechislennix iteratorov
	//			moqut peremeshatsya ot nachala posledovatelnosti
	//			do konsa posledovatelnosti i naoborot
	// ==, !=, =, *i, ++i, i++, *i++, --i, i--, *i--,
	// i+=n, i+n, i-=n, i-n, i1-i2, i[n],
	// i1<i2, i1<=i2, i1>i2, i1>=i2
}