#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0, index=0, size=priorities.size();
    vector<int> v = priorities;
    
    sort(v.begin(), v.end(), greater<>());
    while(1)
    {
        if(index == size) index = 0;
        
        if(v[answer] == priorities[index])
        {
            priorities[index] = 0;
            answer++;
            
            if(location == index)
            {
                cout << answer << "\n";
                break;
            }
            
        }          
        
        index++;        
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.97MB)
 * 테스트 2 〉	통과 (0.03ms, 3.96MB)
 * 테스트 3 〉	통과 (0.03ms, 3.96MB)
 * 테스트 4 〉	통과 (0.02ms, 3.96MB)
 * 테스트 5 〉	통과 (0.02ms, 3.96MB)
 * 테스트 6 〉	통과 (0.02ms, 3.97MB)
 * 테스트 7 〉	통과 (0.02ms, 3.96MB)
 * 테스트 8 〉	통과 (0.02ms, 3.96MB)
 * 테스트 9 〉	통과 (0.02ms, 3.96MB)
 * 테스트 10 〉	통과 (0.02ms, 3.97MB)
 * 테스트 11 〉	통과 (0.02ms, 3.96MB)
 * 테스트 12 〉	통과 (0.02ms, 3.78MB)
 * 테스트 13 〉	통과 (0.02ms, 3.96MB)
 * 테스트 14 〉	통과 (0.02ms, 3.96MB)
 * 테스트 15 〉	통과 (0.02ms, 3.97MB)
 * 테스트 16 〉	통과 (0.02ms, 3.96MB)
 * 테스트 17 〉	통과 (0.02ms, 3.95MB)
 * 테스트 18 〉	통과 (0.02ms, 3.95MB)
 * 테스트 19 〉	통과 (0.02ms, 3.96MB)
 * 테스트 20 〉	통과 (0.02ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 7점
 * /