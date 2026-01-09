#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    answer = s.size();
    
    for (int i=1; i<s.size(); i++) {
        vector<string> v;
        string str;
        
        for (int j=0; j<s.size(); j++) {
            str += s[j];
            
            if (str.size() == i) {
                v.push_back(str);
                str = "";
            }
            else if (j == s.size() - 1) {
                v.push_back(str);
            }
        }
        
        string res;
        
        while (v.size() != 0) {
            int cnt = 0;
            
            for (int j=1; j<v.size(); j++) {
                if (v[0] == v[j]) {
                    cnt++;
                } else {
                    break;
                }
            }
            
            if (cnt > 0) {
                res += (to_string(cnt + 1) + v[0]);
            } else {
                res += v[0];
            }
            v.erase(v.begin(), v.begin() + cnt+1);
        }
        
        answer = min(answer, (int)res.length());
    }
    
    return answer;
}