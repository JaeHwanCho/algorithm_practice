#include <iostream>
#include <string>

using namespace std;

int num_10809()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string s;

	cin >> s;
	for (int i = 0; i < alphabet.length(); i++) {
		cout << (int)s.find(alphabet[i]) << " ";
	}

	return 0;
}