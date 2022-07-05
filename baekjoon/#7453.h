#include <iostream>
#include <algorithm>

using namespace std;

long long arr1_7453[4001][4]{};
long long arr2_7453[4001 * 4001]{};
long long arr3_7453[4001 * 4001]{};

int num_7453() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    long long result = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr1_7453[i][0] >> arr1_7453[i][1] >> arr1_7453[i][2] >> arr1_7453[i][3];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr2_7453[n * i + j] = arr1_7453[i][0] + arr1_7453[j][1];
            arr3_7453[n * i + j] = arr1_7453[i][2] + arr1_7453[j][3];
        }
    }

    sort(arr3_7453, arr3_7453 + n * n);

    for (int i = 0; i < n * n; i++) {
        result += upper_bound(arr3_7453, arr3_7453 + n * n, -1 * arr2_7453[i]) - lower_bound(arr3_7453, arr3_7453 + n * n, -1 * arr2_7453[i]);
    }
    cout << result;
    
    return 0;
}