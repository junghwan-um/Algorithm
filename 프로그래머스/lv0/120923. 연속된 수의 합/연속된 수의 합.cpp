#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    if (num % 2 == 1) {
        int mid = total / num;
        for (int i = mid - (num - 1) / 2; i <= mid + (num - 1) / 2; ++i) answer.push_back(i);
    }
    else if (num % 2 == 0) {
        int mid  = total / num;
        for (int i = mid - (num - 1) / 2; i <= mid + (num - 1) / 2 + 1; ++i) answer.push_back(i);
    }
    return answer;
}