#include <iostream>

using namespace std;

#define MAX_COUNT 100

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int T, i, memoization[MAX_COUNT]={0};

    memoization[1]=1;
    memoization[2]=2;
    memoization[3]=4;

    for(int i=4; i<=MAX_COUNT; i++) {
        memoization[i] = memoization[i-1] + memoization[i-2] + memoization[i-3];
    }

    cin >> T;
    for(i=0; i<T; i++){
        unsigned int num;
        cin >> num;
        cout << memoization[num] << "\n";
    }

    return 0;
}
