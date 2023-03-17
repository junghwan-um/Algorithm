#include <bits/stdc++.h>

using namespace std;

int n, m;
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

int bfs(const vector<vector<int>> &vec) {
    vector<vector<int>> vis(n, vector<int>(m, 0));
    queue<pair<int, int>> que;
    vis[0][0] = 1;
    que.push({0, 0});
    while (!que.empty()) {
        int cx = que.front().first;
        int cy = que.front().second;
        if (cx == n - 1 && cy == m - 1) return vis[cx][cy];
        que.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!vis[nx][ny] && vec[nx][ny]) {
                    que.push({nx, ny});
                    vis[nx][ny] = vis[cx][cy] + 1;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        for (int j = 0; j < m; ++j) {
            if (str[j] == '1') vec[i][j] = 1;
        }
    }
    cout << bfs(vec) << '\n';
    return 0;
}