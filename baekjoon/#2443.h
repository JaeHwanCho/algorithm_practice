#include <iostream>

using namespace std;

int num_2443() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int k = i + 1; k < n * 2 - i; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}