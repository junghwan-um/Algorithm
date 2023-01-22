#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0, k = 1;
    stack<int> st;
    while(n != 0){
        if (n % 3 == 1) st.push(1);
        else if (n % 3 == 2) st.push(2);
        else if (n % 3 == 0) st.push(0);
        n /= 3;
    }
    
    while (!st.empty()) {
        answer += k * st.top();
        st.pop();
        k *= 3;
    }
    
    return answer;
}