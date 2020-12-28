#include <string>
#include <vector>

using namespace std;
int targetNumber = 0, cnt=0;
void backTracking(vector<int>& v, int i, int size, int sum)
{
    if(i == size)
    {
        if(sum == targetNumber) cnt++;
        return;
    }
    
    int currentNumber = v[i];
    backTracking(v, i+1, size, sum+currentNumber);
    backTracking(v, i+1, size, sum-currentNumber);
}
int solution(vector<int> numbers, int target) {
    targetNumber = target;
    backTracking(numbers, 0, numbers.size(), 0);
    int answer = cnt;
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (4.02ms, 3.96MB)
 * 테스트 2 〉	통과 (3.97ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.79MB)
 * 테스트 4 〉	통과 (0.02ms, 3.93MB)
 * 테스트 5 〉	통과 (0.14ms, 3.97MB)
 * 테스트 6 〉	통과 (0.02ms, 3.97MB)
 * 테스트 7 〉	통과 (0.01ms, 3.94MB)
 * 테스트 8 〉	통과 (0.04ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */