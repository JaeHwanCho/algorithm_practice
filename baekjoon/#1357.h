#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int func_1357(int a) {
	int result = 0;

	while (a > 0) {
		result *= 10;
		result += a % 10;
		a /= 10;
	}

	return result;
}

int num_1357()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a;
	int b;
	int result;

	cin >> a >> b;

	a = func_1357(a);
	b = func_1357(b);

	result = func_1357(a + b);

	cout << result;

	return 0;
}