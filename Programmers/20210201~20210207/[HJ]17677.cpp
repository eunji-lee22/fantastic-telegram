#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void getString(string s, vector<string>& v)
{
    for(int i=1, size=s.size(); i<size; i++)
    {
        if(s[i-1] < 'A' || s[i-1] > 'Z') continue;
        if(s[i] < 'A' || s[i] > 'Z') continue;
        
        v.push_back(s.substr(i-1, 2));
    }
}
int solution(string str1, string str2) { 
    vector<string> v1, v2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    getString(str1, v1);
    getString(str2, v2);
    int size1 = v1.size(), size2 = v2.size(), size3=0;
    
    for(auto iter = v1.begin(); iter!=v1.end(); iter++)
    {
        auto iter2 = find(v2.begin(), v2.end(), *iter);
        
        if(iter2 != v2.end())
        {
            *iter2 = "";
            size1--;
            size2--;
            size3++;
        }
    }       
    
    int hap = size1+size2+size3;
    double result = hap ? (double)size3 / hap : 1;
    return result * 65536;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.99MB)
 * 테스트 2 〉	통과 (0.02ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.26ms, 3.91MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.01ms, 3.83MB)
 * 테스트 7 〉	통과 (0.02ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.97MB)
 * 테스트 9 〉	통과 (0.03ms, 3.93MB)
 * 테스트 10 〉	통과 (0.05ms, 3.86MB)
 * 테스트 11 〉	통과 (0.06ms, 3.97MB)
 * 테스트 12 〉	통과 (0.01ms, 3.95MB)
 * 테스트 13 〉	통과 (0.02ms, 3.83MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 3
 */