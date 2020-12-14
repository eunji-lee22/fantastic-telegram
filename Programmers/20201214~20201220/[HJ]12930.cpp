#include <string>
using namespace std;

string solution(string s) {
    int index=0;
    char c;
    string answer = "";
    
    for(int i=0, size=s.size(); i<size; i++)
    {
        c = s[i];
        
        if(s[i] == ' ') index = -1;
        else if(index%2==0 && s[i] >= 'a' && s[i] <= 'z')
            c = c - 'a' + 'A';
        else if(index%2==1 && s[i] >= 'A' && s[i] <= 'Z')
            c = c - 'A' + 'a';
        
        answer += c;
        index++;
    }
    
    return answer;
}
/*
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.94MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.9MB)
 * 테스트 4 〉	통과 (0.01ms, 3.93MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.01ms, 3.9MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.93MB)
 * 테스트 9 〉	통과 (0.01ms, 3.95MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.74MB)
 * 테스트 12 〉	통과 (0.01ms, 3.94MB)
 * 테스트 13 〉	통과 (0.01ms, 3.95MB)
 * 테스트 14 〉	통과 (0.01ms, 3.85MB)
 * 테스트 15 〉	통과 (0.01ms, 3.91MB)
 * 테스트 16 〉	통과 (0.01ms, 3.72MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 7
 * /