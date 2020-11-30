#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int map[101][101]={0},cnt=0, N=4;
    int x1, y1, x2, y2;

    while(N--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=y1; i<y2; i++)
        {
            for(int j=x1; j<x2; j++)
            {                
                map[i][j] += 1;
                if(map[i][j]==1) cnt++;
            }
        }
    }
    
    cout << cnt << "\n";

    return 0;
}

