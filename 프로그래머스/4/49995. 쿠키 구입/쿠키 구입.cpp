#include <string>
#include <vector>
#include <iostream>

using namespace std;

// cookie_len은 배열 cookie의 길이입니다.
int solution(vector<int> cookie) {
    int answer = 0;
    
    for (int i=0; i<cookie.size() - 1; i++) {
        int son1 = cookie[i];
        int son2 = cookie[i+1];
        int son1_idx = i;
        int son2_idx = i+1;
        
        while (true) {
            if (son1 == son2) {
                answer = max(answer, son1);
            }
            
            if (son1 > son2) {
                if(son2_idx + 1 == cookie.size())
                    break;
                son2 += cookie[++son2_idx];
            }
            
            else {
                if (son1_idx - 1 < 0)
                    break;
                son1 += cookie[--son1_idx];
            }
        }
    }
    return answer;
}