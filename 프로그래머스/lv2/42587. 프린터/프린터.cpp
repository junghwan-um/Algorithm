#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int idx = 0;
    vector<pair<int, int>> res;
    vector<int> vec;
    for (const auto &e : priorities) vec.push_back(e);
    sort(vec.begin(), vec.end(), greater<>());
    
    queue<pair<int, int>> que;
    for (int i = 0; i < priorities.size(); ++i) {
        que.push({i, priorities[i]});
    }
    while (!que.empty()) {
        int num = que.front().first;
        int val = que.front().second;
        que.pop();
        if (val == vec[idx]) {
            res.push_back({num, idx + 1});
            ++idx;
        }
        else que.push({num, val});
    }
    
    for (const auto &e : res) {
        if (e.first == location) return e.second;
    }
}