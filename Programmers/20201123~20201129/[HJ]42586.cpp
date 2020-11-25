#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day=1, cnt=0, i=0, size=progresses.size();
    
    while(i<size)
    {
        if(progresses[i] + speeds[i] * day < 100)
        {
            day = (99 - progresses[i]) / speeds[i] + 1;
            if(cnt > 0) answer.push_back(cnt);
            cnt = 0;
            i--;
        }
        else cnt++;
        
        i++;
    }
    answer.push_back(cnt);
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.02ms, 3.89MB)
 * 테스트 5 〉	통과 (0.01ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.72MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.97MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 7점
 * /