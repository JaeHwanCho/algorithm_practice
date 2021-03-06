#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> m;
    
    for (int i = 0; i < completion.size(); i++)
        m[completion[i]]++;
    
    for (int i = 0; i < participant.size(); i++) {
        m[participant[i]]--;
        if (m[participant[i]] < 0) {
            answer = participant[i];
            break;
        }
    }
    return answer;
}