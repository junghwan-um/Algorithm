#include <bits/stdc++.h>

using namespace std;

int bfs(const vector<vector<int>> vec) {
    int answer = 0;
    vector<int> vis(vec.size() + 1, 0);
    queue<int> que;
    vis[1] = 1;
    que.push(1);
    while(!que.empty()) {
        int cur = que.front();
        que.pop();
        for (const auto &e : vec[cur]) {
            if (!vis[e]) {
                que.push(e);
                vis[e] = vis[cur] + 1;
            }
        }
    }
    sort(vis.begin(), vis.end(), greater<>());
    for (const auto &e : vis) {
        if (e == vis[0]) ++answer;
    }
    return answer;
}

int solution(int n, vector<vector<int>> edge) {
    vector<vector<int>> vec(n + 1);
    for (const auto &e : edge) {
        vec[e[0]].push_back(e[1]);
        vec[e[1]].push_back(e[0]);
    }
    return bfs(vec);
}