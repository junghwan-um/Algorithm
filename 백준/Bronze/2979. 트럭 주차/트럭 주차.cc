#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; ++i) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < y; ++j) ++arr[j];
    }
    for (const auto &e : arr) {
        if (e > 2) answer += 3 * c;
        else if (e == 2) answer += 2 * b;
        else if (e == 1) answer += a;
    }
    cout << answer << '\n';
    return 0;
}