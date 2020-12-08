#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> makeNumbers;
string makeNumber = "";
bool isVisited[7] = {0};
void solve(string s, int cnt, int len)
{
    if(len == 0) return;
    if(cnt == len)
    {
        makeNumbers.push_back(makeNumber);
        return;
    }
    
    for(int i=0, size=s.size(); i<size; i++)
    {
        if(cnt == 0 && s[i] == '0') continue;
        if(isVisited[i] == true) continue;
        
        isVisited[i] = true;
        makeNumber += s[i];
        solve(s, cnt+1, len);
        makeNumber.pop_back();
        isVisited[i] = false;
    }
    
    if(cnt == 0) solve(s, 0, len-1);
}
int solution(string numbers) {
    int answer = 0, isPrime[10000000]={1, 1, 0, };
    
    solve(numbers, 0, numbers.size());
    sort(makeNumbers.begin(), makeNumbers.end());
    makeNumbers.erase(unique(makeNumbers.begin(), makeNumbers.end()), makeNumbers.end());
    
    int maxNumber = stoi(makeNumbers.back());
    
    for(int i=2; i*i<=maxNumber; i++)
        if(isPrime[i]==0)
            for(int j=i*i; j<=maxNumber; j+=i) isPrime[j] = 1;
    
    for(auto iter = makeNumbers.begin(); iter!=makeNumbers.end(); iter++)
    {
        if(isPrime[stoi(*iter)] == 0) answer++;
    }
    
    for(auto iter = makeNumbers.begin(); iter!=makeNumbers.end(); iter++)
    {
        cout << *iter << "\n";
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (19.05ms, 41.8MB)
 * 테스트 2 〉	통과 (21.84ms, 41.8MB)
 * 테스트 3 〉	통과 (18.70ms, 41.6MB)
 * 테스트 4 〉	통과 (19.88ms, 41.9MB)
 * 테스트 5 〉	통과 (37.82ms, 42.1MB)
 * 테스트 6 〉	통과 (18.89ms, 41.9MB)
 * 테스트 7 〉	통과 (20.80ms, 41.7MB)
 * 테스트 8 〉	통과 (64.74ms, 42.1MB)
 * 테스트 9 〉	통과 (19.26ms, 41.8MB)
 * 테스트 10 〉	통과 (22.13ms, 41.9MB)
 * 테스트 11 〉	통과 (21.48ms, 41.7MB)
 * 테스트 12 〉	통과 (19.74ms, 41.8MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 7
 * /