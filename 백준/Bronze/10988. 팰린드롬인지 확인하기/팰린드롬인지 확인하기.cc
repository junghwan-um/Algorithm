#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string rev, ori;
    cin >> ori;
    rev = ori;
    reverse(rev.begin(), rev.end());
    if (rev == ori) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}