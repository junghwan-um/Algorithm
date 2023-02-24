#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> mp;
    for (const auto &e : keymap) {
        for (int i = 0; i < e.length(); ++i) {
            if (mp[e[i]]) mp[e[i]] = min(i + 1, mp[e[i]]);
            else mp[e[i]] = i + 1;
        }
    }
    for (const auto &e : targets) {
        int res = 0, flag = 1;
        for (const auto &f : e) {
            if (!mp[f]) {
                flag = 0;
                break;
            }
            else res += mp[f];
        }
        if (!flag) answer.push_back(-1);
        else answer.push_back(res);
    }
    return answer;
}