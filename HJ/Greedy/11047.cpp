#include <iostream>

using namespace std;

#define MAX_COUNT 10

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N=0, K=0, count=0;
    int arr[MAX_COUNT] = {0};

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i=N-1; i>=0; i--) {
        if(K == 0) break;
        int share = K / arr[i];
        K -= share * arr[i];
        count += share;
    }

    cout << count << "\n";    
    
    return 0;
}
