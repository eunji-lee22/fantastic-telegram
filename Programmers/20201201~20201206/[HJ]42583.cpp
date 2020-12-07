#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, size=truck_weights.size(), index=0, weightSum=0;
    queue<int> q;
    
    for(int i=0; i<bridge_length; i++)
    {
        q.push(0);
    }
    
    while(!q.empty())
    {
        // 도착 로직
        weightSum -= q.front();
        q.pop();
        answer++;
        // 전체 truck 다 조회 시. 추가 출발 X. q.size(): length => empty
        if(index >= size) continue;
        // 출발 로직
        if(weightSum + truck_weights[index] <= weight)
        {
            q.push(truck_weights[index]);
            weightSum += truck_weights[index];
            index++;
        }
        else q.push(0);
    }    
    
    return answer;
}

/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.94MB)
 * 테스트 2 〉	통과 (0.17ms, 3.83MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.10ms, 3.95MB)
 * 테스트 5 〉	통과 (0.91ms, 3.96MB)
 * 테스트 6 〉	통과 (0.25ms, 3.95MB)
 * 테스트 7 〉	통과 (0.01ms, 3.94MB)
 * 테스트 8 〉	통과 (0.01ms, 3.95MB)
 * 테스트 9 〉	통과 (0.04ms, 3.79MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.94MB)
 * 테스트 12 〉	통과 (0.01ms, 3.95MB)
 * 테스트 13 〉	통과 (0.02ms, 3.84MB)
 * 테스트 14 〉	통과 (0.01ms, 3.94MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 6점
 * /