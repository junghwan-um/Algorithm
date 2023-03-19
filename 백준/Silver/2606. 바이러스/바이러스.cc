#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, cnt;

void dfs(const vector<int> vec[], vector<int> &vis, int vertex) {
    vis[vertex] = 1;
    ++cnt;
    for (const auto &e : vec[vertex]) {
        if (!vis[e]) dfs(vec, vis, e);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    vector<int> vec[n + 1];
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    dfs(vec, vis, 1);
    cout << cnt - 1 << '\n';
    return 0;
}