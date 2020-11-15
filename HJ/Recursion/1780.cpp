#include <iostream>

using namespace std;

int map[2187][2187] = {0}, N=0, V[3]={0};

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
    cout << V[0] << "\n" << V[1] << "\n" << V[2] << "\n";

    return 0;
}

void solve(int n, int r, int c)
{    
    int value = map[r][c];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(value != map[r+i][c+j])
            {
                for(int a=0; a<3; a++)
                {
                    int nextN = n/3;
                    for(int b=0; b<3; b++)
                    {
                        solve(nextN, r+nextN*a, c+nextN*b);
                    }
                }
                
                return;
            }

            if (i == (n - 1) && j == (n - 1))
            {
                switch (value)
                {
                case -1:
                    V[0]++;
                    break;
                case 0:
                    V[1]++;
                    break;
                case 1:
                    V[2]++;
                    break;
                default:
                    break;
                }
            }
        }
    }
}