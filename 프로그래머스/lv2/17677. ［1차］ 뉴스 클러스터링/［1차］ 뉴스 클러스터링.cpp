#include <bits/stdc++.h>

using namespace std;

const int MUL {65536};

map<string, int> change(string str1) {
    map<string, int> mp;
    for (int i = 0; i < str1.length() - 1; ++i) {
        int flag = 1;
        string str = str1.substr(i, 2);
        for (auto &e : str) {
            if (!isalpha(e)) flag = 0;
            else e = tolower(e);
        }
        if (flag) ++mp[str];
    }
    return mp;
}

int solution(string str1, string str2) {
    int answer = 0;
    map<string, int> mp1 = change(str1);
    map<string, int> mp2 = change(str2);
    map<string, int> mp = mp1;
    int total = 0, inter = 0;
    for (const auto &e : mp2) {
        if (mp[e.first]) inter += min(mp[e.first], e.second);
    }
    for (const auto &e : mp1) total += e.second;
    for (const auto &e : mp2) total += e.second;
    total -= inter;
    if (!total) return MUL;
    return MUL * ((double)(inter) / total);
}