#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for(int i=1; i*i<=yellow; i++)
    {
        if(yellow%i != 0) continue;
        int width = yellow / i;
        int height = i;
        
        if(brown != (height+2)*(width+2)-width*height) continue;
        answer.push_back(width+2);
        answer.push_back(height+2);
        break;    
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.83MB)
 * 테스트 3 〉	통과 (0.01ms, 3.72MB)
 * 테스트 4 〉	통과 (0.01ms, 3.97MB)
 * 테스트 5 〉	통과 (0.01ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.93MB)
 * 테스트 8 〉	통과 (0.01ms, 3.89MB)
 * 테스트 9 〉	통과 (0.02ms, 3.78MB)
 * 테스트 10 〉	통과 (0.01ms, 3.97MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.03ms, 3.96MB)
 * 테스트 13 〉	통과 (0.01ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */