#include <iostream>
#include <math.h>

using namespace std;

int num_1003() {
	int count = 0;
	int a;
	int fibonacci[41] = { 0, 1 };
	for (int n = 2; n <= 40; n++) {
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
	}
	scanf("%d", &count);

	for(int i = 0; i < count; i++) {
		scanf("%d", &a);
		if (a == 0)
			printf("1 0\n");
		else
			printf("%d %d\n", fibonacci[a-1], fibonacci[a]);
	}
	return 0;
}