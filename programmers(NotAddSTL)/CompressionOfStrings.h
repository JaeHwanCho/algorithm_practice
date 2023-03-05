#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = s.size();
    
    for (int divSize = 1; divSize < s.size()/2 + 1; divSize++) {
        string result = "";
        string tempString;
        int count = 1;
        
        for (int i = 0; i < s.size() + 1;) {
            if (tempString == s.substr(i, divSize))
                count++;
            else {
                if (count == 1)
                    result += tempString;
                else
                    result += (to_string(count) + tempString);
                tempString = s.substr(i, divSize);
                count = 1;
            }
            i += divSize;
        }
        result += s.substr((s.size() / divSize) * divSize);
        answer = min((int)result.size(), answer);
    }
    
    return answer;
}