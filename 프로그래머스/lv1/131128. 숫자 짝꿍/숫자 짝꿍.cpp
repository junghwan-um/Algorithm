#include <bits/stdc++.h>

using namespace std;

int arr[10], arr2[10];

string solution(string X, string Y) {
    string answer = "";
    vector<string> vec;
    for (const auto &e : X) ++arr[e - '0'];
    for (const auto &e : Y) ++arr2[e - '0'];
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > 0 && arr2[i] > 0) {
            int x = arr[i] > arr2[i] ? arr2[i]: arr[i];
            for (int j = 0; j < x; ++j) vec.push_back(to_string(i));
        }
    }
    if (!vec.size()) return "-1";
    sort(vec.begin(), vec.end(), greater<>());
    int flag = 0;
    for (const auto &e : vec) {
        if (e != "0") flag = 1;
        answer += e;
    }
    if (!flag) return "0";
    return answer;
}