#include <bits/stdc++.h>

using namespace std;

int flag;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int solution(vector<int> array) {
    map<int, int> mp;
    for (const auto &e : array) ++mp[e];
    vector<pair<int, int>> vec;
    for (const auto &e : mp) vec.push_back({e.first, e.second});
    sort(vec.begin(), vec.end(), cmp);
    if (vec[0].second != vec[1].second) return vec[0].first;
    return -1;
}