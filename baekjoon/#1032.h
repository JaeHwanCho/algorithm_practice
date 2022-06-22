#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1032()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string result;
	string arr[51];

	cin >> n;

	cin >> result;
	
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (result[j] != arr[i][j])
				result[j] = '?';
		}
	}

	cout << result;

	return 0;
}