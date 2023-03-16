#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, answer = 0;
    cin >> n >> m;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; ++i) {
        auto it = find(vec.begin(), vec.end(), m - vec[i]);
        if (it != vec.end()) {
            if (it - vec.begin() != i) {
                ++answer;
            }
        }
    }
    cout << answer / 2;
    return 0;
}