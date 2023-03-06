#include <bits/stdc++.h>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for (int x = i; x <= j; ++x) {
        string str = to_string(x);
        for (const auto &e : str) {
            if (e == k + '0') ++answer;
        }
    }
    return answer;
}