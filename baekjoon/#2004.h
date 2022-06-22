#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_2004()
{
	long long n, k;
	long long res_2 = 0;
	long long res_5 = 0;

	cin >> n >> k;
	for (long long i = 2; i <= n; i *= 2) {
		res_2 += n / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		res_5 += n / i;
	}
	for (long long i = 2; i <= k; i *= 2) {
		res_2 -= k / i;
	}
	for (long long i = 5; i <= k; i *= 5) {
		res_5 -= k / i;
	}
	for (long long i = 2; i <= n - k; i *= 2) {
		res_2 -= (n - k) / i;
	}
	for (long long i = 5; i <= n - k; i *= 5) {
		res_5 -= (n - k) / i;
	}

	cout << min(res_2, res_5);
	
	return 0;
}