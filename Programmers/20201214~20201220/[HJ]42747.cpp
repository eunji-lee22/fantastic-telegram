#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<>());
    for(int i=0, size=citations.size(); i<size; i++)
    {
        if(i+1>citations[i]) break;
        answer = min(i+1, citations[i]);
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.93MB)
 * 테스트 2 〉	통과 (0.04ms, 3.93MB)
 * 테스트 3 〉	통과 (0.04ms, 3.96MB)
 * 테스트 4 〉	통과 (0.03ms, 3.93MB)
 * 테스트 5 〉	통과 (0.04ms, 3.9MB)
 * 테스트 6 〉	통과 (0.05ms, 3.93MB)
 * 테스트 7 〉	통과 (0.02ms, 3.94MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.93MB)
 * 테스트 10 〉	통과 (0.03ms, 3.93MB)
 * 테스트 11 〉	통과 (0.05ms, 3.93MB)
 * 테스트 12 〉	통과 (0.01ms, 3.97MB)
 * 테스트 13 〉	통과 (0.05ms, 3.93MB)
 * 테스트 14 〉	통과 (0.04ms, 3.93MB)
 * 테스트 15 〉	통과 (0.05ms, 3.93MB)
 * 테스트 16 〉	통과 (0.01ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 9점
 */