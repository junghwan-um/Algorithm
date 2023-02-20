#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (const auto &e : scoville) pq.push(e);
    while (pq.size() >= 2) {
        if (pq.top() < K) {
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            pq.push(first + second * 2);
        }
        else return answer;
        ++answer;
    }
    if (pq.top() >= K) return answer;
    return -1;
}