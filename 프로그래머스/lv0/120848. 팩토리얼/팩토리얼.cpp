#include <bits/stdc++.h>

using namespace std;

vector<int> arr(10); 

int solution(int n) {
    arr[0] = 1;
    for (int i = 1; i < 10; ++i) arr[i] = arr[i - 1] * (i + 1);
    return upper_bound(arr.begin(), arr.end(), n) - arr.begin();;
}