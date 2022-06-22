#include <iostream>
#include<algorithm>

using namespace std;

int nums_1932[502][502];
int sum_1932[502][502];

int num_1932()
{
	int cnt;
	int temp;
	int maxx = 0;


	cin >> cnt;
	
	for (int i = 1; i < cnt + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			cin >> nums_1932[i][j];
		}
	}

	for (int i = 1; i < cnt + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			sum_1932[i][j] = nums_1932[i][j] + max(sum_1932[i - 1][j - 1], sum_1932[i - 1][j]);
		}
	}
	for (int i = 1; i < cnt + 1; i++) {
		if (sum_1932[cnt][i] > maxx)
			maxx = sum_1932[cnt][i];
	}

	cout << maxx;

	return 0;
}