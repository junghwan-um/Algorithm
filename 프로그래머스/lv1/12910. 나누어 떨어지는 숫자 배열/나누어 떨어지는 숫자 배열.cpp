#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (const auto &e : arr) {
        if (e % divisor == 0) answer.push_back(e);
    }
    sort(answer.begin(), answer.end());
    if(answer.size() == 0) answer.push_back(-1);
    return answer;
}