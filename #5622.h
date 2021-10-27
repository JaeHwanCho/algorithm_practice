#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num_5622()
{
	string s;
	int result = 0;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
			result += 3;
			continue;
		}
		if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
			result += 4;
			continue;
		}
		if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
			result += 5;
			continue;
		}
		if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
			result += 6;
			continue;
		}
		if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
			result += 7;
			continue;
		}
		if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') {
			result += 8;
			continue;
		}
		if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
			result += 9;
			continue;
		}
		if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') {
			result += 10;
			continue;
		}
	}
	cout << result;

	return 0;
}