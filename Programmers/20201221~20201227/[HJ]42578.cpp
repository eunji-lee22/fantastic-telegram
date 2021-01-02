#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(vector<string> v1, vector<string> v2)
{
    return v1[1] < v2[1];
}
int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    sort(clothes.begin(), clothes.end(), comp);
    for(int i=0, size=clothes.size(); i<size; i++)
    {
        string clothesType = clothes[i][1];
        int cnt = 2;
        while (i+1 < size)
        {
            if(clothes[i+1][1] != clothesType) break;
            i++;
            cnt++;
        }
        answer *= cnt;
    }
    
    return answer-1;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.94MB)
 * 테스트 2 〉	통과 (0.04ms, 3.72MB)
 * 테스트 3 〉	통과 (0.02ms, 3.95MB)
 * 테스트 4 〉	통과 (0.06ms, 3.98MB)
 * 테스트 5 〉	통과 (0.03ms, 3.95MB)
 * 테스트 6 〉	통과 (0.02ms, 3.93MB)
 * 테스트 7 〉	통과 (0.04ms, 3.93MB)
 * 테스트 8 〉	통과 (0.03ms, 3.98MB)
 * 테스트 9 〉	통과 (0.02ms, 3.93MB)
 * 테스트 10 〉	통과 (0.01ms, 3.96MB)
 * 테스트 11 〉	통과 (0.01ms, 3.96MB)
 * 테스트 12 〉	통과 (0.05ms, 3.98MB)
 * 테스트 13 〉	통과 (0.03ms, 3.89MB)
 * 테스트 14 〉	통과 (0.01ms, 3.96MB)
 * 테스트 15 〉	통과 (0.01ms, 3.89MB)
 * 테스트 16 〉	통과 (0.01ms, 3.98MB)
 * 테스트 17 〉	통과 (0.02ms, 3.94MB)
 * 테스트 18 〉	통과 (0.03ms, 3.94MB)
 * 테스트 19 〉	통과 (0.03ms, 3.94MB)
 * 테스트 20 〉	통과 (0.01ms, 3.96MB)
 * 테스트 21 〉	통과 (0.01ms, 3.85MB)
 * 테스트 22 〉	통과 (0.01ms, 3.98MB)
 * 테스트 23 〉	통과 (0.02ms, 3.71MB)
 * 테스트 24 〉	통과 (0.02ms, 3.82MB)
 * 테스트 25 〉	통과 (0.04ms, 3.94MB)
 * 테스트 26 〉	통과 (0.04ms, 3.96MB)
 * 테스트 27 〉	통과 (0.01ms, 3.98MB)
 * 테스트 28 〉	통과 (0.03ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */