#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, x; cin >> n >> x;
    vector<int> vec(n, 0); vector<int> sum(n, 0);
    for (int i = 0; i < n; ++i) cin >> vec[i];
    sum[0] = vec[0];
    for (int i = 1; i < n; ++i) sum[i] = vec[i] + sum[i - 1];
    int mx = sum[x - 1];
    for (int i = 1; i <= n - x; ++i) {
        if (sum[i + x - 1] - sum[i - 1] > mx) mx = sum[i + x - 1] - sum[i - 1];
    }
    cout << mx << '\n';
    return 0;
}