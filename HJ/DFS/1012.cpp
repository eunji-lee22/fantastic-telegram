#include <iostream>
#include <vector>

using namespace std;

#define MAX_COUNT 50 + 1

void valueSetting();
void inputValue();
void searchMap();
void dfs(int row, int col);
void ouputValue();
void debugVisited();

int T, M, N, K, map[MAX_COUNT][MAX_COUNT] = {0}, isVisited[MAX_COUNT][MAX_COUNT] = {0};
vector<int> v;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> T;

    for (int i = 0; i < T; i++)
    {
        valueSetting();
        inputValue();
        searchMap();
        // debugVisited();
        ouputValue();
    }
    

    return 0;
}

void valueSetting()
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            map[i][j] = 0;
            isVisited[i][j] = 0;
            v.clear();
        }
    }

    return;
}

void inputValue() {
    cin >> M >> N >> K;

    for (int i = 0; i < K; i++)
    {
        int row, col;

        cin >> row >> col;

        map[row][col] = 1;
    }
    
    return;
}

void searchMap()
{
    for(int r=0; r<M; r++) {
        for(int c=0; c<N; c++) {
            if(map[r][c] == 1 && !isVisited[r][c]) dfs(r,c);
        }
    }

    return;
}

void dfs(int row, int col) {
    vector<pair<int, int> > s;
    int dir[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}, earthworm=v.size()+1, cnt=0;

    s.push_back(pair<int, int>(row, col));
    isVisited[row][col] = earthworm;

    while (!s.empty())
    {
        int x = s.back().first;
        int y = s.back().second;
        s.pop_back();
        cnt++;

        for (int i = 0; i < 4; i++)
        {
            int cx = x + dir[i][0];
            int cy = y + dir[i][1];

            if(!(cx>=0 && cx < M && cy >= 0 && cy < N)) continue;
            
            if(map[cx][cy] == 1 && !isVisited[cx][cy])
            {
                s.push_back(pair<int, int>(cx, cy));
                isVisited[cx][cy] = earthworm;
            }
        }
    }
    
    v.push_back(cnt);
}

void ouputValue()
{
    cout << v.size() << "\n";

    return;
}

void debugVisited()
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
            cout << isVisited[i][j] << "\t";
        cout << "\n";
    }

    return;
}