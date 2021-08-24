#include <iostream>

using namespace std;

int num_7568() {
	int count;
	int height[51];
	int weight[51];
	int num;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> weight[i] >> height[i];
	}
	for (int i = 0; i < count; i++)
	{
		num = 1;
		for (int j = 0; j < count; j++)
		{
			if (weight[i] < weight[j] && height[i] < height[j]){
				num++;
			}
		}
		cout << num << " ";
	}

	return 0;
}