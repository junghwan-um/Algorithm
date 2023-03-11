#include <bits/stdc++.h>

using namespace std;

int answer;

void factor(int a) {
    set<int> st;
	for (int i = 1; i * i <= a; i++) {
		if (i * i == a) st.insert(i);
        else if (a % i == 0) {
            st.insert(i);
            st.insert(a / i);
		}
	}
    if (st.size() > 2) ++answer;
}

int solution(int n) {
    for(int i = 1; i <= n; ++i) factor(i);
    return answer;
}