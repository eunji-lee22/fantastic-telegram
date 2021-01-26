#include <string>
#include <vector>
#include <deque>

using namespace std;

void toLowerString(string& city)
{
    for(auto iter = city.begin(); iter!=city.end(); iter++)
    {
        *iter += (*iter >= 'A' && *iter <= 'Z') ? 'a' - 'A' : 0;
    }
}
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> dq;
    
    for(string city : cities)
    {        
        toLowerString(city);
        // 메모: c++ 에서 범위는 [) 이므로 dq.end() 실존하지 않음.
        for(auto iter = dq.begin(); iter!=dq.end(); iter++)
        {
            if(city == *iter)
            {
                answer += -4;
                dq.erase(iter);
                break;
            }
        }
        answer += 5;
        dq.push_front(city);
        
        if(dq.size() > cacheSize) dq.pop_back();               
        
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.94MB)
 * 테스트 2 〉	통과 (0.01ms, 3.94MB)
 * 테스트 3 〉	통과 (0.01ms, 3.79MB)
 * 테스트 4 〉	통과 (0.01ms, 3.94MB)
 * 테스트 5 〉	통과 (0.01ms, 3.94MB)
 * 테스트 6 〉	통과 (0.01ms, 3.93MB)
 * 테스트 7 〉	통과 (0.01ms, 3.97MB)
 * 테스트 8 〉	통과 (0.01ms, 3.89MB)
 * 테스트 9 〉	통과 (0.01ms, 3.94MB)
 * 테스트 10 〉	통과 (0.03ms, 3.89MB)
 * 테스트 11 〉	통과 (18.56ms, 12.2MB)
 * 테스트 12 〉	통과 (0.01ms, 3.93MB)
 * 테스트 13 〉	통과 (0.02ms, 3.95MB)
 * 테스트 14 〉	통과 (0.03ms, 3.78MB)
 * 테스트 15 〉	통과 (0.04ms, 3.96MB)
 * 테스트 16 〉	통과 (0.05ms, 3.94MB)
 * 테스트 17 〉	통과 (0.07ms, 3.89MB)
 * 테스트 18 〉	통과 (0.13ms, 3.98MB)
 * 테스트 19 〉	통과 (0.17ms, 3.93MB)
 * 테스트 20 〉	통과 (0.21ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 4
 */