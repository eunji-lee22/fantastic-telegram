#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    
    while(n > 1)
    {
        if(answer > 500)
        {
            answer = -1;
            break;
        }
        n = (n % 2) ? n*3+1 : n / 2;
        answer++;
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.96MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.01ms, 3.91MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.93MB)
 * 테스트 9 〉	통과 (0.01ms, 3.77MB)
 * 테스트 10 〉	통과 (0.01ms, 3.69MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.01ms, 3.96MB)
 * 테스트 13 〉	통과 (0.01ms, 3.96MB)
 * 테스트 14 〉	통과 (0.01ms, 3.96MB)
 * 테스트 15 〉	통과 (0.01ms, 3.78MB)
 * 테스트 16 〉	통과 (0.01ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2 
 */