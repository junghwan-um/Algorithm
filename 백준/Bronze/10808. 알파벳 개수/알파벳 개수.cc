#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    for (const auto &e : str) ++arr[e - 'a'];
    for (const auto &e : arr) cout << e << ' ';
    return 0;
}