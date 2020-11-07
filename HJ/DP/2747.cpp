#include <iostream>

using namespace std;

#define MAX_COUNT 45 + 1

unsigned long long memoization[MAX_COUNT] = {0};

int func(int N);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N;

    cin >> N;

    cout << func(N) << "\n";

    return 0;
}

int func(int N) {
    if (N == 1) return memoization[1] = 1;
    if (N == 2) return memoization[2] = 1;

    if(memoization[N] != 0) return memoization[N];

    return memoization[N] = func(N-2) + func(N-1);
}