#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,int> a, pair<string, int> b) {
    return a.first < b.first;
}

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(temp);
    }
    return vec;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> mp;
    map<string, int> t_record;
    for (const auto &rec : records) {
        vector<string> record = split(rec);
        int t = 60 * stoi(record[0].substr(0, 2)) + stoi(record[0].substr(3));
        string number = record[1];
        if (record[2] == "IN") mp[number] = t;
        else {
            t_record[number] += (t - mp[number]);
            mp[number] = -1;
        }
    }
    for (const auto &e : mp) {
        if (e.second != -1) {
            t_record[e.first] += (60 * 23 + 59) - e.second;
        }
    }
    vector<pair<string,int>> res;
    for (const auto &e : t_record) {
        if (e.second <= fees[0]) res.push_back({e.first, fees[1]});
        else {
            int money = fees[1] + ceil((double)(e.second - fees[0]) / fees[2]) * fees[3];
            res.push_back({e.first, money});
        }
    }
    sort(res.begin(), res.end(), cmp);
    for (const auto &e :res) answer.push_back(e.second);
    return answer;
}