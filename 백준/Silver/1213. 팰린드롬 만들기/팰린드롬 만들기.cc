#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str, answer, mid;
    cin >> str;
    for (const auto &e : str) ++arr[e - 'A'];
    int cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (arr[i] % 2 == 1) {
            ++cnt;
            mid = (char)('A' + i);
        }
    }
    if (cnt > 1) cout << "I'm Sorry Hansoo\n";
    else {
        for (int i = 0; i < 26; ++i) {
            if (arr[i] >= 2) {
                int num = arr[i] / 2;
                for (int j = 0; j < num; ++j) {
                    answer += 'A' + i;
                }
            }
        }
        string temp = answer;
        reverse(temp.begin(), temp.end());
        if (cnt) answer = answer + mid + temp;
        else answer = answer + temp;
        cout << answer << '\n';
    }
    return 0;
}