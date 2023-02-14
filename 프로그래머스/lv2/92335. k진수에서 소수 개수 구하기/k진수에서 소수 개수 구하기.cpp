#include <bits/stdc++.h>

using namespace std;

string change(int n, int k) {
    string res;
    stack<int> st;
    while (n != 0){
        int m = n % k;
        st.push(m);
        n /= k;
    }
    while (!st.empty()) {
        res += to_string(st.top());
        st.pop();
    }
    return res;
}

bool prime(long long a) {
    set<int> st;
    int flag = 0;
	for (long long i = 1; i * i <= a; i++) {
		if (i * i == a) {
			return false;
		}
        else if (a % i == 0) {
            if (i != 1) return false;
		}
	}
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string str = change(n, k);
    string token;
    queue<char> st;

    for (auto &e : str) {
        if (st.empty() && e != '0') st.push(e);
        else {
            if (e == '0') {
                while (!st.empty()) {
                    token += st.front();
                    st.pop();
                }
                if (token != "") {
                    if (prime(stol(token))) ++answer;
                }
                token = "";
            }
            else st.push(e);
        }
    }
    
    if (!st.empty()) {
        while (!st.empty()) {
            token += st.front();
            st.pop();
        }
        if (token != "") {
            if (prime(stol(token))) ++answer;
        }
    }
    
    return answer;
}