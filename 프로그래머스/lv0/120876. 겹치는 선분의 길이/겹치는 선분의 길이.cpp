#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    map<pair<int, int>, int> mp;
    for (const auto &e : lines) {
        for (int i = e[0]; i < e[1]; ++i) ++mp[{i, i + 1}];
    }
    for (const auto &e : mp) {
        if (e.second >= 2) ++answer;
    }
    return answer;
}