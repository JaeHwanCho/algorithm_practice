#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int num_1004() {
	int count = 0;
	int start_x = 0, start_y = 0;
	int dest_x = 0, dest_y = 0;
	int planet_count = 0;
	int planet_x[50];
	int planet_y[50];
	int planet_r[50];
	int length_x = 0, length_y = 0;
	int check_st = 0, check_de = 0;
	int result = 0;

	scanf("%d", &count);
	
	for (int i = 0; i < count; i++) {
		scanf("%d %d %d %d", &start_x, &start_y, &dest_x, &dest_y);

		scanf("%d", &planet_count);

		for (int j = 0; j < planet_count; j++) {
			scanf("%d %d %d", &planet_x[j], &planet_y[j], &planet_r[j]);
		}

		result = 0;

		for (int k = 0; k < planet_count; k++) {
			length_x = start_x - planet_x[k];
			length_y = start_y - planet_y[k];
			
			check_st = 0;
			check_de = 0;

			if ((planet_r[k] * planet_r[k]) > (length_x * length_x + length_y * length_y)) {
				check_st = 1;
			}
			
			length_x = dest_x - planet_x[k];
			length_y = dest_y - planet_y[k];

			if ((planet_r[k] * planet_r[k]) > (length_x * length_x + length_y * length_y)) {
				check_de = 1;
			}

			if (check_st == 1 && check_de == 0) {
				result++;
			}
			else if (check_st == 0 && check_de == 1) {
				result++;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}