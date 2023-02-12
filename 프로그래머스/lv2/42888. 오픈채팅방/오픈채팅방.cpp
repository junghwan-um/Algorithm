#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(temp);
    }
    return vec;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> id;
    vector<pair<string, int>> log; 
    for (const auto &e : record) {
        vector<string> token = split(e);
        if (token[0] == "Enter") {
            id[token[1]] = token[2];
            log.push_back({token[1], 1});
        }
        else if (token[0] == "Leave") log.push_back({token[1], -1});
        else id[token[1]] = token[2];
    }
    for (const auto &e : log) {
        string res = id[e.first];
        if (e.second == 1) res += "님이 들어왔습니다.";
        else res += "님이 나갔습니다.";
        answer.push_back(res);
    }
    return answer;
}