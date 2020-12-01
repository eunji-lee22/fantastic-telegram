#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K, arr[6]={0};
    cin >> N >> K;
    if(K > N/2) K = N - K;
    arr[0] = 1;
    for(int i=1; i<=N; i++)
    {
        for(int j=K; j>0; j--)
        {
            arr[j] = arr[j] + arr[j-1];
        }
    }
    
    cout << arr[K] << "\n";
    
    return 0;
}