#include <stdio.h>
#include <iostream>

using namespace std;

int num_4153() {
	int A, B, C;

	while (1) {
		scanf("%d %d %d", &A, &B, &C);

		if (A == 0 && B == 0 && C == 0)
			break;

		if (A * A + B * B == C * C)
			printf("right\n");
		else if (B * B + C * C == A * A)
			printf("right\n");
		else if (A * A + C * C == B * B)
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}