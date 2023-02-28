#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;

vector<int> solution(string msg) {
    vector<int> answer;
    int cnt = 27;
    queue<char> que;
    for (char i = 'A'; i <= 'Z'; ++i) {
        string str;
        str += i;
        mp[str] = i - 'A' + 1;
    }
    for (const auto &e : msg) que.push(e);
    
    string str;
    while (!que.empty()) {
        str += que.front();
        que.pop();
        if (!mp[str + que.front()]) {
            mp[str + que.front()] = cnt++;
            answer.push_back(mp[str]);
            str = "";
        }
    }

    return answer;
}