#include <bits/stdc++.h>

using namespace std;

vector<int> a {1, 2, 3, 4, 5};
vector<int> b {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> c {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
vector<int> arr(3, 0);

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    for (int i = 0; i < answers.size(); ++i) {
        if (a[i % 5] == answers[i]) ++arr[0];
        if (b[i % 8] == answers[i]) ++arr[1];
        if (c[i % 10] == answers[i]) ++arr[2];
    }
    for (int i = 0; i < 3; ++i) {
        if (arr[i] == *max_element(arr.begin(), arr.end())) answer.push_back(i + 1);
    }
    return answer;
}