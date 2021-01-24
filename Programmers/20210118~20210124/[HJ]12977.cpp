#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    int isPrime[2998] = {0};
    isPrime[1] = 1;
    for(int i=2; i*i<=2997; i++)
        if(isPrime[i] == 0)
            for(int j = i*i; j <= 2997; j+=i) isPrime[j] = 1;
    
    for(int i=0, size=nums.size(); i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            for(int k=j+1; k<size; k++)
            {
                if(isPrime[nums[i]+nums[j]+nums[k]] == 0) answer++;
            }
        }
    }

    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.95MB)
 * 테스트 2 〉	통과 (0.02ms, 3.93MB)
 * 테스트 3 〉	통과 (0.01ms, 3.95MB)
 * 테스트 4 〉	통과 (0.01ms, 3.96MB)
 * 테스트 5 〉	통과 (0.02ms, 3.78MB)
 * 테스트 6 〉	통과 (0.02ms, 3.96MB)
 * 테스트 7 〉	통과 (0.02ms, 3.97MB)
 * 테스트 8 〉	통과 (0.03ms, 3.96MB)
 * 테스트 9 〉	통과 (0.02ms, 3.94MB)
 * 테스트 10 〉	통과 (0.03ms, 3.95MB)
 * 테스트 11 〉	통과 (0.02ms, 3.96MB)
 * 테스트 12 〉	통과 (0.02ms, 3.96MB)
 * 테스트 13 〉	통과 (0.02ms, 3.94MB)
 * 테스트 14 〉	통과 (0.02ms, 3.98MB)
 * 테스트 15 〉	통과 (0.02ms, 3.97MB)
 * 테스트 16 〉	통과 (0.03ms, 3.94MB)
 * 테스트 17 〉	통과 (0.03ms, 3.95MB)
 * 테스트 18 〉	통과 (0.02ms, 3.96MB)
 * 테스트 19 〉	통과 (0.02ms, 3.97MB)
 * 테스트 20 〉	통과 (0.03ms, 3.96MB)
 * 테스트 21 〉	통과 (0.03ms, 3.77MB)
 * 테스트 22 〉	통과 (0.02ms, 3.89MB)
 * 테스트 23 〉	통과 (0.02ms, 3.94MB)
 * 테스트 24 〉	통과 (0.03ms, 3.94MB)
 * 테스트 25 〉	통과 (0.03ms, 3.97MB)
 * 테스트 26 〉	통과 (0.02ms, 3.95MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2 
 */