#include <iostream>
#include <algorithm>

using namespace std;

int func(int d1, int d2, int d3);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N, max = 0, dice[3]={0};

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> dice[0] >> dice[1] >> dice[2];
        sort(dice+0, dice+3);
        int value = func(dice[0], dice[1], dice[2]);
        max = (max > value) ? max : value;
    }

    cout << max << "\n";

    return 0;
}

int func(int d1, int d2, int d3) {
    int sum = 0;
    if(d1 == d2 && d2 == d3) sum = 10000 + d1 * 1000;
    else if(d1 == d2 || d2 == d3) sum = 1000 + d2 * 100;
    else sum = d3 * 100;

    return sum;
}