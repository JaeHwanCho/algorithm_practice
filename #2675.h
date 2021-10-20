#include <iostream>
#include <string>

using namespace std;

int num_2675()
{
	int n;
	int count;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> count;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < count; k++) {
				cout << str[j];
			}
		}
		cout << "\n";
	}

	return 0;
}