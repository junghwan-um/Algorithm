#include <bits/stdc++.h>

using namespace std;

int n, answer;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        stack<char> st;
        for (const auto &e : str) {
            if (st.empty()) st.push(e);
            else {
                if (st.top() == e) st.pop();
                else st.push(e);
            }
        }
        if (st.empty()) ++answer;
    }
    cout << answer << '\n';
    return 0;
}