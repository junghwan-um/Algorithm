#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(scanf("%d", &n) != EOF){
        int cnt = 1, answer = 1;
        while(true){
            if (cnt % n == 0){
                cout << answer << '\n';
                break;
            }else{
                cnt = (cnt * 10) + 1;
                cnt %= n;
                answer++;
            }
        }
    }
    return 0;
}