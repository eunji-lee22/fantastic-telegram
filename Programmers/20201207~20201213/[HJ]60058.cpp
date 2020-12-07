#include <string>
#include <vector>

using namespace std;

string solution(string p) {
    if(p == "") return "";
    
    string answer = "", u = "", v = "";
    int l=0,r=0;
    for(int i=0, size=p.size(); i<size; i++)
    {
        if(i == 0 || l!=r)
        {
            u += p[i];         
            (p[i] == '(') ? l++ : r++;
        }
        else if(l == r) v += p[i];        
    }
    
    if(u[0] == '(') answer += u + solution(v);
    else
    {
        answer += '(' + solution(v) + ')';
        for(int i=1, size=u.size()-1; i<size; i++)
        {
            answer += (u[i] == ')') ? '(' : ')';
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.93MB)
 * 테스트 5 〉	통과 (0.01ms, 3.98MB)
 * 테스트 6 〉	통과 (0.01ms, 3.89MB)
 * 테스트 7 〉	통과 (0.01ms, 3.84MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.97MB)
 * 테스트 10 〉	통과 (0.01ms, 3.73MB)
 * 테스트 11 〉	통과 (0.02ms, 3.86MB)
 * 테스트 12 〉	통과 (0.02ms, 3.98MB)
 * 테스트 13 〉	통과 (0.02ms, 3.99MB)
 * 테스트 14 〉	통과 (0.05ms, 3.97MB)
 * 테스트 15 〉	통과 (0.05ms, 3.91MB)
 * 테스트 16 〉	통과 (0.11ms, 3.97MB)
 * 테스트 17 〉	통과 (0.06ms, 3.89MB)
 * 테스트 18 〉	통과 (0.11ms, 3.71MB)
 * 테스트 19 〉	통과 (0.23ms, 3.98MB)
 * 테스트 20 〉	통과 (0.21ms, 3.91MB)
 * 테스트 21 〉	통과 (0.08ms, 3.98MB)
 * 테스트 22 〉	통과 (0.05ms, 3.93MB)
 * 테스트 23 〉	통과 (0.16ms, 3.74MB)
 * 테스트 24 〉	통과 (0.03ms, 3.95MB)
 * 테스트 25 〉	통과 (0.07ms, 3.84MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 5
 * /