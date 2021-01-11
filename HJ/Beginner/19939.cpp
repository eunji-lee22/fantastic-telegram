#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K, result = 0;
    cin >> N >> K;
    
    for(int i=1; i<=K; i++)
    {
        N -= i;
    }
    
    if(N < 0) result = -1;
    else result = (K-1) + ((N%K) ? 1 : 0);
    
    cout << result << "\n";
    
    return 0;
}
