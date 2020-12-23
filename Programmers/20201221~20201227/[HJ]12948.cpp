#include <string>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for(int i=0, size = phone_number.size(); i<size; i++)
    {
        answer += (i >= size-4) ? phone_number[i] : '*';
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.02ms, 3.94MB)
 * 테스트 4 〉	통과 (0.01ms, 3.94MB)
 * 테스트 5 〉	통과 (0.01ms, 3.92MB)
 * 테스트 6 〉	통과 (0.01ms, 3.94MB)
 * 테스트 7 〉	통과 (0.01ms, 3.92MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.96MB)
 * 테스트 11 〉	통과 (0.01ms, 3.94MB)
 * 테스트 12 〉	통과 (0.01ms, 3.94MB)
 * 테스트 13 〉	통과 (0.01ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */