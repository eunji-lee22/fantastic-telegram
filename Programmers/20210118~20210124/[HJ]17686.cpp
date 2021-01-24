#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toLowerString(string s)
{
    string result = "";
    
    for(char c : s)
    {
        result += tolower(c);
    }
    
    return result;
}
bool compare(vector<string> v1, vector<string> v2)
{
    string head1 = toLowerString(v1[0]);
    string head2 = toLowerString(v2[0]);
    if(head1 == head2)
    {
        int n1 = stoi(v1[1]);
        int n2 = stoi(v2[1]);
        
        if(n1 == n2) return stoi(v1[3]) < stoi(v2[3]);
        return n1 < n2;
    }
    
    return head1 < head2;
}
vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<vector<string>> v;
    int index = 0;
    
    for(string file : files)
    {        
        int flag = 0;
        string HEAD = "", NUMBER = "", TAIL = "";
        for(char c : file)
        {
            if(flag == 0 && c >= '0' && c <= '9') flag = 1;
            if(flag == 1 && (c < '0' || c > '9')) flag = 2;
            
            switch(flag)
            {
                case 0: HEAD += c; break;
                case 1: NUMBER += c; break;
                case 2: TAIL += c; break;
            }
        }
        
        v.push_back({HEAD, NUMBER, file, to_string(index)});
        index++;
    }
    
    sort(v.begin(), v.end(), compare);
    for(auto iter = v.begin(); iter != v.end(); iter++)
    {
        answer.push_back(iter->at(2));
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.96MB)
 * 테스트 2 〉	통과 (0.03ms, 3.97MB)
 * 테스트 3 〉	통과 (4.27ms, 4.26MB)
 * 테스트 4 〉	통과 (3.86ms, 4.19MB)
 * 테스트 5 〉	통과 (4.04ms, 4.13MB)
 * 테스트 6 〉	통과 (3.83ms, 4.03MB)
 * 테스트 7 〉	통과 (3.89ms, 4.07MB)
 * 테스트 8 〉	통과 (3.47ms, 4.15MB)
 * 테스트 9 〉	통과 (3.43ms, 4.11MB)
 * 테스트 10 〉	통과 (3.46ms, 4.07MB)
 * 테스트 11 〉	통과 (3.25ms, 4.04MB)
 * 테스트 12 〉	통과 (3.89ms, 4.13MB)
 * 테스트 13 〉	통과 (3.48ms, 4.14MB)
 * 테스트 14 〉	통과 (5.93ms, 4.3MB)
 * 테스트 15 〉	통과 (5.95ms, 4.43MB)
 * 테스트 16 〉	통과 (3.64ms, 3.97MB)
 * 테스트 17 〉	통과 (3.19ms, 3.97MB)
 * 테스트 18 〉	통과 (3.19ms, 3.97MB)
 * 테스트 19 〉	통과 (3.30ms, 4.26MB)
 * 테스트 20 〉	통과 (3.29ms, 4.11MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 4
 */