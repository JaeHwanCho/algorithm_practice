#include <iostream>

using namespace std;

int* cache_1904;


int num_1904()
{
	int num;
	cin >> num;

	cache_1904 = new int[num + 1];

	cache_1904[0] = 1;
	cache_1904[1] = 1;

	for (int i = 2; i < num + 1; i++)
		cache_1904[i] = (cache_1904[i - 1] + cache_1904[i - 2]) % 15746;

	cout << cache_1904[num];

	delete[]cache_1904;

	return 0;
}