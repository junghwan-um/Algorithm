#include <bits/stdc++.h>

using namespace std;

int n, cnt;
int dx[4] {-1, 0, 1, 0};
int dy[4] { 0, 1, 0, -1};
vector<int> res;

void dfs(const vector<vector<int>> &vec, vector<vector<int>> &vis, pair<int,int> v) {
    vis[v.first][v.second] = 1;
    ++cnt;
    for (int i = 0; i < 4; ++i) {
        int nx = v.first + dx[i];
        int ny = v.second + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
            if (!vis[nx][ny] && vec[nx][ny]) {
                dfs(vec, vis, {nx, ny});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n ,0));
    vector<vector<int>> vis(n, vector<int>(n ,0));
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        for (int j = 0; j < n; ++j) {
            if (str[j] == '1') vec[i][j] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!vis[i][j] && vec[i][j]) {
                dfs(vec, vis, {i, j});
                res.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (const auto &e :res) cout << e << ' ';
    return 0;
}