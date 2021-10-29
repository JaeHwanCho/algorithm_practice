#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial_11050(int n) {
	if (n == 1 || n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int num_11050()
{
	int n, k;

	cin >> n >> k;

	cout << factorial(n) / factorial(k) / factorial(n-k);

	return 0;
}