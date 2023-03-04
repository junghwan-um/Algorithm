#include <bits/stdc++.h>

using namespace std;

int N;

void dfs(const vector<vector<int>> &vec, vector<int> &vis, int start) {
    vis[start] = 1;
    for (int i = 0; i < N; ++i) {
        if (vec[start][i] && !vis[i]) {
            dfs(vec, vis, i);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    N = n;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) --computers[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            ++answer;
            dfs(computers, vis, i);
        }
    }
    
    return answer;
}