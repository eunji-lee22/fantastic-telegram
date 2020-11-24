// 점수: 8점
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {    
    int answer = 0;         // 제출할 정답 (사용 가능한 스킬트리 개수)
    bool arr[26] = {0};     // 선행스킬트리
    for(int i=0, size=skill.size(); i<size; i++)
    {
        // 선행스킬 일 경우, A=0,Z=25 값을 true;
        arr[skill[i]-'A'] = true;
    }

    // skill_trees 탐색
    for(int i=0, n=skill_trees.size(); i<n; i++)
    {
        // index: 선행스킬 단계
        // check: true-사용가능, false-사용불가능
        int index=0, check=1;
        for(int j=0, size=skill_trees[i].size(); j<size; j++)
        {
            // 선행 스킬이 아닐 경우, 다음 순번으로
            if(!arr[skill_trees[i][j]-'A']) continue;

            // 현재 탐색 스킬이 선행스킬 단계와 다를 경우, 사용불가능 처리 후, 탐색 종료.
            if(skill[index]!=skill_trees[i][j])
            {
                check = 0;
                break;
            }
            // 사용 가능할 경우, 선행스킬 단계를 1 올림
            else index++;
        }
        // 사용가능 한 스킬 트리 일 경우, 결과+1
        if(check) answer++;
    }
    return answer;
}