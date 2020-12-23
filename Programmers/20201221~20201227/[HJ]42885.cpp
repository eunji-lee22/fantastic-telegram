#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;
int getMinWeightIndex(vector<int> &v, int limit)
{
    int left = 1, right = v.size()-1;
    
    if(v[left] + v[right] > limit) return right+1;
    while(left < right)
    {
        int mid = (left + right) / 2;
        (v[mid] <= limit - v.front()) ? right = mid : left = mid + 1;
    }
    
    return left;
}
int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;
    deque<int> dq_minWeight;
    
    sort(people.begin(), people.end(), greater<>());
    int index = getMinWeightIndex(people, limit);
    for(int i = 0, size = people.size(); i < size; i++)
        (i < index) ? dq.push_back(people[i]) : dq_minWeight.push_back(people[i]);
    
    while(!dq.empty())
    {
        int front = dq.front(), back = limit, minValue = limit;
        dq.pop_front();
        
        if(!dq.empty()) back = dq.back();
        if(!dq_minWeight.empty()) minValue = dq_minWeight.front();
        
        if(front + back <= limit)
            dq.pop_back();
        else if(front + minValue <= limit )
            dq_minWeight.pop_front();
        
        answer++;
    }
    
    if(!dq_minWeight.empty())
        answer += (dq_minWeight.size() - 1) / 2 + 1;
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.24ms, 3.94MB)
 * 테스트 2 〉	통과 (0.13ms, 3.82MB)
 * 테스트 3 〉	통과 (0.15ms, 3.97MB)
 * 테스트 4 〉	통과 (0.15ms, 3.93MB)
 * 테스트 5 〉	통과 (0.10ms, 3.96MB)
 * 테스트 6 〉	통과 (0.05ms, 3.97MB)
 * 테스트 7 〉	통과 (0.07ms, 3.98MB)
 * 테스트 8 〉	통과 (0.02ms, 3.98MB)
 * 테스트 9 〉	통과 (0.02ms, 3.98MB)
 * 테스트 10 〉	통과 (0.13ms, 3.97MB)
 * 테스트 11 〉	통과 (0.13ms, 3.96MB)
 * 테스트 12 〉	통과 (0.12ms, 3.72MB)
 * 테스트 13 〉	통과 (0.14ms, 3.96MB)
 * 테스트 14 〉	통과 (0.15ms, 3.95MB)
 * 테스트 15 〉	통과 (0.02ms, 3.93MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (2.28ms, 5.07MB)
 * 테스트 2 〉	통과 (1.90ms, 5MB)
 * 테스트 3 〉	통과 (1.79ms, 4.86MB)
 * 테스트 4 〉	통과 (1.67ms, 5.07MB)
 * 테스트 5 〉	통과 (1.66ms, 4.74MB)
 * 채점 결과
 * 정확성: 75.0
 * 효율성: 25.0
 * 합계: 100.0 / 100.0
 * 점수: 7
 */