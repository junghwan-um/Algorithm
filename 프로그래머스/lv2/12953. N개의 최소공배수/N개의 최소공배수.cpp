#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    answer = lcm(arr[0], arr[1]);
    for (int i = 1; i < arr.size() - 1; ++i) answer = lcm(answer, arr[i + 1]);
    return answer;
}