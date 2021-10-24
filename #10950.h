#include <iostream>

using namespace std;

int num_10950()
{
	int count = 0;
	int a, b;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}