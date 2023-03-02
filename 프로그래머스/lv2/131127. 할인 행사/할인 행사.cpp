#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> mp;
    vector<int> res;
    for (int i = 0; i < number.size(); ++i) mp[want[i]] = number[i];
    for (int i = 0; i <= discount.size() - 10; ++i) {
        map<string, int> temp = mp;
        bool flag = 0;
        for (int j = i; j < i + 10; ++j) {
            if (mp[discount[j]] > 0) --temp[discount[j]];
        }
        for (const auto &e : temp) if (e.second) flag = 1;
        if (!flag) ++answer;
    }
    return answer;
}