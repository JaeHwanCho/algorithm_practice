#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

pair<int, bool> actCommand_3425(vector<pair<string, int>> v, int num) { // 결과값, 에러여부
    stack<int> stk;
    bool error = false;
    stk.push(num);
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == "NUM") {
            stk.push(v[i].second);
        }
        else if (v[i].first == "POP") {
            if (stk.size() < 1) {
                error = true;
                break;
            }
            stk.pop();
        }
        else if (v[i].first == "INV") {
            if (stk.size() < 1) {
                error = true;
                break;
            }
            int temp = stk.top();
            stk.pop();
            stk.push(temp * (-1));
        }
        else if (v[i].first == "DUP") {
            if (stk.size() < 1) {
                error = true;
                break;
            }
            stk.push(stk.top());
        }
        else if (v[i].first == "SWP") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            stk.push(a);
            stk.push(b);
        }
        else if (v[i].first == "ADD") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            long long res = a + b;
            if (abs(res) > 1000000000) {
                error = true;
                break;
            }
            else {
                stk.push(res);
            }
        }
        else if (v[i].first == "SUB") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            long long res = b - a;
            if (abs(res) > 1000000000) {
                error = true;
                break;
            }
            else {
                stk.push(res);
            }
        }
        else if (v[i].first == "MUL") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            long long res = a * b;
            if (abs(res) > 1000000000) {
                error = true;
                break;
            }
            else {
                stk.push(res);
            }
        }
        else if (v[i].first == "DIV") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            if (a == 0) {
                error = true;
                break;
            }
            long long res = abs(b) / abs(a);
            if (abs(res) > 1000000000) {
                error = true;
                break;
            }
            else {
                int neg;
                if ((a > 0 && b < 0) || (a < 0 && b > 0))
                    neg = -1;
                else
                    neg = 1;
                stk.push(res * neg);
            }
        }
        else if (v[i].first == "MOD") {
            if (stk.size() < 2) {
                error = true;
                break;
            }
            long long a = stk.top();
            stk.pop();
            long long b = stk.top();
            stk.pop();
            if (a == 0) {
                error = true;
                break;
            }
            long long res = b % a;
            if (abs(res) > 1000000000) {
                error = true;
                break;
            }
            else {
                stk.push(res);
            }
        }
    }
    if (stk.size() != 1) {
        error = true;
    }

    if (error == true)
        return (make_pair(0, true));
    return (make_pair(stk.top(), false));
}

int num_3425() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        vector<pair<string, int>> v;
        string s;
        int temp;

        while (1) {
            cin >> s;
            if (s == "QUIT")
                return 0;

            if (s == "NUM") {
                cin >> temp;
                v.push_back(make_pair(s, temp));
            }
            else if (s == "END") {
                break;
            }
            else {
                v.push_back(make_pair(s, 0));
            }
        }
        cin >> temp;
        for (int i = 0; i < temp; i++) {
            int num;
            cin >> num;
            pair<int, bool> result = actCommand_3425(v, num);
            if (result.second == true) {
                cout << "ERROR\n";
            }
            else {
                cout << result.first << "\n";
            }
        }
        cout << "\n";
    }
}