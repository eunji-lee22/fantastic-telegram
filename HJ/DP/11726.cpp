#include <iostream>

using namespace std;

#define MAX_COUNT 1000+1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n, i, memoization[MAX_COUNT]={0};

    cin >> n;

    memoization[1] = 1;
    memoization[2] = 2;
    for(i=3; i<=n; i++)
        memoization[i] = (memoization[i-1] + memoization[i-2]) % 10007;

    cout << memoization[n] << "\n";

    return 0;
}
