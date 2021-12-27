#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_2941()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	vector<string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	cin >> str;

	for (int i = 0; i < vec.size(); i++) {
		while (str.find(vec[i]) != string::npos)
			str.replace(str.find(vec[i]), vec[i].length(), "a");
	}
	cout << str.length();

	return 0;
}