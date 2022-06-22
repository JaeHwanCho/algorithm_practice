#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_10773()
{
	int k;
	int temp;
	vector<int> v;

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> temp;

		if (temp == 0)
			v.pop_back();
		else
			v.push_back(temp);
	}

	temp = 0;

	for (int i = 0; i < v.size(); i++) {
		temp += v.at(i);
	}

	cout << temp;

	return 0;
}