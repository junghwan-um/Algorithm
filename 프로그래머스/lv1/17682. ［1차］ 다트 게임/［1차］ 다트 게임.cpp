#include <bits/stdc++.h>

using namespace std;

int change (const vector<pair<int, string>> &vec) {
    int res = 0, before = 0;
    for (const auto &e : vec) {
        int x = e.first;
        if (e.second[0]== 'S') x = pow(x, 1);
        else if (e.second[0] == 'D') x = pow(x, 2);
        else x = pow(x, 3);
        
        if (e.second.size() >= 2) {
            if (e.second[1] == '*') {
                res += before + x * 2;
                before = 2 * x;
            }
            else {
                res -= x;
                before = -x;
            }
        }
        else {
            res += x;
            before = x;
        }
    }
    return res;
}

int solution(string dartResult) {
    vector<pair<int ,string>> vec;
    queue<char> que;
    int num = 0, i = 0, flag = 1;
    if (isdigit(dartResult[0]) && isdigit(dartResult[1])) {
        num = 10;
        i = 2;
    }
    else {
        num = dartResult[0] - '0';
        i = 1;
    }
    
    for (; i < dartResult.size(); ++i) {
        if (isdigit(dartResult[i])) {
            string temp;
            while (!que.empty()) {
                temp += que.front();
                que.pop();
            }
            vec.push_back({num, temp});
            
            if (isdigit(dartResult[i + 1])) {
                num = 10;
                ++i;
            }
            else num = dartResult[i] - '0';
        }
        else que.push(dartResult[i]);
    }
    
    string temp;
    while (!que.empty()) {
        temp += que.front();
        que.pop();
    }
    vec.push_back({num , temp});
    
    return change(vec);
}