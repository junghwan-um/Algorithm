#include <bits/stdc++.h>

using namespace std;

vector<int> factor(int a) {
    vector<int> factors;
	for (int i = 1; i * i <= a; i++) {
		if (i * i == a) {
			factors.push_back(i);
			factors.push_back(i);
		}
        else if (a % i == 0) {
			factors.push_back(i);
			factors.push_back(a / i);
		}
	}
    return factors;
}

vector<int> solution(int brown, int yellow) {
    vector<int> factors = factor(brown + yellow);
    for (int i = 0; i < factors.size() - 1; ++i) {
        if ((factors[i] - 2) * (factors[i + 1] - 2) == yellow) {
            if (factors[i] > factors[i + 1]) return {factors[i], factors[i + 1]};
            return {factors[i + 1], factors[i]};
        }
    }
}