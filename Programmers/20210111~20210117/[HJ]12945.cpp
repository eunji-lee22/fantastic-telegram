#include <string>
#include <vector>

using namespace std;

int memoization[100001] = {0};
int solution(int n) {
    memoization[0] = 0;
    memoization[1] = 1;
    
    for(int i=2; i<=n; i++)
    {
        memoization[i] = memoization[i-2] + memoization[i-1];
        memoization[i] = memoization[i] % 1234567;
    }
    
    return memoization[n];
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.83MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.84MB)
 * 테스트 5 〉	통과 (0.01ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.03ms, 3.95MB)
 * 테스트 9 〉	통과 (0.01ms, 3.95MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.96MB)
 * 테스트 12 〉	통과 (0.01ms, 3.95MB)
 * 테스트 13 〉	통과 (0.49ms, 4.01MB)
 * 테스트 14 〉	통과 (0.61ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 6
 */