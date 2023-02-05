#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> vec;
    for (int i = 0; i < score.size(); ++i) {
        vec.push_back(score[i]);
        sort(vec.begin(), vec.end(), greater<>());
        if (i < k) answer.push_back(vec[i]);
        else answer.push_back(vec[k - 1]);
    }
    return answer;
}