#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer, sortingArray = arr;
    sort(sortingArray.begin(), sortingArray.end());
    int min = sortingArray[0];
    for(auto iter = arr.begin(); iter!=arr.end(); iter++)
    {
        if(*iter == min) continue;
        
        answer.push_back(*iter);
    }
    
    if(answer.empty()) answer.push_back(-1);
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (13.95ms, 13.5MB)
 * 테스트 2 〉	통과 (0.11ms, 3.98MB)
 * 테스트 3 〉	통과 (0.14ms, 3.94MB)
 * 테스트 4 〉	통과 (0.07ms, 3.97MB)
 * 테스트 5 〉	통과 (0.05ms, 3.96MB)
 * 테스트 6 〉	통과 (0.19ms, 3.75MB)
 * 테스트 7 〉	통과 (0.26ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.02ms, 3.98MB)
 * 테스트 10 〉	통과 (0.01ms, 3.98MB)
 * 테스트 11 〉	통과 (0.02ms, 3.94MB)
 * 테스트 12 〉	통과 (0.02ms, 3.97MB)
 * 테스트 13 〉	통과 (0.05ms, 3.86MB)
 * 테스트 14 〉	통과 (0.19ms, 3.96MB)
 * 테스트 15 〉	통과 (0.08ms, 3.95MB)
 * 테스트 16 〉	통과 (0.21ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1점
 * /