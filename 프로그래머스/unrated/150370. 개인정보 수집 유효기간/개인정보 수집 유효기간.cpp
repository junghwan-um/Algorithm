#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s, char c) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, c)) {
        vec.push_back(temp);
    }
    return vec;
}

int total(string today) {
    vector<string> t = split(today, '.');
    int to = (stoi(t[0]) - 1) * 28 * 12 + stoi(t[1]) * 28 + stoi(t[2]);
    return to;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    vector<string> t = split(today, '.');
    int to = total(today);
    
    map<string, int> mp;
    for (auto &e : terms) {
        vector<string> temp;
        temp = split(e, ' ');
        mp[temp[0]] = stoi(temp[1]);
    }
    
    int cnt = 1;
    for (auto &e : privacies) {
        vector<string> temp;
        temp = split(e, ' ');
        int date = total(temp[0]) + mp[temp[1]] * 28;
        if (date <= to) answer.push_back(cnt);
        ++cnt;
    }
    
    return answer;
}