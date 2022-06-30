#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> uidV;
    vector<string> nameV;
    vector<pair<string, string>> result;
    
    for (int i = 0; i < record.size(); i++) {
        int set = 0;
        if (record[i][0] == 'E')
            set = 1;
        else if (record[i][0] == 'L')
            set = 2;
        else if (record[i][0] == 'C')
            set = 3;
        
        string tempUidString = "";
        if (set == 1) {
            
            int uidSta = 6;
            int uidSize = 0;
            while(1) {
                if (record[i][uidSta + uidSize] == ' ') {
                    break;
                }
                uidSize++;
            }
            tempUidString = record[i].substr(uidSta, uidSize);
            int check = -1;
            for (int j = 0; j < uidV.size(); j++) {
                if (tempUidString == uidV[j]) {
                    check = j;
                    break;
                }
            }
            
            string tempNameString = "";
            for (int j = uidSta + uidSize + 1; j < record[i].size(); j++) {
                tempNameString += record[i][j];
            }
            
            if (check == -1) {
                uidV.push_back(tempUidString);
                nameV.push_back(tempNameString);
            }
            else {
                nameV[check] = tempNameString;
            }
            result.push_back(make_pair(tempUidString, "IN"));
            
        } else if (set == 2) {
            
            int uidSta = 6;
            int uidSize = 0;
            while(1) {
                if (record[i][uidSta + uidSize] == ' ') {
                    break;
                }
                uidSize++;
            }
            tempUidString = record[i].substr(uidSta, uidSize);
            result.push_back(make_pair(tempUidString, "OUT"));
            
        }
        else if (set == 3) {
            
            int check = -1;
            int uidSta = 7;
            int uidSize = 0;
            while(1) {
                if (record[i][uidSta + uidSize] == ' ') {
                    break;
                }
                uidSize++;
            }
            tempUidString = record[i].substr(uidSta, uidSize);
            
            for (int j = 0; j < uidV.size(); j++) {
                if (tempUidString == uidV[j]) {
                    check = j;
                    break;
                }
            }
            string tempNameString = "";
            for (int j = uidSta + uidSize + 1; j < record[i].size(); j++) {
                tempNameString += record[i][j];
            }
            nameV[check] = tempNameString;
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        
        int uidLoc = -1;
        for (int j = 0; j < uidV.size(); j++) {
            if (uidV[j] == result[i].first) {
                uidLoc = j;
                break;
            }
        }
        
        string tempRecordString = "";
        if (result[i].second == "IN")
            tempRecordString = nameV[uidLoc] + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
        else if (result[i].second == "OUT")
            tempRecordString = nameV[uidLoc] + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
        
        answer.push_back(tempRecordString);
    }
    
    return answer;
}