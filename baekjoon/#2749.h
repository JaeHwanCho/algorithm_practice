#include <iostream>

using namespace std;

int num_2749() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;

    cin >> n;
    
    n %= 1500000;

    long long a = 0;
    long long b = 1;
    long long temp;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    else if (n == 1) {
        cout << 1;
        return 0;
    }
    else {
        for (long long i = 1; i < n; i++) {
            temp = a + b;
            a = b;
            b = temp;
            b %= 1000000;
        }
    }

    cout << b;
    return 0;
}