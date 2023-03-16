#include <bits/stdc++.h>

using namespace std;

int gcd(int a) {
	if (a % 6 == 0) return 6;
	return gcd(6, a % 6);
}

int lcm(int a) {
	return a * 6 / gcd(a, 6);
}

int solution(int n) {
    return lcm(n) / 6;
}