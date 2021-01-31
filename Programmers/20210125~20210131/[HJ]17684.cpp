#include <string>
#include <vector>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    vector<string> D;
    
    for(int i=0; i<26; i++)
    {
        D.push_back(to_string('A'+i));
    }
    
    int index = 0, size = msg.size(), value=0;
    string w=to_string(msg[0]), c="";
    bool isExist = true;
    while(index < size)
    {
        c = (index+1 < size) ? to_string(msg[index+1]) : "";
        index++;
        
        for(int i=D.size()-1; i>=0; i--)
        {
            if(w+c == D[i])
            {
                value = i;
                isExist = true;
                break;
            }
            if(w == D[i])
            {
                value = i;
                isExist = false;
                break;
            }
        }
        
        if(isExist && c != "")
        {
            w += c;
        }
        else
        {
            D.push_back(w+c);
            answer.push_back(value+1);
            w = c;
        }
        
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.93MB)
 * 테스트 2 〉	통과 (0.04ms, 3.95MB)
 * 테스트 3 〉	통과 (0.03ms, 3.97MB)
 * 테스트 4 〉	통과 (1.14ms, 3.97MB)
 * 테스트 5 〉	통과 (0.05ms, 3.96MB)
 * 테스트 6 〉	통과 (1.28ms, 3.96MB)
 * 테스트 7 〉	통과 (1.00ms, 3.95MB)
 * 테스트 8 〉	통과 (1.34ms, 3.95MB)
 * 테스트 9 〉	통과 (0.03ms, 3.93MB)
 * 테스트 10 〉	통과 (1.33ms, 3.97MB)
 * 테스트 11 〉	통과 (1.05ms, 3.94MB)
 * 테스트 12 〉	통과 (1.54ms, 3.97MB)
 * 테스트 13 〉	통과 (4.41ms, 3.96MB)
 * 테스트 14 〉	통과 (4.00ms, 3.95MB)
 * 테스트 15 〉	통과 (3.90ms, 3.93MB)
 * 테스트 16 〉	통과 (2.30ms, 3.96MB)
 * 테스트 17 〉	통과 (1.11ms, 3.91MB)
 * 테스트 18 〉	통과 (0.34ms, 3.94MB)
 * 테스트 19 〉	통과 (0.37ms, 3.96MB)
 * 테스트 20 〉	통과 (1.04ms, 3.9MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */