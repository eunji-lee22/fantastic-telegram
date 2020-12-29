#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    int num=0, d = 0;
    
    for(int i=0; i<n; i++)
    {
        num = arr1[i]|arr2[i];
        d = 1 << n-1;
        for(int j=0; j<n; j++)
        {
            answer[i] += (num/d) ? "#" : " ";
            num %= d;
            d = d >> 1;
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.02ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.95MB)
 * 테스트 4 〉	통과 (0.02ms, 3.95MB)
 * 테스트 5 〉	통과 (0.02ms, 3.96MB)
 * 테스트 6 〉	통과 (0.02ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.94MB)
 * 테스트 8 〉	통과 (0.01ms, 3.89MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */