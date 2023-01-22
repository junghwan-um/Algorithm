#include <bits/stdc++.h>

using namespace std;

int arr[10];

int solution(vector<int> numbers) {
    int answer = 0;
    for (const auto &e : numbers) {
        ++arr[e];
    }
    for (int i = 0; i < 10; ++i) {
        if (!arr[i]) answer += i;
    }
    return answer;
}