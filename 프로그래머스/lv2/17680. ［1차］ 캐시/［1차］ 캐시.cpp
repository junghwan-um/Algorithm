#include <bits/stdc++.h>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> deq;
    if (cacheSize == 0) return 5 * cities.size();
    for (int i = 0; i < cities.size(); ++i) {
        for (auto &e : cities[i]) e = tolower(e);
        auto it = find(deq.begin(), deq.end(), cities[i]);
        if (it != deq.end()) {
            deq.erase(it);
            deq.push_back(cities[i]);
            ++answer;  
        }
        else {
            if (deq.size() < cacheSize) deq.push_back(cities[i]);
            else {
                deq.pop_front();
                deq.push_back(cities[i]);
            }
            answer += 5;
        }
    }
    return answer;
}