#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int num=0, min=INT32_MAX, max=INT32_MIN;
    stringstream stream;
    stream.str(s);
    
    while(stream >> num)
    {
        min = (num < min) ? num : min;
        max = (num > max) ? num : max;
    }
    
    answer += to_string(min) + " " + to_string(max);
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.96MB)
 * 테스트 2 〉	통과 (0.04ms, 3.93MB)
 * 테스트 3 〉	통과 (0.03ms, 3.77MB)
 * 테스트 4 〉	통과 (0.51ms, 3.96MB)
 * 테스트 5 〉	통과 (0.44ms, 3.94MB)
 * 테스트 6 〉	통과 (0.03ms, 3.93MB)
 * 테스트 7 〉	통과 (0.03ms, 3.84MB)
 * 테스트 8 〉	통과 (0.04ms, 3.83MB)
 * 테스트 9 〉	통과 (0.03ms, 3.95MB)
 * 테스트 10 〉	통과 (0.03ms, 3.95MB)
 * 테스트 11 〉	통과 (0.03ms, 3.95MB)
 * 테스트 12 〉	통과 (0.03ms, 3.94MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */