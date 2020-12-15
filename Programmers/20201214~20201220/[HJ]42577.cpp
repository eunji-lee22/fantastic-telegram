#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {    
    for(int i=0, size=phone_book.size(); i<size; i++)
    {
        string s = phone_book[i];

        for(int j=0; j<size; j++)
        {
            if(j==i) continue;
            if(phone_book[j].size() < s.size()) continue;

            if(phone_book[j].substr(0, s.size()) == s) return false;
        }
    }
    
    return true;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.92MB)
 * 테스트 2 〉	통과 (0.01ms, 3.95MB)
 * 테스트 3 〉	통과 (0.01ms, 3.9MB)
 * 테스트 4 〉	통과 (0.01ms, 3.71MB)
 * 테스트 5 〉	통과 (0.01ms, 3.91MB)
 * 테스트 6 〉	통과 (0.01ms, 3.97MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.93MB)
 * 테스트 9 〉	통과 (0.01ms, 3.95MB)
 * 테스트 10 〉	통과 (0.01ms, 3.96MB)
 * 테스트 11 〉	통과 (0.01ms, 3.96MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (0.63ms, 4.25MB)
 * 테스트 2 〉	통과 (0.61ms, 4.54MB)
 * 채점 결과
 * 정확성: 84.6
 * 효율성: 15.4
 * 합계: 100.0 / 100.0
 * 점수: 3점
 */