#include <iostream>

using namespace std;
void solve(int n, int m)
{
    int len=0;
    long long d=1, r=1;
    
    if(n<m/2)
    {
        len = n;
        n = m - n;
    }
    else
    {
        len = m - n;
    }
    
    for(int i=1; i<=len; i++)
    {
        d *= i;
    }
    
    for(int i=m; i>n; i--)
    {
        r *= i;
        if(d!=0 && r % d == 0)
        {
            r = r / d;
            d = 0;
        }
    }
    
    cout << r << "\n";
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    while(T--)
    {
        int N, M;
        cin >> N >> M;
        solve(N, M);
    }

    return 0;
}