#include <iostream>
using namespace std;

int map[20][20]={0}, N=0, minResult=INT32_MAX;
bool team[20];
int compute();
void solve(int locate, int start);
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

    solve(0, 0);

    cout << minResult << "\n";

    return 0;
}

void solve(int locate, int start)
{
    if(locate==N)
    {
        int result = compute();
        minResult = (result < minResult) ? result : minResult;
        return;
    }

    for(int i=start; i<N; i++)
    {
        if(team[i]==1) continue;
        team[i] = true;
        solve(locate+2, i+1);
        team[i] = false;
    }
}

int compute()
{
    int start=0, link=0;

    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(team[i] == !team[j]) continue;
            
            if(team[i]) start = start + map[i][j] + map[j][i];
            else if(!team[i]) link = link + map[i][j] + map[j][i];    
        }
    }

    return (start >= link) ? (start - link) : (link - start);
}