#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long result;
    
    for(int i=1; i<=n; i++)
    {
        result = (long long) x * (long long) i;
        answer.push_back(result);
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.91MB)
 * 테스트 2 〉	통과 (0.05ms, 3.97MB)
 * 테스트 3 〉	통과 (0.09ms, 3.95MB)
 * 테스트 4 〉	통과 (0.11ms, 3.97MB)
 * 테스트 5 〉	통과 (0.10ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.98MB)
 * 테스트 7 〉	통과 (0.15ms, 3.97MB)
 * 테스트 8 〉	통과 (0.09ms, 3.89MB)
 * 테스트 9 〉	통과 (0.21ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.84MB)
 * 테스트 11 〉	통과 (0.12ms, 3.97MB)
 * 테스트 12 〉	통과 (0.12ms, 3.97MB)
 * 테스트 13 〉	통과 (0.22ms, 3.96MB)
 * 테스트 14 〉	통과 (0.24ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */