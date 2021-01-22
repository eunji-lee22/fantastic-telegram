#include <string>
#include <vector>
#include <queue>

using namespace std;
/*
 * function: checkSquare
 * 사각형이 같은 값인지 확인.
 */
bool checkSquare(vector<string>& board, int r, int c)
{
    int m = board.size();
    int n = board[0].size();    
    if(r+1 >= m || c+1 >= n) return false;
    char value = board[r][c];
    
    return (value == board[r][c+1])
        && (value == board[r+1][c])
        && (value == board[r+1][c+1]);
}
/*
 * function: dropDown
 * 가장 아래 층부터 전체 컬럼을 탐색하며,
 * 값이 0일 경우, 자기 위 층을 탐색하여,
 * 그 값을 자신의 값으로 치환하고 위 층의 값을 0으로 변경함
 */
void dropDown(vector<string>& board)
{
    int m = board.size();
    int n = board[0].size();
    
    for(int i=m-1; i>0; i--)
    {
        for(int j=0; j<n; j++)
        {
            if(board[i][j] != 0) continue;
            int up = 1;
            while(i-up >= 0)
            {
                if(board[i-up][j] == 0) up++;
                else
                {
                    board[i][j] = board[i-up][j];
                    board[i-up][j] = 0;
                    break;   
                }
            } // while-end
        } // for-end
    }
}
/*
 * bfs + reculsive
 * m-1 * n-1 크기의 사각형을 탐색하며,
 * 같은 값을 이루는지 확인
 * 값이 같다면, q에 담아 bfs로 처리.
 * 사라진 블록이 있을 경우, 재귀.
 * 없을 경우, 종료.
 */
int solution(int m, int n, vector<string> board) {
    int answer = 0;
    queue<pair<int, int>> q;
    vector<vector<int>> isVisited(m, vector<int>(n, 0));
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(board[i][j] == 0) continue;
            
            if(checkSquare(board, i, j))
            {
                q.push(make_pair(i,j));                
                isVisited[i][j] = 1;
            }
            
            while(!q.empty())
            {
                pair<int, int> target = q.front();
                q.pop();
                                
                if(checkSquare(board, target.first, target.second))
                {
                    if(!isVisited[target.first][target.second+1])
                    {
                        q.push(make_pair(target.first, target.second+1));
                        isVisited[target.first][target.second+1] = 1;
                    }
                    
                    if(!isVisited[target.first+1][target.second])
                    {
                        q.push(make_pair(target.first+1, target.second));
                        isVisited[target.first+1][target.second] = 1;
                    }
                        
                    if(!isVisited[target.first+1][target.second+1])
                    {
                        q.push(make_pair(target.first+1, target.second+1));
                        isVisited[target.first+1][target.second+1] = 1;
                    }

                }
                
                board[target.first][target.second] = 0;
                answer++;
            }
        }
    }
    
    dropDown(board);
    
    if(answer == 0) return 0;
    return answer + solution(m, n, board);
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.9MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.97MB)
 * 테스트 4 〉	통과 (0.06ms, 3.78MB)
 * 테스트 5 〉	통과 (3.34ms, 5.26MB)
 * 테스트 6 〉	통과 (0.23ms, 3.98MB)
 * 테스트 7 〉	통과 (0.03ms, 3.96MB)
 * 테스트 8 〉	통과 (0.06ms, 3.98MB)
 * 테스트 9 〉	통과 (0.01ms, 3.97MB)
 * 테스트 10 〉	통과 (0.04ms, 3.96MB)
 * 테스트 11 〉	통과 (0.09ms, 3.95MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 3
 */