#include <bits/stdc++.h>

using namespace std;

int n, m;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    map<string, int> mp;
    map<int, string> mp2;
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        mp[str] = i + 1; mp2[i + 1] = str;
    }
    for (int i = 0; i < m; ++i) {
        string str; cin >> str;
        if (isdigit(str[0])) cout << mp2[stoi(str)] << '\n';
        else cout << mp[str] << '\n';
    }
    return 0;
}