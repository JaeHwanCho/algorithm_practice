#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_2839()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num, temp, result = -1;

	cin >> num;

	temp = num % 5;

	if (temp == 0) {
		result = num / 5;
	}
	else if (temp == 1) {
		if (num >= 6) {
			num -= 6;
			result = num / 5;
			result += 2;
		}
		else
			result = -1;
	}
	else if (temp == 2) {
		if (num >= 12) {
			num -= 12;
			result = num / 5;
			result += 4;
		}
	}
	else if (temp == 3) {
		result = num / 5;
		result += 1;
	}
	else if (temp == 4) {
		if (num >= 9) {
			result -= 9;
			result = num / 5;
			result += 2;
		}
		else
			result = -1;
	}

	cout << result;

	return 0;
}