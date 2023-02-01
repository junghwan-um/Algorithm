#include <bits/stdc++.h>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), greater<>());
    int x = score.size() / m, j = 0;
    for (int i = 0; i < x; ++i) {
        int p = *min_element(score.begin() + j, score.begin() + j + m);
        answer += p * m;
        j += m;
    }
    return answer;
}