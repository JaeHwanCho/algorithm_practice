#include <iostream>

using namespace std;

int fib(int a) {
	if (a < 2)
		return a;
	return fib(a - 1) + fib(a - 2);
}

int num_10870() {
	int n;
	int result;

	cin >> n;

	result = fib(n);

	cout << result;

	return 0;
}