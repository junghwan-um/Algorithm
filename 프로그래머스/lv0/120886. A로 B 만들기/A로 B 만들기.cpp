#include <bits/stdc++.h>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    map<char, int> mp;
    for (const auto &e : before) ++mp[e];
    for (const auto &e : after) {
        if (!mp[e]) return 0;
        --mp[e];
    }
    return 1;
}