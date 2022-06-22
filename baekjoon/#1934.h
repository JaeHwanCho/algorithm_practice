#include <iostream>
#include <algorithm>

using namespace std;

int gcd_1934(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else {
		return gcd_1934(b, a % b);
	}
}

int num_1934()
{
	int n;
	int temp_1, temp_2;
	int a, b;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a * b / gcd_1934(a, b) << "\n";

	}

	return 0;
}