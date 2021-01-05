#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    if(s == "1") return answer;
    int size = 0;
    
    for(char c : s)
    {
        if(c == '0') answer[1]++;
        else size++;
    }
    
    string nextS = "";
    while(size)
    {
        nextS = to_string(size%2) + nextS;
        size /= 2;
    }
    vector<int> tmp = solution(nextS);
    answer[0] = tmp[0] + 1;
    answer[1] = answer[1] + tmp[1];
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.98MB)
 * 테스트 2 〉	통과 (0.36ms, 4MB)
 * 테스트 3 〉	통과 (0.02ms, 3.95MB)
 * 테스트 4 〉	통과 (0.02ms, 3.97MB)
 * 테스트 5 〉	통과 (0.03ms, 3.95MB)
 * 테스트 6 〉	통과 (0.02ms, 3.81MB)
 * 테스트 7 〉	통과 (0.05ms, 3.97MB)
 * 테스트 8 〉	통과 (0.02ms, 3.95MB)
 * 테스트 9 〉	통과 (0.21ms, 3.97MB)
 * 테스트 10 〉	통과 (0.67ms, 3.96MB)
 * 테스트 11 〉	통과 (0.30ms, 3.95MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */