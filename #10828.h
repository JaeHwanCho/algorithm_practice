#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_10828()
{
	int n, temp;
	string command;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> temp;
			v.push_back(temp);
		}
		else if (command == "pop") {
			if (v.size() == 0)
				cout << "-1\n";
			else {
 				cout << v.at(v.size() - 1) << "\n";
				v.pop_back();
			}
		}
		else if (command == "size") {
			cout << v.size() << "\n";
		}
		else if (command == "empty") {
			if (v.size() == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (command == "top") {
			if (v.size() == 0)
				cout << "-1\n";
			else
				cout << v.at(v.size() - 1) << "\n";
		}
	}
	return 0;
}