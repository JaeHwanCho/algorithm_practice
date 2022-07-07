#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

long long gcd_3955(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd_3955(b, a % b);
}
long long extend_gcd_3955(long long r0, long long r1) {
	long long r2 = 0;
	long long q = 0;
	long long t = 0, t1 = 0, t2 = 1;

	while (r1 != 0) {
		q = r0 / r1;
		r2 = r0 % r1;
		t = t1 - q * t2;
		r0 = r1;
		r1 = r2;
		t1 = t2;
		t2 = t;
	}
	return t1;
}

int num_3955()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long k, c;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k >> c;

		if (k == 1 && c == 1) {
			cout << 2 << "\n";
			continue;
		}
		else if (k == 1) {
			cout << 1 << "\n";
			continue;
		}
		else if (c == 1)
		{
			if (k + 1 > 1000000000)
				cout << "IMPOSSIBLE\n";
			else
				cout << k + 1 << "\n";
			continue;
		}
		else if (gcd_3955(k, c) != 1) {
			cout << "IMPOSSIBLE\n";
			continue;
		}

		long long result = extend_gcd_3955(k, c);

		while (result < 0)
			result += k;

		if (result > 1000000000)
			cout << "IMPOSSIBLE" << "\n";
		else
			cout << result << "\n";

	}

	return 0;
}