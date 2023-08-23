#include <bits/stdc++.h>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for (auto &e : num_str) {
        answer += e - '0';
    }
    return answer;
}