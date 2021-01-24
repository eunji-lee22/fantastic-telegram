#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> m;
    vector<vector<string>> v;
    
    for(string s : record)
    {
        vector<string> inner;
        string temp;        
        stringstream stream;
        stream.str(s);
        while(stream >> temp) inner.push_back(temp);
        v.push_back(inner);
        if(inner[0] != "Leave") m[inner[1]] = inner[2];
    }
    
    for(auto inner : v)
    {
        if(inner[0] == "Enter") answer.push_back(m[inner[1]] + "님이 들어왔습니다.");
        else if(inner[0] == "Leave") answer.push_back(m[inner[1]] + "님이 나갔습니다.");
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.05ms, 3.97MB)
 * 테스트 2 〉	통과 (0.04ms, 3.95MB)
 * 테스트 3 〉	통과 (0.11ms, 3.8MB)
 * 테스트 4 〉	통과 (0.11ms, 3.89MB)
 * 테스트 5 〉	통과 (1.33ms, 4.02MB)
 * 테스트 6 〉	통과 (1.49ms, 4.01MB)
 * 테스트 7 〉	통과 (1.22ms, 4.05MB)
 * 테스트 8 〉	통과 (1.50ms, 4.07MB)
 * 테스트 9 〉	통과 (1.64ms, 4.26MB)
 * 테스트 10 〉	통과 (1.49ms, 4.02MB)
 * 테스트 11 〉	통과 (0.93ms, 3.93MB)
 * 테스트 12 〉	통과 (0.93ms, 3.96MB)
 * 테스트 13 〉	통과 (1.58ms, 3.99MB)
 * 테스트 14 〉	통과 (1.84ms, 4.05MB)
 * 테스트 15 〉	통과 (0.05ms, 3.95MB)
 * 테스트 16 〉	통과 (0.05ms, 3.8MB)
 * 테스트 17 〉	통과 (0.18ms, 3.93MB)
 * 테스트 18 〉	통과 (0.18ms, 3.96MB)
 * 테스트 19 〉	통과 (1.50ms, 4.08MB)
 * 테스트 20 〉	통과 (1.36ms, 3.97MB)
 * 테스트 21 〉	통과 (1.31ms, 3.99MB)
 * 테스트 22 〉	통과 (1.41ms, 4.04MB)
 * 테스트 23 〉	통과 (1.43ms, 4.13MB)
 * 테스트 24 〉	통과 (1.63ms, 4.11MB)
 * 테스트 25 〉	통과 (179.38ms, 48.8MB)
 * 테스트 26 〉	통과 (230.07ms, 47.5MB)
 * 테스트 27 〉	통과 (249.81ms, 52.6MB)
 * 테스트 28 〉	통과 (230.85ms, 54MB)
 * 테스트 29 〉	통과 (252.99ms, 54.1MB)
 * 테스트 30 〉	통과 (187.56ms, 46.8MB)
 * 테스트 31 〉	통과 (212.79ms, 52.3MB)
 * 테스트 32 〉	통과 (157.68ms, 45.3MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */