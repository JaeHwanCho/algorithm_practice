#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int gcd_1735(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd_1735(b, a % b);
}

int num_1735()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int up, down;

	up = a * d + b * c;
	down = b * d;

	int divValue = gcd_1735(up, down);

	cout << up / divValue << " " << down / divValue;

	return 0;
}