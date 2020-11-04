#include <iostream>

using namespace std;

#define MAX_COUNT 90

unsigned long long memoization[MAX_COUNT] = {0};

unsigned long long func(int n);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;

    cin >> n;

    cout << func(n) << "\n";

    return 0;
}

unsigned long long func(int n) {
    if(n == 1) return 1;
    if(n == 2) return 1;

    if(memoization[n] != 0) return memoization[n];

    return memoization[n] = func(n-1) + func(n-2);
}
