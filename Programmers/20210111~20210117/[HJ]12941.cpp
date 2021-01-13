#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    for(int i=0, size=A.size(); i<size; i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.02ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.96MB)
 * 테스트 5 〉	통과 (0.02ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.83MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.02ms, 3.97MB)
 * 테스트 9 〉	통과 (0.01ms, 3.95MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.01ms, 3.96MB)
 * 테스트 13 〉	통과 (0.01ms, 3.96MB)
 * 테스트 14 〉	통과 (0.01ms, 3.96MB)
 * 테스트 15 〉	통과 (0.01ms, 3.96MB)
 * 테스트 16 〉	통과 (0.01ms, 3.77MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (0.09ms, 3.95MB)
 * 테스트 2 〉	통과 (0.10ms, 3.95MB)
 * 테스트 3 〉	통과 (0.08ms, 3.95MB)
 * 테스트 4 〉	통과 (0.08ms, 3.94MB)
 * 채점 결과
 * 정확성: 69.6
 * 효율성: 30.4
 * 합계: 100.0 / 100.0
 * 점수: 2
 */