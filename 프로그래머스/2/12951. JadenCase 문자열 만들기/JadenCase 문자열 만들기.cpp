#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool num = false;
    
    for (auto c : s) {
        if (c == ' ') {
            answer += ' ';
            num = false;
        } else if (!num) {
            answer += toupper(c);
            num = true;
        } else {
            answer += tolower(c);
        }
    }
    return answer;
}