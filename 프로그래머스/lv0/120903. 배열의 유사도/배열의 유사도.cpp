#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    map<string, int> mp;
    for (const auto &e : s1) ++mp[e];
    for (const auto &e : s2) ++mp[e];
    for (const auto &e : mp) if (e.second > 1) ++answer;
    return answer;
}