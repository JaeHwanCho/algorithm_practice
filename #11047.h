#include <iostream>

using namespace std;

int num_11047() {

	int coin, count;
	int coins[11];
	int temp = 0;
	int result = 0;

	scanf("%d %d", &coin, &count);

	for (int i = 0; i < coin; i++) {
		scanf("%d", &coins[i]);
	}
	for (int i = coin; i > 0; i--) {
		while (1) {
			if (count / coins[i-1] == 0)
				break;
			temp = count / coins[i-1];
			result += temp;
			count = count - temp * coins[i-1];
		}
	}
	printf("%d", result);

	return 0;
}