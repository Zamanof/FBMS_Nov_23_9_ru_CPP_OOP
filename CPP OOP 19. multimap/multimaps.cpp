#include<iostream>
#include<map>

using namespace std;

template<class Container>
void show(Container map) {
	for (auto item : map) {
		cout << "City:\t\t" << item.first << '\n'
			<< "Car index:\t" << item.second << endl << endl;
	}
}


int main() {
	map<string, int> cityIndex;
	multimap<string, int> mutiCityIndex;
	cityIndex["Baku"] = 10;
	cityIndex["Sumqayit"] = 50;
	cityIndex["Ganja"] = 20;
	cityIndex["Bilasuvar"] = 12;
	cityIndex["Goranboy"] = 22;
	cityIndex["Gubadli"] = 39;
	cityIndex["Masalli"] = 44;
	/*show(cityIndex);*/
	mutiCityIndex.insert(make_pair("Baku", 10));
	mutiCityIndex.insert(pair<string, int> ("Sumgayit", 50));
	mutiCityIndex.insert(make_pair("Bilasuvar", 12));
	mutiCityIndex.insert(make_pair("Ganja", 22));
	mutiCityIndex.insert(make_pair("Baku", 90));
	mutiCityIndex.insert(make_pair("Baku", 77));
	mutiCityIndex.insert(make_pair("Baku", 99));

	/*show(mutiCityIndex);*/

	for (auto i = mutiCityIndex.lower_bound("Baku"); 
		i != mutiCityIndex.upper_bound("Baku"); i++)
	{
		cout << "City:\t\t" << i->first << '\n' << "Car index:\t" << i->second << endl << endl;
	}
	cout << mutiCityIndex.count("Baku") << endl;
}