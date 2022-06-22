#include <iostream>

using namespace std;

int num_2609()
{
	int temp_1, temp_2;
	int a, b;
	int gcd = 1;
	int lcm;
	
	cin >> temp_1 >> temp_2;

	if (temp_1 > temp_2) {
		a = temp_2;
		b = temp_1;
	}
	else {
		a = temp_1;
		b = temp_2;
	}

	for (int i = 1; i <= temp_1; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	lcm = a * b / gcd;

	cout << gcd << "\n" << lcm;

	return 0;
}