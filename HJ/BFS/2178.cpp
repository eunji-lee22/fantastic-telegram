#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

#define MAX_COUNT 100

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int row, col, i, j, map[MAX_COUNT][MAX_COUNT], isVisit[MAX_COUNT][MAX_COUNT] = {0};
    queue<pair<int, int> > q;
    int pX=0, pY=0, dir[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    cin >> row >> col;
    cin.ignore();

    for(i=0; i<row; i++) {
        string str;
        getline(cin, str);
        for(j=0; j<col; j++)
            map[i][j] = (int)str[j] - 48;
    }

    q.push(pair<int, int>(pX, pY));
    isVisit[0][0] = 1;
    while (!q.empty())
    {
        pX = q.front().first;
        pY = q.front().second;
        q.pop();

        for(i=0; i<4; i++) {
            int next_x = pX + dir[i][0];
            int next_y = pY + dir[i][1];
            // 범위를 벗어날 경우, continue
            if(next_x < 0 || next_x >= row || next_y < 0 || next_y >= col) continue;
            // 길이 아니거나, 이미 방문했을 경우, continue
            if(map[next_x][next_y] == 0 || isVisit[next_x][next_y] != 0) continue;

            q.push(pair<int, int>(next_x, next_y));
            isVisit[next_x][next_y] = isVisit[pX][pY] + 1;
        }
    }

    cout << isVisit[row-1][col-1] << "\n";

    return 0;
}