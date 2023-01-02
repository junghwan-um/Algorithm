#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> st;
    for (int i = 0, num = 1; i < order.size();) {
        if (num < order[i]) {
            for (;num < order[i]; ++num) st.push(num);
        }
        else if (num == order[i]) {
            ++answer;
            ++num;
            ++i;
        }
        else {
            if (!st.empty() && st.top() == order[i]) {
                ++answer;
                st.pop();
                ++i;
            }
            else break;
        }
    }
    return answer;
}