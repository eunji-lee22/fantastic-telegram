#include <iostream>
using namespace std;

int N, A[11]={0}, oper[4]={0}, minResult=INT32_MAX, maxResult=INT32_MIN;
void solve(int n, int plus, int minus, int multiply, int division, int sum);
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++)
        cin >> A[i];
        
    for(int i=0; i<4; i++)
        cin >> oper[i];

    solve(1, oper[0], oper[1], oper[2], oper[3], A[0]);

    cout << maxResult << "\n" << minResult << "\n";

    return 0;
}

void solve(int index, int plus, int minus, int multiply, int division, int sum)
{
    if(index==N)
    {
        maxResult = (sum > maxResult) ? sum : maxResult;
        minResult = (sum < minResult) ? sum : minResult;
        return;
    }

    if(plus > 0)
        solve(index+1, plus-1, minus, multiply, division, sum + A[index]);
    if(minus > 0)
        solve(index+1, plus, minus-1, multiply, division, sum - A[index]);
    if(multiply > 0)
        solve(index+1, plus, minus, multiply-1, division, sum * A[index]);
    if(division > 0)
        solve(index+1, plus, minus, multiply, division-1, sum / A[index]);
}