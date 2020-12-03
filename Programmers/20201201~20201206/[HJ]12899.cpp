#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    char arr[3] = {'1', '2', '4'};
    vector<char> v;
    
    while(n>0)
    {
        switch(n%3)
        {
            case 0: v.push_back(arr[2]);break;
            case 1: v.push_back(arr[0]);break;
            case 2: v.push_back(arr[1]);break;
        }
        n = (n-1) / 3;    
    }
    string answer = "";
    
    for(int i=v.size()-1; i>=0; i--)
    {
        answer += v[i];
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.89MB)
 * 테스트 3 〉	통과 (0.01ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.97MB)
 * 테스트 5 〉	통과 (0.01ms, 3.85MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.98MB)
 * 테스트 9 〉	통과 (0.01ms, 3.96MB)
 * 테스트 10 〉	통과 (0.01ms, 3.83MB)
 * 테스트 11 〉	통과 (0.01ms, 3.97MB)
 * 테스트 12 〉	통과 (0.01ms, 3.95MB)
 * 테스트 13 〉	통과 (0.01ms, 3.96MB)
 * 테스트 14 〉	통과 (0.01ms, 3.91MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.94MB)
 * 테스트 2 〉	통과 (0.01ms, 3.97MB)
 * 테스트 3 〉	통과 (0.01ms, 3.98MB)
 * 테스트 4 〉	통과 (0.01ms, 3.98MB)
 * 테스트 5 〉	통과 (0.01ms, 3.96MB)
 * 테스트 6 〉	통과 (0.01ms, 3.94MB)
 * 채점 결과
 * 정확성: 70.0
 * 효율성: 30.0
 * 합계: 100.0 / 100.0
 * 점수: 9
 * /