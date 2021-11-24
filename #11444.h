#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<long long>> matrixMultiple_11444(vector<vector<long long>> a, vector<vector<long long>> b) {
	vector<vector<long long>> res(a.size(), vector<long long>(a.size(), 0));

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			res[i][j] = 0;

			for (int cnt = 0; cnt < a.size(); cnt++) {
				res[i][j] += (a[i][cnt] * b[cnt][j]);
				res[i][j] %= 1000000007;
			}
		}
	}

	return res;
}

vector<vector<long long>> matrixSquare_11444(vector < vector < long long >> a, long long b) {
	if (b == 1) return a;

	// 짝수
	if (b % 2 == 0) {
		auto HalfMul = matrixSquare_11444(a, b / 2);
		return matrixMultiple_11444(HalfMul, HalfMul);
	}
	// 홀수
	else {
		return matrixMultiple_11444(a, matrixSquare_11444(a, b - 1));
	}

}

int num_11444() {
	long long b;

	cin >> b;

	vector<vector<long long>> a(2, vector<long long>(2, 0)); // (int arr[n][n] 배열 선언, 0으로 초기화)

	a[0][0] = 1;
	a[0][1] = 1;
	a[1][0] = 1;
	a[1][1] = 0;

	auto ret = matrixSquare_11444(a, b);

	cout << ret[0][1];
	return 0;
}