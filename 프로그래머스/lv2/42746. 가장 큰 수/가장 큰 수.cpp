#include <bits/stdc++.h>

using namespace std;

int mx;

bool cmp(string a, string b) {
    for (int i = 0; i < mx; ++i) a += a[i];
    for (int i = 0; i < mx; ++i) b += b[i];
    return a > b;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> vec;
    int flag = 0;
    mx = to_string(*max_element(numbers.begin(), numbers.end())).length();
    for (auto e : numbers) {
        if (e != 0) flag = 1;
        vec.push_back(to_string(e));
    }
    if (!flag) return "0";
    sort(vec.begin(), vec.end(), cmp);
    for (const auto &e : vec) answer += e;
    return answer;
}