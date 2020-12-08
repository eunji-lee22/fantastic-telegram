#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int M, N;
queue<pair<int, int>> q;
vector<vector<int>> map;
bool isVisited[101][101];
bool checkMapRange(int r, int c)
{
    return ((r>=0 && r<M) && (c>=0 && c<N));
}
int bfs()
{
    int cnt=0;
    int dir[4][2] = {{0,1}, {0,-1}, {-1,0}, {1,0}}; // ewns
    
    while(!q.empty())
    {
        // current row, current col
        int cr = q.front().first;
        int cc = q.front().second;
        int value = map[cr][cc];        
        q.pop();
        cnt++;
        
        for(int i=0; i<4; i++)
        {
            //next row, next col
            int nr = cr + dir[i][0];
            int nc = cc + dir[i][1];
            
            if(!checkMapRange(nr, nc)) continue;
            if(map[nr][nc] != value || isVisited[nr][nc]==true) continue;
            
            q.push(pair<int, int>(nr, nc));
            isVisited[nr][nc] = true;
        }
    }
    
    return cnt;
}
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    queue<pair<int, int>> test;
    q = test;
    for(int i=0; i<101; i++)
    {
        for(int j=0; j<101; j++)
            isVisited[i][j] = false;
    }
    map.clear();
    map = picture;
    M = m;
    N = n;
    for(int r=0; r<m; r++)
    {
        for(int c=0; c<n; c++)
        {
            if(picture[r][c] == 0 || isVisited[r][c]==true) continue;
                
            number_of_area++;
            q.push(pair<int, int>(r, c));
            isVisited[r][c] = true;
            max_size_of_one_area = max(max_size_of_one_area, bfs());
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}