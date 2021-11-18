#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int board_2630[129][129];
int resBlue_2630 = 0;	// 1
int resWhite_2630 = 0;	// 0

int func_2630(int n, int a, int b) {
	bool check = true;
	int res = board_2630[a][b];
	if (n == 1) {
		if (board_2630[a][b] == 1)
			resBlue_2630++;
		else
			resWhite_2630++;
		return 0;
	}
	
	for (int i = a; i < a + n; i++) {
		for (int j = b; j < b + n; j++) {
			if (board_2630[i][j] != res) {
				check = false;
				break;
			}
		}
		if (check == false)
			break;
	}
	if (check == true) {
		if (res == 1)
			resBlue_2630++;
		else
			resWhite_2630++;
		return 0;
	}
	else
		return func_2630(n / 2, a, b) + func_2630(n / 2, a + (n / 2), b) + func_2630(n / 2, a, b + (n / 2)) + func_2630(n / 2, a + (n / 2), b + (n / 2));
}

int num_2630() {
	int n;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board_2630[i][j];
		}
	}
	func_2630(n,0,0);

	cout << resWhite_2630 << "\n" << resBlue_2630;
	
	return 0;
}