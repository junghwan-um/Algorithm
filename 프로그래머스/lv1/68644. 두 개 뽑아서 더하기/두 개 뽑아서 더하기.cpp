#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            s.insert(numbers[i] + numbers[j]);
        }
    }
    for (const auto &e : s) answer.push_back(e);
    return answer;
}