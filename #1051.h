#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int num_1051() {
	int height, width;
	int length;
	int box[51][51];
	int result = 1;

	scanf("%d %d", &height, &width);

	if (height > width)
		length = width;
	else length = height;

	for (int i = 0; i < height; i++) 
		for (int j = 0; j < width; j++)
			scanf("%1d", &box[i][j]);

	for (int i = 0; i < height - 1; i++) {
		for (int j = 0; j < width - 1; j++) {
			for (int k = 1; k < length; k++) {
				if ((i + k < height) && (j + k < width)) {
					if (box[i][j] == box[i][j + k] && box[i][j] == box[i + k][j] && box[i][j] == box[i + k][j + k]) {
						if (result < k + 1) {
							result = k + 1;
						}
					}
				}
			}
		}
	}

	printf("%d", result*result);

	return 0;
}