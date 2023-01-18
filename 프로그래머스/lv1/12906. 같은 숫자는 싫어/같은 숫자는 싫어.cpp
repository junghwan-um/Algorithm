#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int top = 0;
    for (const auto &e : arr) {
        if (answer.size() == 0) {
            answer.push_back(e);
            top = e;
        }
        else {
            if (top != e) {
                answer.push_back(e);
                top = e;
            }
        }
    }

    return answer;
}