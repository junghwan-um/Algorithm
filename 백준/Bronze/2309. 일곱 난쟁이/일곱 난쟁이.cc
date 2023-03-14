#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vec(9);
    for (int i = 0; i < 9; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());
    do {
        if (accumulate(vec.begin(), vec.end() - 2, 0) == 100) {
            for (int i = 0; i < 7; ++i) cout << vec[i] << '\n';
            break;
        }
    } while(next_permutation(vec.begin(), vec.end()));
    return 0;
}