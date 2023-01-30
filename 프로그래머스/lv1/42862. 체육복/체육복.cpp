#include <bits/stdc++.h>

using namespace std;

int arr[35];

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    for (const auto &e : lost) --arr[e];
    for (const auto &e : reserve) ++arr[e];
    for (int i = 1; i < 31; ++i) {
        if (arr[i] < 0) {
            if (arr[i + 1] > 0 || arr[i - 1] > 0) {
                if (arr[i - 1] > 0) --arr[i - 1];
                else --arr[i + 1]; 
            }
            else --answer;
        }
    }
    return answer;
}