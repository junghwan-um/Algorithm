#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    map<char, int> mp;
    for (const auto &e : spell) ++mp[e[0]];
    for (const auto &e : dic) {
        int flag = 0;
        map<char, int> temp = mp;
        for (const auto &f : e) --temp[f];
        for (const auto &f : temp) {
            if (f.second == 1 || f.second < 0) flag = 1;
        }
        if (!flag) return 1;
    }
    return 2;
}