#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_COUNT 25

int N, map[MAX_COUNT][MAX_COUNT], isVisited[MAX_COUNT][MAX_COUNT] = {0};
vector<int> v;

void inputValue();
void dfs(int x, int y);
bool checkValidationMapPoint(int x, int y);
void outputValue();
void debugDanji();

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // input N, map
    inputValue();

    // loop if map == 1 then dfs
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 1 && isVisited[i][j] == 0)
                dfs(i, j);
        }
    }

    // output vector.size vector[idx]
    // debugDanji();
    outputValue();

    return 0;
}

void inputValue()
{
    int i, j;

    cin >> N;
    cin.ignore();

    for (i = 0; i < N; i++)
    {
        string str;
        getline(cin, str);
        for (j = 0; j < N; j++)
            map[i][j] = (int)(str[j] - '0');
    }

    return;
}

void dfs(int x, int y)
{
    int dir[4][2] = {{1,0}, {-1,0}, {0,-1}, {0,1}}, cnt=0;
    stack<pair<int, int> > s;
    int danji = v.size() + 1;

    s.push(pair<int, int>(x, y));
    isVisited[x][y] = danji;

    while(!s.empty()){
        int currentX = s.top().first;
        int currentY = s.top().second;
        s.pop();
        cnt++;
        
        for(int i=0; i<4; i++) {
            int nextX = currentX + dir[i][1];
            int nextY = currentY + dir[i][0];
            
            if(!checkValidationMapPoint(nextX, nextY)) continue;
            if(map[nextX][nextY] == 0 || isVisited[nextX][nextY] != 0) continue;
            
            s.push(pair<int,int>(nextX, nextY));
            isVisited[nextX][nextY] = danji;
        }
    }

    v.push_back(cnt);
    
    return;
}

bool checkValidationMapPoint(int x, int y) {
    return (x>=0 && x<N) && (y>= 0 && y<N);
}

void outputValue(){
    cout << v.size() << "\n";

    sort(v.begin(), v.end());

    for(int i=0, max=v.size(); i<max; i++){
        cout << v[i] << "\n";
    }
}

void debugDanji() {
    cout << "debugDanji\n";
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << isVisited[i][j];
        }
        cout << "\n";
    }
}