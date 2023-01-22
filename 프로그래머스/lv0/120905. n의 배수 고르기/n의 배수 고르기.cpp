#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for (const auto &e : numlist) {
        if (e % n == 0) answer.push_back(e);
    }
    return answer;
}