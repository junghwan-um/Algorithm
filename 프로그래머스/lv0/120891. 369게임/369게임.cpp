#include <bits/stdc++.h>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = to_string(order);
    for (const auto &e : str) {
        if (e == '3' || e == '6' || e == '9') ++answer;
    }
    return answer;
}