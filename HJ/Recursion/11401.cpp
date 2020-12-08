#include <iostream>
using namespace std;
#define MOD 1000000007

long long pow(long long v, int cnt)
{
	if(cnt==0) return 1;

	long long result = pow(v, cnt/2);
	result = (result * result) % MOD;

	return (cnt%2==0) ? result : (result * v) % MOD;
}
long long solve(int n, int k)
{
	if(k < n/2) k = n - k;
	int len = n - k;
	long long v1=1,v2=1;

	for(long long i=n; i>k; i--)
	{
		v1 = (v1 * i) % MOD;
	}
	for(long long i=len; i>0; i--)
	{
		v2 = (v2 * i) % MOD;
	}

	return (v1*pow(v2, MOD-2))%MOD;
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