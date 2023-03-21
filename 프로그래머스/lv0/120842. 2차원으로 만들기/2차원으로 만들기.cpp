#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size() / n, vector<int>(n, 0));
    for (int i = 0, cnt = 0; i < num_list.size() / n; ++i) {
        for (int j = 0; j < n; ++j, ++cnt) answer[i][j] = num_list[cnt];
    }
    return answer;
}