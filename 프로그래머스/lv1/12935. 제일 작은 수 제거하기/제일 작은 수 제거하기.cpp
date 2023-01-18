#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) answer.push_back(-1);
    else {
        auto it = min_element(arr.begin(), arr.end()) - arr.begin();
        for (int i = 0; i < it; ++i) answer.push_back(arr[i]);
        for (int i = it + 1; i < arr.size(); ++i) answer.push_back(arr[i]);
    }
    return answer;
}