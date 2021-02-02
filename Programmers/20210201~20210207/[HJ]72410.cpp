#include <string>
#include <vector>

using namespace std;

string step1n2(string& id)
{
    string result = "";
    
    for(auto iter = id.begin(); iter != id.end(); iter++)
    {
        if(*iter >= 'A' && *iter <= 'Z') *iter += 'a' - 'A';        
        if(*iter >= 'a' && *iter <= 'z') result += *iter;
        else if(*iter >= '0' && *iter <= '9') result += *iter;
        else if(*iter == '-' || *iter == '_' || *iter == '.') result += *iter;
    }
    
    return result;
}
string step3n4(string& id)
{
    string result = "";
    result += id[0];
    
    for(auto iter = id.begin()+1; iter != id.end(); iter++)
    {
        if(*iter == '.' && *(iter-1) == '.') continue;
        result += *iter;
    }
    if(result.front() == '.') result.erase(result.begin());
    if(result.back() == '.') result.pop_back();
    
    return result;
}
string solution(string new_id) {
    string answer = step1n2(new_id);
    answer = step3n4(answer);
    if(answer == "") answer = "a";
    if(answer.size() >= 16) answer.erase(answer.begin()+15, answer.end());
    if(answer.back() == '.') answer.pop_back();
    while(answer.size() < 3) answer += answer.back();
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.98MB)
 * 테스트 3 〉	통과 (0.01ms, 3.98MB)
 * 테스트 4 〉	통과 (0.01ms, 3.94MB)
 * 테스트 5 〉	통과 (0.01ms, 3.77MB)
 * 테스트 6 〉	통과 (0.01ms, 3.9MB)
 * 테스트 7 〉	통과 (0.01ms, 3.96MB)
 * 테스트 8 〉	통과 (0.01ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.77MB)
 * 테스트 10 〉	통과 (0.01ms, 3.97MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.03ms, 3.79MB)
 * 테스트 13 〉	통과 (0.01ms, 3.97MB)
 * 테스트 14 〉	통과 (0.01ms, 3.95MB)
 * 테스트 15 〉	통과 (0.01ms, 3.96MB)
 * 테스트 16 〉	통과 (0.02ms, 3.96MB)
 * 테스트 17 〉	통과 (0.02ms, 3.96MB)
 * 테스트 18 〉	통과 (0.02ms, 3.84MB)
 * 테스트 19 〉	통과 (0.04ms, 3.97MB)
 * 테스트 20 〉	통과 (0.02ms, 3.96MB)
 * 테스트 21 〉	통과 (0.02ms, 3.95MB)
 * 테스트 22 〉	통과 (0.02ms, 3.79MB)
 * 테스트 23 〉	통과 (0.02ms, 3.84MB)
 * 테스트 24 〉	통과 (0.05ms, 3.95MB)
 * 테스트 25 〉	통과 (0.02ms, 3.94MB)
 * 테스트 26 〉	통과 (0.01ms, 3.96MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1점
 */