#include <iostream>

using namespace std;

int num_2908()
{
	int a, b;
	int temp;

	cin >> a >> b;

	temp = (a / 100) + ((a / 10) % 10 * 10) + (a % 10 * 100); 
	a = temp;
	temp = (b / 100) + ((b / 10) % 10 * 10) + (b % 10 * 100);
	b = temp;
	
	if (a > b)
		temp = a;
	else
		temp = b;

	cout << temp;

	return 0;
}