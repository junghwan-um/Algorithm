#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

bool factor(int a) {
	for (int i = 2; i <= a; ++i) {
		if (a % i == 0) {
            if (i % 2 != 0 && i % 5 != 0) return false;
		}
	}
    return true;
}

int solution(int a, int b) {
    int c = b / gcd(a,b);
    cout << c;
    if(factor(c)) return 1;
    return 2;
}