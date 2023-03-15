#include <bits/stdc++.h>

using namespace std;

int n;
int arr[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string answer;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string tok;
        cin >> tok;
        ++arr[tok[0] - 'a'];
    }
    for (int i = 0; i < 26; ++i) {
        if (arr[i] >= 5) answer += char('a' + i);
    }
    sort(answer.begin(), answer.end());
    if (answer.empty()) cout << "PREDAJA\n";
    else cout << answer << '\n';
    return 0;
}