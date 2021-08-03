#include <stdio.h>
#include <iostream>

using namespace std;

int num_2438() {
	int count = 0;
	int i, j;
	scanf("%d", &count);
	
	for (i = 1; i < count+1; i++) {
		for (j = 0; j < i; j++)
			printf("*");
		if (j != count)
			printf("\n");
	}
	return 0;
}