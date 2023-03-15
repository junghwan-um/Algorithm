#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, '*')) {
        vec.push_back(temp);
    }
    return vec;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<string> answer;
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<string> vec = split(str);
    for (int i = 0; i < n; ++i) {
        string token;
        cin >> token;
        if (token.length() < str.length() - 1) cout << "NE\n";
        else if (token.substr(0, vec[0].length()) == vec[0] && token.substr(token.length() - vec[1].length()) == vec[1]) cout << "DA\n";
        else cout << "NE\n";
    }
    return 0;
}