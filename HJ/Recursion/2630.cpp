#include <iostream>

using namespace std;

int map[128][128] = {0}, N=0, W=0, B=0;

void solve(int n, int r, int c);
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> map[i][j];
        }
    }

    solve(N, 0, 0);

    cout << W << "\n" << B << "\n";

    return 0;
}

void solve(int n, int r, int c)
{
    int color = map[r][c];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(color != map[r+i][c+j])
            {
                solve(n/2, r, c);
                solve(n/2, r, c+n/2);
                solve(n/2, r+n/2, c);
                solve(n/2, r+n/2, c+n/2);
                return;
            }

            if(i==(n-1) && j==(n-1)) (color) ? B++ : W++;
        }
    }
}