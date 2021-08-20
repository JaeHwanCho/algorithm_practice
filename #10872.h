#include <iostream>

using namespace std;

int factorial(int a) {
	if (a == 0 || a== 1)
		return 1;
	return a * factorial(a - 1);
}

int num_10872() {
	int n;
	int result;

	cin >> n;

	cout << factorial(n);

	return 0;
}