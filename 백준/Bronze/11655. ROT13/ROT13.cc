#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    getline(cin, str);
    for (auto &e : str) {
        if (isalpha(e)) {
            if (isupper(e)) e = (e - 'A' + 13) % 26 + 'A';
            else e = (e - 'a'+ 13) % 26 + 'a';
        }
    }
    cout << str << '\n';
    return 0;
}
