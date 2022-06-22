#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long func_11401(long long a, long long b) {
	long long temp, res;

	if (b == 0)
		return 1;

	temp = func_11401(a, b / 2);
	temp %= 1000000007;
	res = temp * temp;
	res %= 1000000007;

	if (b % 2)
		return res * a;
	else
		return res;
}

int num_11401() {
	int n, k;
	long long a = 1, b = 1;
	long long res;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		a *= i;
		a %= 1000000007;
	}
	for (int i = 1; i <= k; i++) {
		b *= i;
		b %= 1000000007;
	}
	for (int i = 1; i <= n - k; i++) {
		b *= i;
		b %= 1000000007;
	}

	res = (a * (func_11401(b, 1000000005) % 1000000007)) % 1000000007;

	cout << res;

	return 0;
}