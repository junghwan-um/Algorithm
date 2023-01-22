#include <bits/stdc++.h>

using namespace std;

bool factor(int a) {
    set<int> st;
	for (int i = 1; i * i <= a; i++) {
		if (i * i == a) {
			st.insert(i);
            
		}
        else if (a % i == 0) {
            st.insert(i);
            st.insert(a / i);
		}
	}
    if (st.size() % 2 == 0) return true;
    else if (st.size() % 2 == 1) return false;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; ++i) {
        if (factor(i)) answer += i;
        else answer -= i;
    }
    return answer;
}