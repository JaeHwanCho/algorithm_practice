#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int num_3009() {
	int rect[8];

	for (int i = 0; i < 6; i++) {
		cin >> rect[i];
	}
	
	if (rect[0] == rect[2]) {
		rect[6] = rect[4];
	}
	else if (rect[2] == rect[4]) {
		rect[6] = rect[0];
	}
	else if (rect[4] == rect[0]) {
		rect[6] = rect[2];
	}
	if (rect[1] == rect[3]) {
		rect[7] = rect[5];
	}
	else if (rect[3] == rect[5]) {
		rect[7] = rect[1];
	}
	else if (rect[5] == rect[1]) {
		rect[7] = rect[3];
	}
	cout << rect[6] << " " << rect[7] << endl;

	return 0;
}