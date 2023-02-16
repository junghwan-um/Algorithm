#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> que;
    for (int i = 0; i < speeds.size(); ++i) {
        int dif = 100 - progresses[i];
        if (dif % speeds[i] == 0) que.push(dif / speeds[i]);
        else que.push(dif / speeds[i] + 1);
    }
    
    int day = 0, cnt = 1;
    while (!que.empty()) {
        if (!day) day = que.front();
        else {
            if (que.front() <= day) ++cnt;
            else {
                answer.push_back(cnt);
                day = que.front();
                cnt = 1;
            }
        }
        que.pop();
    }
    answer.push_back(cnt);
    return answer;
}