#include <iostream>

using namespace std;

int num_10989() {

	int n;
	int count[10001] = { 0, };
	int temp = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);;
		count[temp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}