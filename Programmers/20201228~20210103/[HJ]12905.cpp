#include <iostream>
#include <vector>
using namespace std;
int getMinValue(int& a, int& b, int& c)
{
    int min = (a < b) ?  a : b;
    
    return (min < c) ? min : c;
}
int solution(vector<vector<int>> board)
{
    int answer = board[0][0];
    
    for(int i=0, rSize=board.size(); i<rSize; i++)
    {
        for(int j=0, cSize=board[0].size(); j<cSize; j++)
        {
            if(i == 0 || j == 0) continue;      
            if(board[i][j] == 0) continue;
            
            board[i][j] = getMinValue(board[i][j-1], board[i-1][j], board[i-1][j-1]) + 1;
            answer = (answer > board[i][j]) ? answer : board[i][j];
        }
    }

    return answer*answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.94MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.94MB)
 * 테스트 4 〉	통과 (0.01ms, 3.93MB)
 * 테스트 5 〉	통과 (0.01ms, 3.95MB)
 * 테스트 6 〉	통과 (0.01ms, 3.94MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.95MB)
 * 테스트 9 〉	통과 (0.01ms, 3.93MB)
 * 테스트 10 〉	통과 (0.01ms, 3.76MB)
 * 테스트 11 〉	통과 (0.01ms, 3.95MB)
 * 테스트 12 〉	통과 (0.01ms, 3.89MB)
 * 테스트 13 〉	통과 (0.01ms, 3.96MB)
 * 테스트 14 〉	통과 (0.01ms, 3.82MB)
 * 테스트 15 〉	통과 (0.01ms, 3.95MB)
 * 테스트 16 〉	통과 (0.01ms, 3.95MB)
 * 테스트 17 〉	통과 (0.01ms, 3.94MB)
 * 테스트 18 〉	통과 (0.03ms, 3.9MB)
 * 테스트 19 〉	통과 (0.03ms, 3.93MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (4.24ms, 38.8MB)
 * 테스트 2 〉	통과 (4.41ms, 38.8MB)
 * 테스트 3 〉	통과 (4.56ms, 38.8MB)
 * 채점 결과
 * 정확성: 59.6
 * 효율성: 40.4
 * 합계: 100.0 / 100.0
 * 점수: 11
 */