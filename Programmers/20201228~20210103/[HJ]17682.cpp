#include <string>
#include <stack>

using namespace std;

int solution(string dartResult) {
    int answer = 0, num=0;
    stack<int> s;
    
    for(char c : dartResult)
    {
        if(c >= '0' && c <= '9')
        {
            num = num * 10 + c-'0';
        }
        else
        {
            if(c == 'D') s.push(num * num);
            else if(c == 'T') s.push(num * num * num);
            else if(c == '#')
            {
                int top = s.top();                
                s.pop();
                s.push(top * -1);
            }
            else if(c == '*')
            {
                int top = s.top();                
                s.pop();
                int sec = s.top();
                s.pop();
                s.push(2*sec);
                s.push(2*top);
            }
            else s.push(num);
            
            num = 0;
        }
        // else
    }
    
    while(!s.empty())
    {
        int top = s.top();
        s.pop();
        answer += top;
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.99MB)
 * 테스트 2 〉	통과 (0.01ms, 3.77MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.01ms, 3.95MB)
 * 테스트 5 〉	통과 (0.01ms, 3.97MB)
 * 테스트 6 〉	통과 (0.01ms, 3.97MB)
 * 테스트 7 〉	통과 (0.01ms, 3.78MB)
 * 테스트 8 〉	통과 (0.01ms, 3.88MB)
 * 테스트 9 〉	통과 (0.01ms, 3.94MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.96MB)
 * 테스트 12 〉	통과 (0.01ms, 3.94MB)
 * 테스트 13 〉	통과 (0.01ms, 3.94MB)
 * 테스트 14 〉	통과 (0.01ms, 3.99MB)
 * 테스트 15 〉	통과 (0.01ms, 4MB)
 * 테스트 16 〉	통과 (0.01ms, 3.96MB)
 * 테스트 17 〉	통과 (0.01ms, 3.94MB)
 * 테스트 18 〉	통과 (0.01ms, 3.97MB)
 * 테스트 19 〉	통과 (0.01ms, 3.86MB)
 * 테스트 20 〉	통과 (0.01ms, 3.96MB)
 * 테스트 21 〉	통과 (0.01ms, 3.93MB)
 * 테스트 22 〉	통과 (0.01ms, 3.96MB)
 * 테스트 23 〉	통과 (0.01ms, 4MB)
 * 테스트 24 〉	통과 (0.01ms, 3.93MB)
 * 테스트 25 〉	통과 (0.01ms, 3.97MB)
 * 테스트 26 〉	통과 (0.01ms, 3.96MB)
 * 테스트 27 〉	통과 (0.01ms, 3.82MB)
 * 테스트 28 〉	통과 (0.01ms, 3.96MB)
 * 테스트 29 〉	통과 (0.01ms, 3.78MB)
 * 테스트 30 〉	통과 (0.01ms, 3.96MB)
 * 테스트 31 〉	통과 (0.01ms, 3.98MB)
 * 테스트 32 〉	통과 (0.01ms, 3.95MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */