#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> matrixMultiple_10830(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> res(a.size(), vector<int>(a.size(), 0));

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			res[i][j] = 0;

			for (int cnt = 0; cnt < a.size(); cnt++) {
				res[i][j] += (a[i][cnt] * b[cnt][j]);
				res[i][j] %= 1000;
			}
		}
	}

	return res;
}

vector<vector<int>> matrixSquare_10830(vector<vector<int>> a, long long b) {
	if (b == 1) return a;

	// 짝수
	if (b % 2 == 0) {
		auto HalfMul = matrixSquare_10830(a, b / 2);
		return matrixMultiple_10830(HalfMul, HalfMul);
	}
	// 홀수
	else {
		return matrixMultiple_10830(a, matrixSquare_10830(a, b - 1));
	}

}

int num_10830() {
	int n;
	long long b;

	cin >> n >> b;

	vector<vector<int>> a(n, vector<int>(n, 0)); // (int arr[n][n] 배열 선언, 0으로 초기화)

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)	{
			cin >> a[i][j];
			a[i][j] %= 1000;
		} 
	}

	auto ret = matrixSquare_10830(a, b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}