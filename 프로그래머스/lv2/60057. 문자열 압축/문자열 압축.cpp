#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> l;
    if (s.length() == 1) return 1;
    for (int i = 1; i <= s.size() / 2; ++i) {
        string res;
        stack<string> st;
        int cnt = 1;
        for (int j = 0; j < s.length(); j += i) {
            string str = s.substr(j, i);
            if (st.empty()) st.push(str);
            else {
                if (st.top() == str) ++cnt;
                else {
                    if (cnt != 1) res += to_string(cnt);
                    res += st.top();
                    st.pop();
                    st.push(str);
                    cnt = 1;
                }
            }
        }
        if (!st.empty()) {
            if (cnt != 1) res += to_string(cnt);
            res += st.top();
        }
        l.push_back(res.length());
    }
    return *min_element(l.begin(), l.end());
}