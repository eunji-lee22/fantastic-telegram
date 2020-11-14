#include <iostream>

using namespace std;

#define MAX_COUNT 1000000000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N=0, memoization[100][10] = {0};
    cin >> N;

    for(int i=1; i<10; i++)
    {
        memoization[0][i] = 1;
    }

    for(int i=1; i<N; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j==0)
                memoization[i][0] = memoization[i-1][1] % MAX_COUNT;
            else if(j==9)
                memoization[i][9] = memoization[i-1][8] % MAX_COUNT;
            else 
                memoization[i][j] = (memoization[i-1][j-1] + memoization[i-1][j+1]) % MAX_COUNT;
        }    
    }

    int sum = 0;
    for(int i=0; i<10; i++)
    {
        sum = (sum + memoization[N-1][i]) % MAX_COUNT;
    }

    cout << (sum%MAX_COUNT) << "\n";

    return 0;
}
