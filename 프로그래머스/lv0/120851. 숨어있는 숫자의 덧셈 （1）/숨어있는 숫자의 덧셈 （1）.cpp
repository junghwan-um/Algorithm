#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (const auto &e : my_string) {
        if (isdigit(e)) answer += e - '0';
    }
    return answer;
}