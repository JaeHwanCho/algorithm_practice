#include <iostream>

using namespace std;

int num_11720()
{
	int n;
	int num;
	int result = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%1d", &num);
		result += num;
	}

	cout << result;

	return 0;
}