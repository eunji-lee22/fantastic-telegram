#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isFirst = true;
    
    for(auto c : s)
    {
        if(c == ' ')
        {
            answer += ' ';
            isFirst = true;
        }
        else
        {
            answer += (isFirst) ? toupper(c) : tolower(c);
            isFirst = false;
        }        
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.94MB)
 * 테스트 3 〉	통과 (0.01ms, 3.98MB)
 * 테스트 4 〉	통과 (0.01ms, 3.97MB)
 * 테스트 5 〉	통과 (0.01ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.93MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.93MB)
 * 테스트 9 〉	통과 (0.01ms, 3.83MB)
 * 테스트 10 〉	통과 (0.01ms, 3.96MB)
 * 테스트 11 〉	통과 (0.01ms, 3.93MB)
 * 테스트 12 〉	통과 (0.01ms, 3.96MB)
 * 테스트 13 〉	통과 (0.01ms, 3.93MB)
 * 테스트 14 〉	통과 (0.01ms, 3.96MB)
 * 테스트 15 〉	통과 (0.01ms, 3.94MB)
 * 테스트 16 〉	통과 (0.01ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 5
 */