#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, double> &a, const pair<int, double> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
    
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int ,int> mp;
    vector<pair<int, double>> vec;
    for (const auto &e : stages) ++mp[e];
    int total = stages.size();
    for (int i = 1; i <= N; ++i) {
        if (total == 0) vec.push_back({i, 0});
        else {
            vec.push_back({i, (double)mp[i] / total});
            total -= mp[i];
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    for (const auto &e : vec) {
        answer.push_back(e.first);
    }
    return answer;
}