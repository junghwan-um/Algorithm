#include <bits/stdc++.h>

using namespace std;

int n;
int dx[4]{-1, 0, 1, 0};
int dy[4]{0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<int> res;
    set<int> s;
    vector<vector<int>> vec(n, vector<int>(n, 0));
    int max = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> vec[i][j];
            if (vec[i][j] > max) max = vec[i][j];
        }
    }
    for (int i = 0 ; i <= max; ++i) {
        int answer = 0;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        stack<pair<int,int>> st;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (vec[j][k] > i) st.push({j, k});
            }
        }
        while (!st.empty()) {
            int cx = st.top().first;
            int cy = st.top().second;
            if (!vis[cx][cy]) ++answer;
            st.pop();
            for (int j = 0; j < 4; ++j) {
                int nx = cx + dx[j];
                int ny = cy + dy[j];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    if (!vis[nx][ny] && vec[nx][ny] > i) {
                        vis[nx][ny] = 1;
                        st.push({nx, ny});
                    }
                }
            }
        }
        res.push_back(answer);
    }
    cout << *max_element(res.begin(), res.end()) << '\n';
    return 0;
}