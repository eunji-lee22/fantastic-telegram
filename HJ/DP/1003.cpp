#include <iostream>

using namespace std;

#define MAX_COUNT 40

unsigned int fibonacci(int n);

unsigned int memoization[MAX_COUNT] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T=0, n = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> n;

        if(n == 0) cout << "1 0\n";
        else if(n == 1) cout << "0 1\n";
        else       cout << fibonacci(n-2) << " " << fibonacci(n-1) << "\n";
    }

    return 0;
}

unsigned int fibonacci(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 1;
    } 

    if(memoization[n] != 0) return memoization[n];

    return memoization[n] = fibonacci(n - 1) + fibonacci(n - 2);
}