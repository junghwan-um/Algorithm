#include <bits/stdc++.h>

using namespace std;

int n, m, k, answer;
vector<int> res;
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

void dfs(const vector<vector<int>> &vec, vector<vector<int>> &vis, pair<int, int> x) {
    ++answer;
    vis[x.first][x.second] = 1;
    for (int i = 0; i < 4; ++i) {
        int nx = x.first + dx[i];
        int ny = x.second + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (!vis[nx][ny] && vec[nx][ny]) {
                dfs(vec, vis, {nx, ny});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> k;
    vector<vector<int>> vec(n, vector<int>(m, 1));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < k; ++i) {
        int a, b, c, d;
        cin >> b >> a >> d >> c;
        for (int j = n - c; j <= n - 1 - a; ++j) {
            for (int l = b; l < d; ++l) {
                vec[j][l] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (vec[i][j] && !vis[i][j]) {
                dfs(vec, vis, {i, j});
                res.push_back(answer);
                answer = 0;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (const auto &e : res) cout << e << ' ';
}