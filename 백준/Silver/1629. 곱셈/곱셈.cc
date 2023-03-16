#include <bits/stdc++.h>

using namespace std;

int x, y, z;

long long power(long long a, long long b) {
    long long res = 1;
    while (b){
        if (b & 1) res = res * a % z;
        b = b / 2;
        a = a * a % z;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> x >> y >> z;
    cout << power(x, y);
    return 0;
}