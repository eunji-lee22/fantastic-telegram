#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {    
    vector<int> answer;
    vector<pair<int, vector<int>>> v;
    vector<int> inner;
    int num=0, index=1;
        
    for(int i=1, size=s.size()-1; i<size; i++)
    {
        inner.clear();
        index = 1;
        while(s[i] == '{')
        {
            char c = s[i+index];
            
            if(c == ',' || c == '}')
            {
                inner.push_back(num);
                num = 0;
            }
            else num = num * 10 + (c-'0');
            
            index++;
            if(c == '}') i += index;
        }
        v.push_back(make_pair(inner.size(), inner));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0, size=v.size(); i<size; i++)
    {
        for(int j=0; j<v[i].first; j++)
        {
            bool isExist = false;
            num = v[i].second[j];
            for(int i: answer)
            {
                if(i == num) {isExist = true; break;}
            }
            
            if(!isExist) answer.push_back(num);
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.97MB)
 * 테스트 3 〉	통과 (0.01ms, 3.79MB)
 * 테스트 4 〉	통과 (0.02ms, 3.97MB)
 * 테스트 5 〉	통과 (0.05ms, 3.84MB)
 * 테스트 6 〉	통과 (0.09ms, 3.97MB)
 * 테스트 7 〉	통과 (1.53ms, 3.9MB)
 * 테스트 8 〉	통과 (6.51ms, 4.28MB)
 * 테스트 9 〉	통과 (2.53ms, 3.86MB)
 * 테스트 10 〉	통과 (7.18ms, 4.26MB)
 * 테스트 11 〉	통과 (10.38ms, 4.76MB)
 * 테스트 12 〉	통과 (16.38ms, 5.8MB)
 * 테스트 13 〉	통과 (16.08ms, 5.76MB)
 * 테스트 14 〉	통과 (16.77ms, 5.77MB)
 * 테스트 15 〉	통과 (0.01ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */