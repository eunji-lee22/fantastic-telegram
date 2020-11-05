#include <iostream>
#include <queue>

using namespace std;

#define MAX_COUNT 1000

int map[MAX_COUNT][MAX_COUNT], isVisited[MAX_COUNT][MAX_COUNT] = {0}, row, col;

void inputValue();
void bfs();
void outputValue();
bool checkMapRange(int r, int c);
void debugViewNewMap();

queue<pair<int, int> > q;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    inputValue();

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(map[i][j]==1) q.push(pair<int,int>(i,j));
            if(map[i][j]==-1) isVisited[i][j] = -1;
        }
    }

    bfs();

    // debugViewNewMap();
    outputValue();

    return 0;
}

void inputValue() {
    cin >> col >> row;
    
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin >> map[i][j];

    return;
}

void bfs() {
    int dir[4][2] = {{0,1}, {0,-1}, {-1,0}, {1,0}};
    
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dir[i][0];
            int ny = cy + dir[i][1];

            if(!checkMapRange(nx, ny)) continue;
            if(map[nx][ny]!=0 || isVisited[nx][ny]!=0) continue;

            q.push(pair<int,int>(nx,ny));
            isVisited[nx][ny] = isVisited[cx][cy]+1;
        }
    }
    
}

bool checkMapRange(int r, int c) {
    return ((r>=0 && r<row) && (c>=0 && c<col));
}

void outputValue() {
    int maxValue = 0;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(isVisited[i][j]==0 && map[i][j]==0) {
                cout << "-1\n";
                return;
            }
            else maxValue = (isVisited[i][j] > maxValue) ? isVisited[i][j] : maxValue;
        }
    }

    cout << maxValue << "\n";
    // value
    // 0
    // -1
}

void debugViewNewMap() {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << isVisited[i][j] << "\t";
        }
        cout << "\n";
    }
}