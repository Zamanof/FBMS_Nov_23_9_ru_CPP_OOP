#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<class T>
void show(vector<T> vec);

int main() {
	srand(time(NULL));
	vector<int> vec(20);
	int s{ 10 }, e{ 90 };
	generate_n(vec.begin(), vec.size(),
		[s, e]() {return rand() % (e - s + 1) + s; });
	show(vec);



	//1. Non modify operations

	// for_each		- vipolnyayet operasii dlya kajdoqo elementa posledovatelnosti

	// find			- vozvrashayet iterator na pervoye vxojdeniye iskomoqo elementa,
	// 					esli element otsustvuyet vozvrashayet .end() iterator

	// find_if		- vozvrashayet iterator na pervoye vxojdeniye iskomoqo elementa po predikatu,
	// 					esli element otsustvuyet vozvrashayet .end() iterator

	// count		- vozvrashayet kolichestvo iskomoqo elementa
	/*cout << count(vec.begin(), vec.end(), 65) << endl;*/

	// count_if		- vozvrashayet kolichestvo iskomoqo elementa po predikatu
	/*cout << count_if(vec.begin(), vec.end(), [](int n) {return n > 30; }) << endl;
	cout << count_if(vec.begin(), vec.end(), [](int n) {return n % 3 == 0; }) << endl;
	cout << count_if(vec.begin(), vec.end(), [](int n)
		{
			if (n < 0) return false;
			if (n == 1) return true;
			for (size_t i = 2; i < n/2; i++)
			{
				if (n % i == 0) return false;
			}
			return true;
		}) << endl;*/

	// search		- vozvrashayet iterator na pervoye vxojdeniye iskomoy podpoledovatelnosti,
	// 					esli element otsustvuyet vozvrashayet .end() iterator
	/*vector<int> numbs{ 1,2,3,4,5 };
	vector<int> subNumbs{ 3, 4, 5 };

	auto srch = search(numbs.begin(), numbs.end(), subNumbs.begin(), subNumbs.end());
	for (auto i = srch; i < numbs.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << '\n';*/

	// search_n		- vozvrashayet iterator na pervoye vxojdeniye iskomoy podpoledovatelnosti,
	// 					sostayashuyu iz n povtoreniy v posledovatelnosti


	// 2. Modified operations

	// copy			- kopiruyet posledovatelnost nachinaya s pervoqo elementa

	// copy_if		- kopiruyet posledovatelnost po predikatu

	// swap			- menyaet mestami znacheniya dvux elementov
	/*int a{ 5 }, b{ 75 };
	cout << "a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;*/

	// replace		- zamenyaet elementi s ukazannim znacheniyem
	/*replace(vec.begin(), vec.end(), 15, 99);
	show(vec);*/

	// replace_if	- zamenyaet elementi po predikatu
	/*replace_if(vec.begin(), vec.end(), [](int n) { return n % 2 == 0; }, 0);
	show(vec);*/

	// replace_copy		- kopiruyet zamenyaya elementi

	// replace_copy_if	- kopiruyet zamenyaya elementi po predikatu

	// fill				- zamenyayet vse elementi ukazannim znacheniyem
	/*fill(vec.begin(), vec.end(), 56);
	show(vec);*/

	// remove			- udalyayet elementi s ukazannim znacheniyem

	// remove_if		- udalyayet elementi po predikatu

	/*auto rmv = remove_if(vec.begin(), vec.end(), [](int n) {return n % 2 == 0; });
	vec.erase(rmv, vec.end());
	show(vec);*/

	// remove_copy		- kopiruyet posledovatelnost udaliv elementi s ukazannim znacheniyem

	// remove_copy_if	- kopiruyet posledovatelnost udaliv elementi po predikatu

	// reverse			- menayayet poryadok posledovatelnosti na obratniy
	/*reverse(vec.begin(), vec.end());
	show(vec);*/

	// reverse_copy		- kopiruet posledovatelnost menayaya poryadok posledovatelnosti na obratniy

	// random_shuffle	- randomno peretasuyet elementi
	/*random_shuffle(vec.begin(), vec.end());
	show(vec);*/

	// transform		- vipolnyayet zadannuyu operasiyu nad kajdim elementom
	/*vector<int> half;
	transform(vec.begin(), vec.end(), back_inserter(half), [](int n) {return n / 2; });
	show(half);*/
	
	// unique			- udalyayet ravniye sosedniye elementi permeshaya ostalniye elementi nalevo 
	/*vector<int> nums{ 1,2,3,3,3,5,76,82,45,45,12 };
	show(nums);
	unique(nums.begin(), nums.end());
	show(nums);*/

	// unique_copy			- kopiruyet udalyaya ravniye sosedniye elementi
	

	// 3. sort operations
	
	// sort					- sortirovka
	
	// partial_sort			- sortirovka opredelennoy chasti posledovatelnosti
	
	// stable_sort			- sortirovka soxraneniyem poryadka ravnix elementov
	
	// lower_bound			- naxodit perviy element menshiy chem ukazannoye znacheniye
	
	// upper_bound   		- naxodit perviy element bolshiy chem ukazannoye znacheniye

	// binary_search		- proveryayet est li zadanniy element v sortirovannoy posledovatelnosti

	/*sort(vec.begin(), vec.end(), [](int l, int r) {return l < r; });
	show(vec);
	auto find = binary_search(vec.begin(), vec.end(), 36);
	if (find) 
	{
		cout << "36 in this vector" << endl;
	}
	else 
	{
		cout << "36 not found" << endl;
	}*/

	// merge				- slivayet dve otsortirovanniye posledovatelnosti

	
	// 4. Rabota v mnojestvami
	
	// includes				-	proverka na vxojdeniye
	
	// set_union			-	obyedneniye mnojestv
	
	// set_intersection		-	peresecheniye mnojestv

	// set_differnce		-	raznost mnojestv


	// 5. Minimum i maximum
	
	// min					- menshe iz dvux
	// max					- bolshe iz dvux
	// min_element			- naimenshiy element v posledovatelnosti
	// max_element			- naibolshiy element v posledovatelnosti

	// 6. Perestonovki
	
	// next_permutation		- sleduyushaya perestonovka v leksikoqraficheskom poryadke
	// prev_permutation		- predidushaya perestonovka v leksikoqraficheskom poryadke

}

template<class T>
void show(vector<T> vec) {
	for (T item : vec)
	{
		cout << item << ' ';
	}
	cout << '\n';
}