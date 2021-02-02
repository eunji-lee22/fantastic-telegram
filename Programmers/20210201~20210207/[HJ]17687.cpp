#include <string>
#include <vector>

using namespace std;

string toStringN(int num, int n)
{
    string result;
    int r = num % n;
    
    if(r <= 9) result = r + '0';
    else if(r <= 16) result = (r-10) + 'A';
    
    return result;
}
string solution(int n, int t, int m, int p) {
    string answer = "";
    int number = 1, tmp=0;
    string sNum = "", totalNum="0";
    
    while(t)
    {
        tmp = number;
        while(tmp)
        {
            sNum = toStringN(tmp, n) + sNum;
            tmp /= n;
        }
        
        totalNum += sNum;
        sNum = "";
        if(totalNum.size() >= m)
        {
            answer.push_back(totalNum[p-1]);
            totalNum.erase(totalNum.begin(), totalNum.begin()+m);
            t--;
        }
        number++;
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.96MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.01ms, 3.9MB)
 * 테스트 5 〉	통과 (0.02ms, 3.97MB)
 * 테스트 6 〉	통과 (0.02ms, 3.9MB)
 * 테스트 7 〉	통과 (0.02ms, 3.89MB)
 * 테스트 8 〉	통과 (0.04ms, 3.9MB)
 * 테스트 9 〉	통과 (0.02ms, 3.97MB)
 * 테스트 10 〉	통과 (0.03ms, 3.97MB)
 * 테스트 11 〉	통과 (0.02ms, 3.96MB)
 * 테스트 12 〉	통과 (0.04ms, 3.98MB)
 * 테스트 13 〉	통과 (0.03ms, 3.97MB)
 * 테스트 14 〉	통과 (2.30ms, 3.97MB)
 * 테스트 15 〉	통과 (2.28ms, 3.96MB)
 * 테스트 16 〉	통과 (2.25ms, 3.98MB)
 * 테스트 17 〉	통과 (0.10ms, 3.96MB)
 * 테스트 18 〉	통과 (0.13ms, 3.97MB)
 * 테스트 19 〉	통과 (0.04ms, 3.98MB)
 * 테스트 20 〉	통과 (0.10ms, 3.98MB)
 * 테스트 21 〉	통과 (0.58ms, 3.96MB)
 * 테스트 22 〉	통과 (0.25ms, 3.95MB)
 * 테스트 23 〉	통과 (0.78ms, 3.77MB)
 * 테스트 24 〉	통과 (1.18ms, 3.96MB)
 * 테스트 25 〉	통과 (1.01ms, 3.93MB)
 * 테스트 26 〉	통과 (0.33ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1점
 */