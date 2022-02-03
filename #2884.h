#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;


int num_2884()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int hour, minute;

	cin >> hour >> minute;

	if (minute >= 45)
		minute -= 45;
	else if (hour != 0) {
		hour -= 1;
		minute += 15;
	}
	else {
		hour = 23;
		minute += 15;
	}
	cout << hour << " " << minute;

	return 0;
}