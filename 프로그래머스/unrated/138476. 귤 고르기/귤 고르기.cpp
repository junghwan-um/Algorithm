#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b) {
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> mp;
    for (const auto &e : tangerine) ++mp[e];
    vector<pair<int,int>> vec;
    for (const auto &e : mp) vec.push_back(e);
    sort(vec.begin(), vec.end(), cmp);
    while (k > 0) k -= vec[answer++].second;
    return answer;
}