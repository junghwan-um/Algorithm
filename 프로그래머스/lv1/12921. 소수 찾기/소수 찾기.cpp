#include <bits/stdc++.h>

using namespace std;

bool factor(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (i * i == a) {
			return false;
            
		}
        else if (a % i == 0) {
            return false;
		}
	}
    return true;
}

int solution(int n) {
    int answer = 0;
    for (int i = 2; i <= n; ++i) {
        if (factor(i)) ++answer;
    }
    return answer;
}