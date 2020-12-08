#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, isPrime[1000001] = {0};
    
    for(int i=2; i*i<=n; i++)
        if(isPrime[i]==0)
            for(int j = i*i; j<=n; j+=i) isPrime[j] = 1;
    
    for(int i=2; i<=n; i++) answer += (isPrime[i]) ? 0 : 1;
    
    return answer;
}
/*
 * 정확성  테스트
 * 테스트 1 〉	통과 (1.93ms, 7.5MB)
 * 테스트 2 〉	통과 (1.98ms, 7.45MB)
 * 테스트 3 〉	통과 (2.17ms, 7.42MB)
 * 테스트 4 〉	통과 (2.24ms, 7.43MB)
 * 테스트 5 〉	통과 (2.24ms, 7.56MB)
 * 테스트 6 〉	통과 (1.99ms, 7.3MB)
 * 테스트 7 〉	통과 (2.04ms, 7.46MB)
 * 테스트 8 〉	통과 (2.24ms, 7.45MB)
 * 테스트 9 〉	통과 (1.93ms, 7.37MB)
 * 테스트 10 〉	통과 (2.51ms, 7.47MB)
 * 테스트 11 〉	통과 (5.04ms, 7.31MB)
 * 테스트 12 〉	통과 (2.76ms, 7.46MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (6.20ms, 7.54MB)
 * 테스트 2 〉	통과 (5.34ms, 7.53MB)
 * 테스트 3 〉	통과 (5.52ms, 7.36MB)
 * 테스트 4 〉	통과 (5.94ms, 7.48MB)
 * 채점 결과
 * 정확성: 75.0
 * 효율성: 25.0
 * 합계: 100.0 / 100.0
 * 점수: 5
 * /