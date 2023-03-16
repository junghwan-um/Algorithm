#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        map<string, int> mp;
        int m, answer = 1;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            string str, str2;
            cin >> str >> str2;
            ++mp[str2];
        }
        for (const auto &e : mp) answer *= e.second + 1;
        cout << answer - 1 << '\n';
    }
    return 0;
}