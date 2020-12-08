#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int size = number.size();
    
    for(int i=0; i<size; i++)
    {        
        if(k==0) answer += number[i];
        for(int j=1; j<=k; j++)
        {
            if(number[i] < number[i+j] || i+j >= size)
            {
                k--;
                break;
            }
            if(j==k) answer += number[i];
        }
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.95MB)
 * 테스트 2 〉	통과 (0.01ms, 3.89MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.02ms, 3.98MB)
 * 테스트 5 〉	통과 (0.03ms, 3.79MB)
 * 테스트 6 〉	통과 (5.88ms, 3.89MB)
 * 테스트 7 〉	통과 (12.12ms, 3.95MB)
 * 테스트 8 〉	통과 (120.43ms, 3.86MB)
 * 테스트 9 〉	통과 (1.44ms, 5.65MB)
 * 테스트 10 〉	통과 (4769.99ms, 5.78MB)
 * 테스트 11 〉	통과 (0.01ms, 3.97MB)
 * 테스트 12 〉	통과 (0.01ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 8점
 * /