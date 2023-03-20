#include <bits/stdc++.h>

using namespace std;

typedef struct tomato{
    int z, x, y;
}tomato;

int n, m, h, flag, mx;
int dx[4] {-1, 0, 1, 0};
int dy[4] {0, 1, 0, -1};
int dz[2] {-1, 1};
queue<tomato> que;

void bfs(const vector<vector<vector<int>>> &vec, vector<vector<vector<int>>> &vis) {
    while (!que.empty()) {
        int cx = que.front().x;
        int cy = que.front().y;
        int cz = que.front().z;
        que.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!vis[cz][nx][ny] && vec[cz][nx][ny] == 0) {
                    vis[cz][nx][ny] = vis[cz][cx][cy] + 1;
                    mx = max(mx, vis[cz][nx][ny]);
                    que.push({cz, nx, ny});
                }
            }
        }
        for (int i = 0; i < 2; ++i) {
            int nz = cz + dz[i];
            if (nz >= 0 && nz < h) {
                if (!vis[nz][cx][cy] && vec[nz][cx][cy] == 0) {
                    vis[nz][cx][cy] = vis[cz][cx][cy] + 1;
                    mx = max(mx, vis[nz][cx][cy]);
                    que.push({nz, cx, cy});
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n >> h;
    vector<vector<vector<int>>> vec(h, vector<vector<int>>(n, vector<int>(m, 0)));
    vector<vector<vector<int>>> vis(h, vector<vector<int>>(n, vector<int>(m, 0)));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin >> vec[i][j][k];
                if (vec[i][j][k] == 0) flag = 1;
                else if(vec[i][j][k] == 1) {
                    que.push({i, j, k});
                    vis[i][j][k] = 1;
                }
            }
        }
    }
    if (!flag) cout << "0\n";
    else {
        bfs(vec,vis);
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    if (vis[i][j][k] == 0 && vec[i][j][k] >= 0) flag = 0;
                }
            }
        }
        if (!flag) cout << "-1\n";
        else cout << mx - 1 << '\n';
    }
    return 0;
}