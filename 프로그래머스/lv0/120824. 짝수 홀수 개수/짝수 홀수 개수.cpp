#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a = 0, b = 0;
    for (const auto &e : num_list) {
        if (e % 2 == 0) ++a;
        else if (e % 2 == 1) ++b;
    }
    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}