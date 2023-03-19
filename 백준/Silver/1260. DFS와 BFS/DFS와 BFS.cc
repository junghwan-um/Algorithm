#include <bits/stdc++.h>

using namespace std;

int n, m, v, x, y;

void dfs(const vector<int> vec[], vector<int> &vis, int vertex) {
    vis[vertex] = 1;
    cout << vertex << ' ';
    for (const auto &e : vec[vertex]) {
        if (!vis[e]) dfs(vec, vis, e);
    }
}

void bfs(const vector<int> vec[], vector<int> &vis) {
    queue<int> que;
    que.push(v);
    vis[v] = 1;
    while (!que.empty()) {
        int cx = que.front();
        cout << cx << ' ';
        que.pop();
        for (const auto &e : vec[cx]) {
            if (!vis[e]) {
                que.push(e);
                vis[e] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> v;
    vector<int> vec[n + 1];
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    for (auto &e : vec) sort(e.begin(), e.end());
    dfs(vec, vis, v);
    cout << '\n';
    fill(vis.begin(), vis.end(), 0);
    bfs(vec, vis);
    return 0;
}