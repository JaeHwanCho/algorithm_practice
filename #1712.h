#include <stdio.h>
#include <iostream>

using namespace std;

int num_1712() {
	int A, B, C;
	int result = 0;

	scanf("%d %d %d", &A, &B, &C);

	if (C == B) {
		printf("-1");
		return 0;
	}

	result = A / (C - B);

	result++;

	if (result < 0)
		result = -1;

	printf("%d", result);

	return 0;
}