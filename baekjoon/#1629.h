#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long func_1629(long long a, long long b, long long c) {
	long long temp, res;

	if (b == 0)
		return 1;

	temp = func_1629(a, b / 2, c);
	res = temp * temp;
	res %= c;

	if (b % 2)
		return res * a % c;
	else
		return res;
}

int num_1629() {
	long long a, b, c;
	long long res;

	cin >> a >> b >> c;
	
	res = func_1629(a,b,c);

	cout << res;
		
	return 0;
}