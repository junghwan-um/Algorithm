#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (const auto &e : my_string) {
        if(e != letter[0]) answer += e;
    }
    return answer;
}