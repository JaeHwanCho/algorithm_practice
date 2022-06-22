#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int num_1541(void) {
	string line;
	int temp = 0;
	int result = 0;
	int number[51] = { 0 };
	string nums;
	int num = 0;
	int jaritsu = 0;
	char PlusOrMinus[51];
	int pom = 0;
	bool fin = false;

	cin >> line;

	for (int i = 0; i < line.length(); i++) {
		if (line[i] >= '0' && line[i] <= '9') {
			nums +=line[i];
			jaritsu++;
		}
		else {
			PlusOrMinus[pom] = line[i];
			pom++;
			fin = true;
		}
		if (fin == true || i == line.length() - 1) {
			for (int j = 0; j < jaritsu; j++) {
				number[num] =  stoi(nums);
			}
			nums = "";
			jaritsu = 0;
			num++;
			fin = false;
		}
	}
	for (int i = 0; i < pom; i++) {
		if (PlusOrMinus[i] == '-') {
			for (int j = i; j < pom; j++) {
				PlusOrMinus[j] = '-';
			}
			break;
		}
	}
	result = number[0];

	for (int i = 1; i < num; i++) {
		if (PlusOrMinus[i-1] == '-')
			temp = -1;
		else
			temp = 1;
		result += number[i] * temp;
	}
	cout << result;

	return 0;
}