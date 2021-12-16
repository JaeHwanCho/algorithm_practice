#include <iostream>

using namespace std;

int num_8393()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n = 0;

	cin >> n;
	cout << (n + 1) * n / 2;

	return 0;
}