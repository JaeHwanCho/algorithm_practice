#include <iostream>

using namespace std;

int num_1110()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int res = 99;
	int count = 1;

	cin >> n;

	if (n < 10) {
		res = 10 * n + n;
	}
	else {
		res = ((n % 10 + n / 10) % 10 + n % 10 * 10);
	}
	while (n != res) {
		if (res < 10) {
			res = 10 * res + res;
		}
		else {
			res = ((res % 10 + res / 10) % 10 + res % 10 * 10);
		}
		count++;
	}
	cout << count;

	return 0;
}