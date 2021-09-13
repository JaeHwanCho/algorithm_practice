#include <iostream>

using namespace std;

int num_2869()
{
	int A, B, V;

	cin >> A >> B >> V;
	cout << (int)((V - B - 1) / (A - B)) + 1;

	return 0;
}