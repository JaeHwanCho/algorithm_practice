#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_3036()
{
	int n;
	int value;
	int temp;
	int gcd = 1;

	cin >> n;

	cin >> value;
	
	for (int i = 0; i < n - 1; i++) {
		cin >> temp;

		for (int i = 1; i <= min(value, temp); i++) {
			if (value % i == 0 && temp % i == 0)
				gcd = i;
		}

		cout << value / gcd << "/" << temp / gcd << "\n";
	}

	return 0;
}