#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial_11050(int n) {
	if (n == 1 || n == 0)
		return 1;
	else
		return n * factorial_11050(n - 1);
}

int num_11050()
{
	int n, k;

	cin >> n >> k;

	cout << factorial_11050(n) / factorial_11050(k) / factorial_11050(n-k);

	return 0;
}