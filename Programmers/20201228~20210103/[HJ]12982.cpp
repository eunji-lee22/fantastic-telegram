#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int sum=0, cnt=0;
    sort(d.begin(), d.end());
    
    for(int i: d)
    {
        if(sum + i > budget) break;
        cnt++;
        sum += i;
    }
    
    return cnt;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.78MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.92MB)
 * 테스트 4 〉	통과 (0.01ms, 3.97MB)
 * 테스트 5 〉	통과 (0.01ms, 3.97MB)
 * 테스트 6 〉	통과 (0.01ms, 3.97MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.97MB)
 * 테스트 9 〉	통과 (0.01ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.97MB)
 * 테스트 11 〉	통과 (0.01ms, 3.98MB)
 * 테스트 12 〉	통과 (0.01ms, 3.97MB)
 * 테스트 13 〉	통과 (0.01ms, 3.85MB)
 * 테스트 14 〉	통과 (0.01ms, 3.96MB)
 * 테스트 15 〉	통과 (0.01ms, 3.97MB)
 * 테스트 16 〉	통과 (0.01ms, 3.97MB)
 * 테스트 17 〉	통과 (0.01ms, 3.91MB)
 * 테스트 18 〉	통과 (0.01ms, 3.9MB)
 * 테스트 19 〉	통과 (0.01ms, 3.97MB)
 * 테스트 20 〉	통과 (0.01ms, 3.98MB)
 * 테스트 21 〉	통과 (0.01ms, 3.73MB)
 * 테스트 22 〉	통과 (0.01ms, 3.96MB)
 * 테스트 23 〉	통과 (0.01ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */