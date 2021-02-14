#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2, 0);
    set<string> _set;
    pair<set<string>::iterator, bool> result;    
    
    _set.insert(words[0]);
    for(int i=1, size=words.size(); i<size; i++)
    {
        result = _set.insert(words[i]);
        
        if(result.second == false || words[i-1].back() != words[i].front())
        {
            answer[0] = (i%n) + 1;
            answer[1] = (i/n) + 1;
            break;
        }
    }

    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.95MB)
 * 테스트 2 〉	통과 (0.02ms, 3.94MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.02ms, 3.77MB)
 * 테스트 5 〉	통과 (0.02ms, 3.93MB)
 * 테스트 6 〉	통과 (0.01ms, 3.98MB)
 * 테스트 7 〉	통과 (0.02ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.97MB)
 * 테스트 9 〉	통과 (0.01ms, 3.98MB)
 * 테스트 10 〉	통과 (0.02ms, 3.97MB)
 * 테스트 11 〉	통과 (0.02ms, 3.96MB)
 * 테스트 12 〉	통과 (0.02ms, 3.94MB)
 * 테스트 13 〉	통과 (0.02ms, 3.98MB)
 * 테스트 14 〉	통과 (0.01ms, 3.94MB)
 * 테스트 15 〉	통과 (0.01ms, 3.96MB)
 * 테스트 16 〉	통과 (0.02ms, 3.95MB)
 * 테스트 17 〉	통과 (0.01ms, 3.89MB)
 * 테스트 18 〉	통과 (0.02ms, 3.98MB)
 * 테스트 19 〉	통과 (0.02ms, 3.96MB)
 * 테스트 20 〉	통과 (0.04ms, 3.97MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */