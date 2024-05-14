#include<iostream>
#include<map>
#include<vector>

using namespace std;

template<class K, class V>
void showMap(map<K, V> map)
{
	cout << "\n";
	/*for (auto item : map)
	{
		cout << "Key: " << item.first << " Value: " << item.second << endl;
	}*/

	auto itera = map.begin();
	for (; itera != map.end(); itera++)
	{
		cout << "Key = " << itera->first << " Value = " << itera->second << endl;
	}

	cout << "\n\n";
}

int main() {
	map<int, int> mp;
	vector<int> vec;

	/*cout << "vector max.size() = " << vec.max_size() << endl;
	cout << "map max.size() = " << mp.max_size() << endl;*/

	/*int value{}, key{};
	cout << "Enter key: ";
	cin >> key;
	cout << "Enter value: ";
	cin >> value;

	pair<int, int> element(key, value);
	mp.insert(element);*/

	mp.insert(make_pair(64, 78));
	showMap(mp);
	cout << mp[64] << endl;
	mp[64] = 365;
	showMap(mp);

	cout << mp[6] << endl;
	showMap(mp);

	mp[45] = 454;
	showMap(mp);


	/*map<string, vector<int>> new_map;

	vector<int> vec1{ 2, 9, 45, 8 };
	new_map["first"] = vec1;
	new_map["second"] = {65, 78, 98, 44, 6};

	for (size_t i = 0; i < new_map["first"].size(); i++)
	{
		cout << new_map["first"][i]<<' ';
	}
	cout << "\n\n";

	for (size_t i = 0; i < new_map["second"].size(); i++)
	{
		cout << new_map["second"][i] << ' ';
	}
	cout << "\n\n";*/


	/*map<vector<int>, string> my_map;
	my_map[{2, 5}] = "Salam";
	cout << my_map[{2, 5}] << endl;*/
}