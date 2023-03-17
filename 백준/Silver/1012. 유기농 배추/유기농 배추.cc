#include <bits/stdc++.h>

using namespace std;

int t, m, n, k;
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int answer = 0;
        cin >> m >> n >> k;
        vector<vector<int>> vec(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        stack<pair<int,int>> st;
        for (int j = 0; j < k; ++j) {
            int x, y;
            cin >> y >> x;
            vec[x][y] = 1;
            st.push({x, y});
        }
        while (!st.empty()) {
            int cx = st.top().first;
            int cy = st.top().second;
            if (!vis[cx][cy]) ++answer;
            st.pop();
            for (int j = 0; j < 4; ++j) {
                int nx = cx + dx[j];
                int ny = cy + dy[j];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                    if (!vis[nx][ny] && vec[nx][ny]) {
                        vis[nx][ny] = 1;
                        st.push({nx, ny});
                    }
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}