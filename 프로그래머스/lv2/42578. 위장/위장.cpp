#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> mp;
    for (const auto &e : clothes) ++mp[e[1]];
    int answer = 1;
    for (const auto &e : mp) answer *= e.second + 1;
    return answer - 1;
}