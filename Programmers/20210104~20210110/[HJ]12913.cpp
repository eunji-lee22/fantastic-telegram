#include <iostream>
#include <vector>
using namespace std;

int getMaxValue(int a, int b, int c)
{
    int max = (a > b) ? a : b;
    
    return (max > c) ? max : c;
}
int solution(vector<vector<int> > land)
{    
    for(int i=1, size=land.size(); i<size; i++)
    {
        land[i][0] += getMaxValue(land[i-1][1], land[i-1][2], land[i-1][3]);
        land[i][1] += getMaxValue(land[i-1][0], land[i-1][2], land[i-1][3]);
        land[i][2] += getMaxValue(land[i-1][0], land[i-1][1], land[i-1][3]);
        land[i][3] += getMaxValue(land[i-1][0], land[i-1][1], land[i-1][2]);
    }
    
    int maxValue = getMaxValue(land.back()[1], land.back()[2], land.back()[3]);
    return (land.back()[0] > maxValue) ? land.back()[0] : maxValue;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.08ms, 3.97MB)
 * 테스트 2 〉	통과 (0.08ms, 3.97MB)
 * 테스트 3 〉	통과 (0.07ms, 3.95MB)
 * 테스트 4 〉	통과 (0.07ms, 3.98MB)
 * 테스트 5 〉	통과 (0.08ms, 3.96MB)
 * 테스트 6 〉	통과 (0.08ms, 3.98MB)
 * 테스트 7 〉	통과 (0.09ms, 3.96MB)
 * 테스트 8 〉	통과 (0.07ms, 3.96MB)
 * 테스트 9 〉	통과 (0.08ms, 3.96MB)
 * 테스트 10 〉	통과 (0.09ms, 3.81MB)
 * 테스트 11 〉	통과 (0.07ms, 3.96MB)
 * 테스트 12 〉	통과 (0.08ms, 3.96MB)
 * 테스트 13 〉	통과 (0.08ms, 3.98MB)
 * 테스트 14 〉	통과 (0.08ms, 3.97MB)
 * 테스트 15 〉	통과 (0.08ms, 3.84MB)
 * 테스트 16 〉	통과 (0.08ms, 3.9MB)
 * 테스트 17 〉	통과 (0.08ms, 3.97MB)
 * 테스트 18 〉	통과 (0.08ms, 3.97MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (6.38ms, 25.8MB)
 * 테스트 2 〉	통과 (6.33ms, 25.9MB)
 * 테스트 3 〉	통과 (6.42ms, 25.8MB)
 * 테스트 4 〉	통과 (6.39ms, 25.9MB)
 * 채점 결과
 * 정확성: 59.8
 * 효율성: 40.2
 * 합계: 100.0 / 100.0
 * 점수: 7
 */