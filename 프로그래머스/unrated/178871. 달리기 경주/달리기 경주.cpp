#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> mp;
    map<int, string> mp2;
    for (int i = 0; i < players.size(); ++i) {
        mp[players[i]] = i;
        mp2[i] = players[i];
    }
    for (const auto &e : callings) {
        string change = mp2[mp[e] - 1];
        int change2 = mp[change];
        --mp[e]; mp2[change2] = e;
        ++mp[change]; mp2[change2 + 1] = change;
    }
    for (const auto &e : mp2) answer.push_back(e.second);
    return answer;
}