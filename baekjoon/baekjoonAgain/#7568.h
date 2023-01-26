#include <iostream>

using namespace std;


int again_7568() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int h[51]{};
	int w[51]{};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> w[i] >> h[i];
	}

	for (int i = 0; i < n; i++) {
		int res = 1;
		for (int j = 0; j < n; j++) {
			if (h[i] < h[j] && w[i] < w[j]) {
				res++;
			}
		}
		cout << res << " ";
	}

	return 0;
}