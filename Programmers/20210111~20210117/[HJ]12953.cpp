#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}
int solution(vector<int> arr) {      
    sort(arr.begin(), arr.end());
    int answer = 1;
    
    for(int i=0, size=arr.size(); i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            int d = gcd(arr[j], arr[i]);
            arr[j] /= d;            
        }
    }
        
    for(int a : arr)
    {
        answer *= a;
    }
    printf("%d", answer);
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.02ms, 3.95MB)
 * 테스트 3 〉	통과 (0.02ms, 3.93MB)
 * 테스트 4 〉	통과 (0.02ms, 3.98MB)
 * 테스트 5 〉	통과 (0.03ms, 3.89MB)
 * 테스트 6 〉	통과 (0.02ms, 3.94MB)
 * 테스트 7 〉	통과 (0.02ms, 3.83MB)
 * 테스트 8 〉	통과 (0.02ms, 3.94MB)
 * 테스트 9 〉	통과 (0.02ms, 3.93MB)
 * 테스트 10 〉	통과 (0.02ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */