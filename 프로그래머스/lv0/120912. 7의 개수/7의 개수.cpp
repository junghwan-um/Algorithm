#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (const auto &e : array) {
        string str = to_string(e);
        for (const auto &f : str) {
            if (f == '7') ++answer;
        }
    }
    return answer;
}