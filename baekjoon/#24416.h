#include <iostream>
#include <vector>

using namespace std;

int f_24416[10000001];
int f1_24416 = 0;
int f2_24416 = 0;

int fib_24416(int n) {
	if (n == 1 || n == 2) {
		f1_24416++;
		return 1;
	}
	else return (fib_24416(n - 1) + fib_24416(n - 2));
}

int fibonacci_24416(int n) {
	f_24416[1] = 1;
	f_24416[2] = 1;

	if (n > 2) {
		for (int i = 3; i <= n; i++) {
			f_24416[i] = f_24416[i - 1] + f_24416[i - 2];
			f2_24416++;
		}
	}
	return f_24416[n];
}

int num_24416() {
	int n;

	cin >> n;

	fib_24416(n);
	fibonacci_24416(n);

	cout << f1_24416 << " " << f2_24416;

	return 0;
}
