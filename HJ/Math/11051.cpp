#include <iostream>
using namespace std;
#define MOD 10007

int memoization[1001][1001];
int solve(int n, int k)
{
    if(k==0 || n==k) return 1;
    if(memoization[n][k] > 0) return memoization[n][k];
    
    return memoization[n][k] = (solve(n-1, k-1) % MOD + solve(n-1, k) % MOD) % MOD;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    
    cout << solve(N, K) << "\n";   
    
    return 0;
}