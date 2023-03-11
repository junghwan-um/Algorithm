#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    deque<int> deq;
    for (const auto &e : numbers) deq.push_back(e);
    if (direction == "right") {
        int num = deq.back();
        deq.pop_back();
        deq.push_front(num);
    }
    else {
        int num = deq.front();
        deq.pop_front();
        deq.push_back(num);
    }
    for (const auto &e : deq) answer.push_back(e);
    return answer;
}