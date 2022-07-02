#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for (int i = 0; i < completion.size(); i++) {
        for (int j = 0; j < participant.size(); j++) {
            if (completion[i] == participant[j]) {
                participant[j] = "-1";
                break;
            }
        }
    }
    for (int i = 0; i < participant.size(); i++) {
        if (participant[i] != "-1") {
            answer = participant[i];
        }            
    }
    
    return answer;
}