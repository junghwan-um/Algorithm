#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(temp);
    }
    return vec;
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    deque<int> deq;
    for (const auto &e : operations) {
        vector<string> vec = split(e);
        if (vec[0] == "I") {
            deq.push_back(stoi(vec[1]));
            sort(deq.begin(), deq.end());
        }
        else {
            if (!deq.empty()) {
                if (vec[1] == "1")  deq.pop_back();
                else deq.pop_front();
            }
        }
    }
    if (deq.empty()) return {0, 0};
    return {deq.back(), deq.front()};
}