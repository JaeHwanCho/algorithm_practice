#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_2740() {
	int a, b, n, m;
	int arr_1[101][101]{};
	int arr_2[101][101]{};
	int res[101][101]{};

	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)	{
			cin >> arr_1[i][j];
		} 
	}

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr_2[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < m; j++) {
			
			for (int k = 0; k < b; k++) {
				res[i][j] += arr_1[i][k] * arr_2[k][j];
			}
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < m; j++) {
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}