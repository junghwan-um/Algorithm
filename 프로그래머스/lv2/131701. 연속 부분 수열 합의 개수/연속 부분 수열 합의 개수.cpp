#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    set<int> s;
    int answer = 0;
    int cnt = 1, start = 0, end = 0;
    for (int cnt = 1; cnt <= elements.size(); ++cnt) {
        for (int i = 0; i < elements.size(); ++i) {
            int sum = 0;
            for (int j = i; j < i + cnt; ++j) {
                sum += elements[j % elements.size()];
            }
            s.insert(sum);
        } 
    }
    return s.size();
}