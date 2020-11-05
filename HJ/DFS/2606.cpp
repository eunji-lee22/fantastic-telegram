#include <iostream>

using namespace std;

#define MAX_COUNT 100 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int computerTotalCount, computerCount, map[MAX_COUNT][MAX_COUNT] = {0}, isVisited[MAX_COUNT] = {0};
    int stack[MAX_COUNT]={0}, top=0, max=0;

    cin >> computerTotalCount >> computerCount;

    for(int i=0; i<computerCount; i++)
    {
        int x, y;

        cin >> x >> y;

        map[x][y] = 1;
        map[y][x] = 1;
    }

    stack[top++] = 1;
    isVisited[1] = 1;
    while (top)
    {
        int computer = stack[--top];

        for(int i=1; i<=computerTotalCount; i++)
        {
            if(map[computer][i] == 1 && !isVisited[i])
            {
                stack[top++] = i;
                isVisited[i] = 1;
                max++;
            }
        }
    }

    cout << max << "\n";    

    return 0;
}
