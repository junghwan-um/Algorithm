#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (const auto &e : strlist) answer.push_back(e.size());
    return answer;
}