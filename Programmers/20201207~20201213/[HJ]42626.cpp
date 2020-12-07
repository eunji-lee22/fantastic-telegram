#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    make_heap(scoville.begin(), scoville.end(), greater<>{});
    while(scoville.front() < K)
    {
        if(scoville.size() == 1) return -1;
        int min1 = scoville.front();
        pop_heap(scoville.begin(), scoville.end(), greater<>{});
        scoville.pop_back();
        int min2 = scoville.front();
        pop_heap(scoville.begin(), scoville.end(), greater<>{});
        scoville.pop_back();

        int newScoville = min1 + (min2 * 2);
        scoville.push_back(newScoville);
        push_heap(scoville.begin(), scoville.end(), greater<>{});

        answer++;
    }

    return answer;
}
/*
 * review: priority_queue<int,vector<int>,greater<int>> pq (scoville.begin(),scoville.end());
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.94MB)
 * 테스트 2 〉	통과 (0.01ms, 3.98MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.95MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.07ms, 3.98MB)
 * 테스트 7 〉	통과 (0.06ms, 3.98MB)
 * 테스트 8 〉	통과 (0.01ms, 3.98MB)
 * 테스트 9 〉	통과 (0.02ms, 3.79MB)
 * 테스트 10 〉	통과 (0.06ms, 3.96MB)
 * 테스트 11 〉	통과 (0.04ms, 3.96MB)
 * 테스트 12 〉	통과 (0.11ms, 3.96MB)
 * 테스트 13 〉	통과 (0.06ms, 3.7MB)
 * 테스트 14 〉	통과 (0.01ms, 3.91MB)
 * 테스트 15 〉	통과 (0.08ms, 3.94MB)
 * 테스트 16 〉	통과 (0.01ms, 3.94MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (26.17ms, 8.4MB)
 * 테스트 2 〉	통과 (52.52ms, 13MB)
 * 테스트 3 〉	통과 (205.30ms, 35.7MB)
 * 테스트 4 〉	통과 (19.39ms, 7.34MB)
 * 테스트 5 〉	통과 (215.87ms, 37.2MB)
 * 채점 결과
 * 정확성: 76.2
 * 효율성: 23.8
 * 합계: 100.0 / 100.0
 * 점수: 8
 * /