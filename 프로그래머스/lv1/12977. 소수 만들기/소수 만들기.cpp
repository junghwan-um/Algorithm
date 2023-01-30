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

int solution(vector<int> nums) {
    int answer = 0;
    for (int i = 0; i < nums.size() - 2; ++i) {
        for (int j = i + 1; j < nums.size() - 1; ++j) {
            for (int k = j + 1; k < nums.size(); ++k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (factor(sum)) ++answer;
            }
        }
    }
    return answer;
}