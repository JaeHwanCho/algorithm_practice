#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> matching;
    vector<pair<string, string>> result;
    
    for (int i = 0; i < record.size(); i++) {
        int orderLoc, idLoc;
        string order = "";
        string id = "";
        string nickname = "";
        
        for (int j = 0; j < record[i].size(); j++) {
            if (record[i][j] == ' ') {
                orderLoc = j;
                break;
            }
        }
        
        order = record[i].substr(0, orderLoc);
        if (order == "Enter" || order == "Change") {
            for (int j = orderLoc + 1; j < record[i].size(); j++) {
                if (record[i][j] == ' ') {
                    idLoc = j;
                    id = record[i].substr(orderLoc + 1, idLoc - orderLoc - 1);
                    nickname = record[i].substr(idLoc + 1, record[i].size() - orderLoc - 1);
                    break;
                }
            }
        } else {
            id = record[i].substr(orderLoc + 1, record[i].size() - orderLoc - 1);
        }
        
        if (order == "Enter") {
            matching[id] = nickname;
            result.push_back(make_pair(id, "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù."));
        } else if (order == "Leave") {
            result.push_back(make_pair(id, "´ÔÀÌ ³ª°¬½À´Ï´Ù."));
        } else {
            matching[id] = nickname;
        }
        
    }
    
    for (int i = 0; i < result.size(); i++) {
        answer.push_back(matching[result[i].first] + result[i].second);
    }
    
    return answer;
}