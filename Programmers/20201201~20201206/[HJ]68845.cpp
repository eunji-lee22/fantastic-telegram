#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
   int max = n*(n+1) / 2, h=0, i=0, num=1, course=1, p=0;
    vector<int> answer(max);
    
    while(n)
    {        
        switch(course)
        {
            case 1:                               
                p += h;
                h++;       
                break;
            case 2:
                p++;
                break;
            case 3:                                
                p -= h;     
                h--;                              
                break;
        }        
        
        answer[p] = num;
        i++;
        num++;
        if(i==n)
        {
            i=0;
            n--;
            course = (course==3) ? 1 : course+1;
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.89MB)
 * 테스트 2 〉	통과 (0.01ms, 3.97MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (1.25ms, 4.67MB)
 * 테스트 5 〉	통과 (1.15ms, 4.65MB)
 * 테스트 6 〉	통과 (1.29ms, 4.61MB)
 * 테스트 7 〉	통과 (161.65ms, 109MB)
 * 테스트 8 〉	통과 (162.64ms, 109MB)
 * 테스트 9 〉	통과 (152.16ms, 109MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 4
 * /