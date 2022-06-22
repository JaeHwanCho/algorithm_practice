#include <iostream>
#include <algorithm>

using namespace std;

int num_1463()
{
	int cnt = 0;
	int num;

	cin >> num;

	int* cache = new int[num + 2]();
	int temp_1 = num + 1;
	int temp_2 = num + 1;

	cache[1] = 0;
	cache[num + 1] = 1000002;

	for (int i = 2; i < num + 1; i++) {
		temp_1 = num + 1;
		temp_2 = num + 1;

		if (i % 2 == 0)
			temp_1 = i / 2;
		if (i % 3 == 0)
			temp_2 = i / 3;

		cache[i] = min(cache[temp_1], min(cache[temp_2], cache[i - 1])) + 1;
	}

	cout << cache[num] ;

	return 0;
}