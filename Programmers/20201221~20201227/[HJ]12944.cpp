#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for(int i : arr)
    {
        answer += i;
    }
    
    return answer / arr.size();
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.94MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.01ms, 3.97MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.76MB)
 * 테스트 10 〉	통과 (0.01ms, 3.89MB)
 * 테스트 11 〉	통과 (0.01ms, 3.98MB)
 * 테스트 12 〉	통과 (0.01ms, 3.94MB)
 * 테스트 13 〉	통과 (0.01ms, 3.94MB)
 * 테스트 14 〉	통과 (0.01ms, 3.93MB)
 * 테스트 15 〉	통과 (0.01ms, 3.96MB)
 * 테스트 16 〉	통과 (0.01ms, 3.94MB)
 * 점수: 1
 */