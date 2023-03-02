#include <bits/stdc++.h>

using namespace std;




int solution(vector<int> numbers, int target) {
    int answer = 0;
    vector<vector<int>> vec;
    for (const auto &e : numbers) {
        vector<int> temp {e, -e};
        vec.push_back(temp);
    }
    queue<pair<int, int>> que;
    que.push({vec[0][0], 0});
    que.push({vec[0][1], 0});
    while(!que.empty()) {
        int num = que.front().first;
        int idx = que.front().second;
        que.pop();
        if (idx == vec.size() - 1 && num == target) ++answer;
        if (idx < vec.size() - 1) {
            int nxt = num + vec[idx + 1][0];
            int nxt2 = num + vec[idx + 1][1];
            que.push({nxt, idx + 1});
            que.push({nxt2, idx + 1});
        }
    }
    return answer;
}