#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_2960()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int arr[1001]{};

	cin >> n >> k;

	int pos, tempPos, tempMul;
	int count = 0;

	while (1) {
		pos = 2;
		while (1) {
			if (arr[pos] == 0)
				break;
			pos++;
		}
		tempPos = pos;
		tempMul = 1;

		while (pos <= n) {
			if (arr[pos] == 0) {
				arr[pos] = -1;
				count++;
			}
			if (count == k) {
				cout << pos;
				return 0;
			}
			tempMul++;
			pos = tempPos * tempMul;
		}
	}
	
	return 0;
}