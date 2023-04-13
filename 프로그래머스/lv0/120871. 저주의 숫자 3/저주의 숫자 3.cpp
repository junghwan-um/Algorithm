#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 1;
    for (int i = 0; i < n; ++i) {
        if (answer % 3 == 0 || to_string(answer).find("3") != string::npos) {
            ++answer;
            --i;
        }
        else ++answer;
    }
    return answer - 1;
}