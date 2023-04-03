#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	else return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int d = lcm(denom1, denom2);
    int n = d / denom1 * numer1 + d / denom2 * numer2;
    return {n / gcd(d, n), d / gcd(d, n)};
}