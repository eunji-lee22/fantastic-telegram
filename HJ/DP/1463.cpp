#include <iostream>

using namespace std;

#define MAX_COUNT 1000000 + 1

void func(int number);
unsigned int memoization[MAX_COUNT] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int number;

    cin >> number;
    memoization[2] = 1;
    memoization[3] = 1;

    func(number);

    cout << memoization[number] << "\n";

    return 0;
}

void func(int number) {
    if(number <= 3) return;
    //review: min is [int], memoization is [unsigned int]
    int min = 0;

    for(int i=4; i<MAX_COUNT; i++) {
        min = memoization[i-1];

        if(i % 3 == 0) min = (min <= memoization[i/3]) ? min : memoization[i/3];
        if(i % 2 == 0) min = (min <= memoization[i/2]) ? min : memoization[i/2];

        memoization[i] = min+1;
    }

    return;
}