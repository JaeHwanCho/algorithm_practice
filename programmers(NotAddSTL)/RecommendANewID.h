#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    bool start = true;
    bool end = true;
    
    for (int i = 0; i < new_id.size(); i++) {
        if ('A' <= new_id[i] && new_id[i] <= 'Z') { // 1단계
            answer+=(new_id[i] + 32);
        }
        
        else if(('a' <= new_id[i] && 'z' >= new_id[i]) || ('0' <= new_id[i] && '9' >= new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') { // 2단계
            answer+=(new_id[i]);
        }
    }
    
    for (int i = 0; i < answer.size() - 1; i++) { // 3단계
        if (answer[i] == '.' && answer[i + 1] == '.') {
            answer.erase(i, 1);
            i--;
        }
    }
    
    while(answer[0] == '.') { // 4단계
        answer.erase(0, 1);
    }
    while(answer[answer.size() - 1] == '.') {
        answer.erase(answer.size() - 1, 1);
    }
    
    if (answer.size() == 0) // 5단계
        answer += 'a';
    
    while(answer.size() > 15) { // 6단계
        answer.erase(answer.size() - 1, 1);
        while(answer[answer.size() - 1] == '.') {
            answer.erase(answer.size() - 1, 1);
        }
    }
    
    while(answer.size() < 3) // 7단계
        answer += answer[answer.size() - 1];
    
    return answer;
}