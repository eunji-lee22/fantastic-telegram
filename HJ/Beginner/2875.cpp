#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N, M, K;
    cin >> N >> M >> K;
    
    int result = min(N/2, M);
    while(K > 0)
    {
        int d = 0;
        if(N > 2*M)
        {
            d = min(N-2*M, K);
            K -= d;
            N -= d;
        }            
        else if(M > N/2)
        {
            d =  min(M - N/2, K);
            K -= d;
            M -= d;
        }
        else
        {
            d = 1;
            K -= d;
            M -= d;
            result--;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
