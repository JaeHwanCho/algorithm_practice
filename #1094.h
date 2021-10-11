#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1094()
{
	int goal;
	int length = 64;
	int count = 0;
	
	cin >> goal;

	while (goal != 0) {
		if (length > goal)
			length /= 2;
		else {
			goal -= length;
			count++;
		}
	}
	cout << count;

	return 0;
}