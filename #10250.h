#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_10250()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c = 0;
	int h, w, n;
	int ans_h, ans_w;

	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) {
			ans_h = h;
			ans_w = n / h;
		}
		else {
			ans_h = n % h;
			ans_w = n / h + 1;
		}

		if (ans_w < 10)
			cout << ans_h << "0" << ans_w << "\n";
		else
			cout << ans_h << ans_w << "\n";

	}

	return 0;
}