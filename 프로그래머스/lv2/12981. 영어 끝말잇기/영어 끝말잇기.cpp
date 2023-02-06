#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int x = 0, y = 0;
    stack<char> st;
    map<string, int> mp;
    for (int i = 0; i < words.size(); ++i) {
        ++mp[words[i]];
        if (st.empty()) st.push(words[i][words[i].size() - 1]);
        else {
            if (st.top() == words[i][0] && mp[words[i]] < 2)
                st.push(words[i][words[i].size() - 1]);
            else {
                x = i % n + 1;
                y = i / n + 1;
                break;
            }
        }
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}