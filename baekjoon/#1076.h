#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int color_1076(string str) {
	if (str == "black")
		return 0;
	else if (str == "brown")
		return 1;
	else if (str == "red")
		return 2;
	else if (str == "orange")
		return 3;
	else if (str == "yellow")
		return 4;
	else if (str == "green")
		return 5;
	else if (str == "blue")
		return 6;
	else if (str == "violet")
		return 7;
	else if (str == "grey")
		return 8;
	else if (str == "white")
		return 9;
	return 0; // VS code에서 에러메세지 없애기 위해.
}

int num_1076()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b, c;
	cin >> a >> b >> c;

	long long res = (color_1076(a) * 10 + color_1076(b)) * pow(10, color_1076(c));

	cout << res;

	return 0;
}