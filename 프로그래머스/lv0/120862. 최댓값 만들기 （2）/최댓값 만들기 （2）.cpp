#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> vec;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            vec.push_back(numbers[i] * numbers[j]);
        }
    }
    return *max_element(vec.begin(), vec.end());
}