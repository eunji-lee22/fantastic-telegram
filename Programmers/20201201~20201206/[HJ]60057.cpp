#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int checker(vector<string> v)
{
    int index = 0, size = v.size(), cnt=1;
    string s = "";
    
    while(index < size)
    {
        for(int i=index+1; i<size; i++)
        {
            if(v[index] == v[i]) cnt++;
            else break;
        }
        
        string newStr = (cnt == 1) ? v[index] : to_string(cnt) + v[index];
        s = s + newStr;
        index += cnt;
        cnt = 1;                
    }
    //cout << s << ": " << s.size() << "\n";
    return s.size();
}
int solution(string s) {
    int size = s.size();
    int answer = size;
    
    for(int i=1; i<=size/2; i++)
    {
        vector<string> v;
        int len = i;
        string str;
        for(int j=0; j<size; j++)
        {
            str += s[j];
            if(j%len == len-1)
            {
                v.push_back(str);
                str = "";
            }
        }
        v.push_back(str);
        
        answer = min(answer, checker(v));
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.98MB)
 * 테스트 2 〉	통과 (0.35ms, 3.97MB)
 * 테스트 3 〉	통과 (0.17ms, 3.97MB)
 * 테스트 4 〉	통과 (0.03ms, 3.85MB)
 * 테스트 5 〉	통과 (0.01ms, 3.98MB)
 * 테스트 6 〉	통과 (0.04ms, 3.95MB)
 * 테스트 7 〉	통과 (0.47ms, 3.9MB)
 * 테스트 8 〉	통과 (0.46ms, 3.97MB)
 * 테스트 9 〉	통과 (0.78ms, 3.98MB)
 * 테스트 10 〉	통과 (4.06ms, 3.99MB)
 * 테스트 11 〉	통과 (0.08ms, 3.96MB)
 * 테스트 12 〉	통과 (0.08ms, 3.95MB)
 * 테스트 13 〉	통과 (0.09ms, 3.94MB)
 * 테스트 14 〉	통과 (0.69ms, 3.93MB)
 * 테스트 15 〉	통과 (0.09ms, 3.96MB)
 * 테스트 16 〉	통과 (0.01ms, 3.92MB)
 * 테스트 17 〉	통과 (1.62ms, 3.96MB)
 * 테스트 18 〉	통과 (1.64ms, 3.84MB)
 * 테스트 19 〉	통과 (1.57ms, 3.96MB)
 * 테스트 20 〉	통과 (3.99ms, 3.97MB)
 * 테스트 21 〉	통과 (4.43ms, 3.98MB)
 * 테스트 22 〉	통과 (4.51ms, 3.96MB)
 * 테스트 23 〉	통과 (4.31ms, 3.97MB)
 * 테스트 24 〉	통과 (4.07ms, 3.96MB)
 * 테스트 25 〉	통과 (4.34ms, 3.95MB)
 * 테스트 26 〉	통과 (4.56ms, 3.95MB)
 * 테스트 27 〉	통과 (4.56ms, 3.97MB)
 * 테스트 28 〉	통과 (0.02ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 7
 * /