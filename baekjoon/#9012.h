#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_9012()
{
	int n;
	string temp;
	bool res = true;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.clear();
		res = true;

		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '(')
				v.push_back(0);
			else {
				if (v.size() == 0) {
					res = false;
				}
				else {
					v.pop_back();
				}
			}
		}
		if (res == true && v.size() == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}


	return 0;
}