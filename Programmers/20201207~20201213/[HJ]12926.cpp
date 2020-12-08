#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0, size=s.size(); i<size; i++)
    {
        if(s[i] == ' ') answer += ' ';
        else if(s[i] >= 'a' && s[i] <= 'z')
            answer += (s[i] + n > 'z') ? s[i] + n - 26 : s[i] + n;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            answer += (s[i] + n > 'Z') ? s[i] + n - 26 : s[i] + n;        
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.95MB)
 * 테스트 2 〉	통과 (0.01ms, 3.97MB)
 * 테스트 3 〉	통과 (0.01ms, 3.94MB)
 * 테스트 4 〉	통과 (0.01ms, 3.95MB)
 * 테스트 5 〉	통과 (0.01ms, 3.72MB)
 * 테스트 6 〉	통과 (0.01ms, 3.98MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.95MB)
 * 테스트 9 〉	통과 (0.01ms, 3.94MB)
 * 테스트 10 〉	통과 (0.01ms, 3.98MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.01ms, 3.97MB)
 * 테스트 13 〉	통과 (0.11ms, 3.91MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 5점
 * /