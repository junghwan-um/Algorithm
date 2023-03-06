#include <bits/stdc++.h>

using namespace std;

vector<string> vec {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    string res;
    queue<char> que;
    for (const auto &e : numbers) que.push(e);
    string str;
    while(!que.empty()) {
        str += que.front();
        que.pop();
        for (int i = 0; i < 10; ++i) {
            if (vec[i] == str) {
                res += to_string(i);
                str = "";
            }
        }
    }
    return stol(res);
}