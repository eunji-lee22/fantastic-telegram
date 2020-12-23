#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b){ return b ? gcd(b, a%b) : a; }
vector<int> solution(int n, int m) {
    vector<int> answer;
    
    if(n >= m)
    {
        int v1 = gcd(n, m);
        answer.push_back(v1);
        answer.push_back((n/v1)*m);
    }
    else
    {
        int v1 = gcd(m, n);
        answer.push_back(v1);
        answer.push_back((m/v1)*n);
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.92MB)
 * 테스트 4 〉	통과 (0.01ms, 3.86MB)
 * 테스트 5 〉	통과 (0.01ms, 3.97MB)
 * 테스트 6 〉	통과 (0.01ms, 3.89MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.97MB)
 * 테스트 9 〉	통과 (0.01ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.87MB)
 * 테스트 11 〉	통과 (0.01ms, 3.97MB)
 * 테스트 12 〉	통과 (0.01ms, 3.93MB)
 * 테스트 13 〉	통과 (0.01ms, 3.97MB)
 * 테스트 14 〉	통과 (0.01ms, 3.91MB)
 * 테스트 15 〉	통과 (0.01ms, 3.92MB)
 * 테스트 16 〉	통과 (0.01ms, 3.91MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */