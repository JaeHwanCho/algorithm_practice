#include <iostream>

using namespace std;

int ans[10];

void calc(int num, int degit) {
    while (num) {
        ans[num % 10] += degit;
        num /= 10;
    }
}

void count(int start, int end, int digit) {
	// 0까지
    while (start % 10 && start <= end) {
        calc(start, digit);
        start++;
    }
    if (end < start) return;

	// 9까지
    while (end % 10 != 9 && start <= end) {
        calc(end, digit);
        end--;
    }

	long long cnt = (end / 10) - (start / 10) + 1;
    for (int i = 0; i < 10; i++) {
        ans[i] += cnt * digit;
    }
    count(start / 10, end / 10, digit * 10);
}

int num_1019() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long n;

	cin >> n;
	count(1, n, 1);

	for (int i = 0; i < 10; i++) {
		cout << ans[i] << ' ';
	}

	return 0;
}