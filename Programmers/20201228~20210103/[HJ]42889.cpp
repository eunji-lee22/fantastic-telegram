#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, double> p1, pair<int, double> p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int max = stages.size(), size = stages.size(), index=0;
    vector<pair<int, double>> v;
    sort(stages.begin(), stages.end());
    
    for(int i=1; i<=N; i++)
    {
        int cnt = 0;
        while(index < size && stages[index] <= i)
        {
            cnt++;
            index++;
        }
        double result = (max) ? (double)cnt/max : 0;
        v.push_back(make_pair(i, result));
        max -= cnt;
    }
    sort(v.begin(), v.end(), compare);
    
    for(pair<int, double> p:v)
    {
        answer.push_back(p.first);
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.95MB)
 * 테스트 2 〉	통과 (0.03ms, 3.93MB)
 * 테스트 3 〉	통과 (0.53ms, 3.98MB)
 * 테스트 4 〉	통과 (3.77ms, 6.51MB)
 * 테스트 5 〉	통과 (8.16ms, 9.85MB)
 * 테스트 6 〉	통과 (0.08ms, 3.96MB)
 * 테스트 7 〉	통과 (0.36ms, 3.94MB)
 * 테스트 8 〉	통과 (3.74ms, 6.59MB)
 * 테스트 9 〉	통과 (8.06ms, 9.95MB)
 * 테스트 10 〉	통과 (2.85ms, 6.34MB)
 * 테스트 11 〉	통과 (3.02ms, 6.59MB)
 * 테스트 12 〉	통과 (4.72ms, 7.77MB)
 * 테스트 13 〉	통과 (5.12ms, 8.23MB)
 * 테스트 14 〉	통과 (0.02ms, 3.96MB)
 * 테스트 15 〉	통과 (1.20ms, 5.17MB)
 * 테스트 16 〉	통과 (0.61ms, 4.44MB)
 * 테스트 17 〉	통과 (1.19ms, 5.19MB)
 * 테스트 18 〉	통과 (0.67ms, 4.4MB)
 * 테스트 19 〉	통과 (0.15ms, 3.94MB)
 * 테스트 20 〉	통과 (0.92ms, 4.62MB)
 * 테스트 21 〉	통과 (1.79ms, 6.3MB)
 * 테스트 22 〉	통과 (2.44ms, 9.89MB)
 * 테스트 23 〉	통과 (3.18ms, 9.61MB)
 * 테스트 24 〉	통과 (4.47ms, 9.71MB)
 * 테스트 25 〉	통과 (0.01ms, 3.95MB)
 * 테스트 26 〉	통과 (0.01ms, 3.94MB)
 * 테스트 27 〉	통과 (0.01ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 6
 */