#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_10818()
{
	int n;
	int temp;
	int maxx = -99999999;
	int minn = 99999999;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp > maxx)
			maxx = temp;
		if (temp < minn)
			minn = temp;
	}

	cout << minn << " " << maxx;

	return 0;
}