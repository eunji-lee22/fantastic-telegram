#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int N;
bool compare(string s1, string s2)
{
    if(s1[N]==s2[N]) return s1 < s2;
    return s1[N] <= s2[N];
}
vector<string> solution(vector<string> strings, int n) {
    N=n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}

/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.92MB)
 * 테스트 2 〉	통과 (0.01ms, 3.94MB)
 * 테스트 3 〉	통과 (0.04ms, 3.9MB)
 * 테스트 4 〉	통과 (0.03ms, 3.94MB)
 * 테스트 5 〉	통과 (0.01ms, 3.71MB)
 * 테스트 6 〉	통과 (0.04ms, 3.96MB)
 * 테스트 7 〉	통과 (0.02ms, 3.93MB)
 * 테스트 8 〉	통과 (0.02ms, 3.97MB)
 * 테스트 9 〉	통과 (0.02ms, 3.94MB)
 * 테스트 10 〉	통과 (0.06ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.98MB)
 * 테스트 12 〉	통과 (0.07ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 5 (실패1)
 * /
