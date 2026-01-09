#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for (auto skill_tree : skill_trees) {
        bool possible = true;
        int skill_idx = 0;
        for (auto user_skill : skill_tree) {
            int cidx = skill.find(user_skill);
            if (cidx == -1) continue;
            if (cidx != skill_idx) {
                possible = false;
                break;
            }
            skill_idx++;
        }
        if (possible) answer++;
    }
    return answer;
}