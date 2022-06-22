#include <iostream>

using namespace std;

int num_9461()
{
	long long cache[101]{};

	int cnt;
	int num;
	int max = 6;

	cin >> cnt;

	cache[1] = 1;
	cache[2] = 1;
	cache[3] = 1;
	cache[4] = 2;
	cache[5] = 2;
	cache[6] = 3;

	for (int i = 0; i < cnt; i++) {
		cin >> num;
		if (cache[num] == 0) {
			for (int i = max + 1; i < num + 1; i++) {
				cache[i] = cache[i - 1] + cache[i - 5];
			}
			if (max < num)
				max = num;
			cout << cache[num] << "\n";
		}
		else
			cout << cache[num] << "\n";
	}

	return 0;
}