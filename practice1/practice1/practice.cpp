#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec(2,9);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	vector<int>::iterator it = find(vec.begin(), vec.end(), 2);
	if(it != vec.end())
		vec.erase(it);
	vec.insert(it, 2, 1);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;
	system("pause");
}