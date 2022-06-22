#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int board_1992[65][65];

void func_1992(int n, int a, int b) {
	bool check = true;
	int res;


	if (n == 1) {
		if (board_1992[a][b] == 0)
			cout << "0";
		else
			cout << "1";
		return;
	}

	res = board_1992[a][b];
	for (int i = a; i < a + n; i++) {
		for (int j = b; j < b + n; j++) {
			if (board_1992[i][j] != res) {
				check = false;
				break;
			}
		}
		if (check == false)
			break;
	}

	if (check) {
		cout << board_1992[a][b];
	}
	else {
		cout << "(";
		func_1992(n / 2, a, b);
		func_1992(n / 2, a, b + n / 2);
		func_1992(n / 2, a + n / 2, b);
		func_1992(n / 2, a + n / 2, b + n / 2);
		cout << ")";
	}
}

int num_1992() {
	int n;
	string str;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < n; j++) {
			board_1992[i][j] = str[j] - '0';
		}
	}
	func_1992(n,0,0);
		
	return 0;
}