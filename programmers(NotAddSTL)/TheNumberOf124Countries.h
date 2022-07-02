#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while (n > 0) {
        
        int temp = n % 3;
        
        if (temp == 0) {
            answer += 52;
            n--;
        }
        else
            answer += temp + 48;
        n /= 3;
        
    }
    
    string tempString = answer;
    answer = "";
    for (int i = tempString.size() - 1; i >= 0; i--) {
        answer += tempString[i];
    }
    
    return answer;
}