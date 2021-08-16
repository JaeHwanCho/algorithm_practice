#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int num_1085() {
	int x, y, w, h;
	int result_1, result_2, result;

	cin >> x >> y >> w >> h;
	
	if (x > y)
		result_1 = y;
	else result_1 = x;

	if (w - x > h - y)
		result_2 = h - y;
	else result_2 = w - x;

	if (result_1 > result_2)
		result = result_2;
	else result = result_1;

	cout << result;

	return 0;
}