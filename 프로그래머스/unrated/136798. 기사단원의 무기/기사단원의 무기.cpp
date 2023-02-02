#include <bits/stdc++.h>

using namespace std;

int factor(int a) {
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
    return st.size();
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; ++i) {
        int size = factor(i);
        if (size > limit) answer += power;
        else answer += size;
    }
    return answer;
}