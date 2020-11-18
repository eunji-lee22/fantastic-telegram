#include <iostream>

using namespace std;

bool row[9][9], col[9][9], square[9][9];
int map[9][9]={0};

void solve(int n);
void output();
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin >> map[i][j];

            if(map[i][j] != 0)
            {
                row[i][map[i][j]-1] = true;
                col[j][map[i][j]-1] = true;
                square[3*(i/3)+(j/3)][map[i][j]-1] = true;
            }
        }
    }
    
    solve(0);

    return 0;
}

void solve(int n)
{
    if(n == 81)
    {
        output();
        exit(0);
    }

    int r=n/9, c=n%9;
    if(map[r][c] == 0)
    {
        for(int i=0; i<9; i++)
        {
            if(!row[r][i]&&!col[c][i]&&!square[(r/3)*3+(c/3)][i])
            {
                map[r][c] = i+1;
                row[r][i] = true;
                col[c][i] = true;
                square[(r/3)*3+(c/3)][i] = true;
                solve(n+1);
                map[r][c] = 0;
                row[r][i] = false;
                col[c][i] = false;
                square[(r/3)*3+(c/3)][i] = false;
            }
        }
    }
    else 
        solve(n+1);
}

void output()
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
}
