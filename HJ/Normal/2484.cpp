#include <iostream>
#include <algorithm>

using namespace std;

int func(int d1, int d2, int d3, int d4);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N, max = 0, dice[4]={0};

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> dice[0] >> dice[1] >> dice[2] >> dice[3];
        sort(dice+0, dice+4);
        int value = func(dice[0], dice[1], dice[2], dice[3]);
        max = (max > value) ? max : value;
    }

    cout << max << "\n";

    return 0;
}

int func(int d1, int d2, int d3, int d4) {
    int sum = 0;
    if(d1 == d2 && d2 == d3 && d3 == d4) sum = 50000 + d1 * 5000;
    else if((d1 == d2 && d2 == d3) || (d2 == d3 && d3 == d4)) sum = 10000 + d2 * 1000;
    else if(d1 == d2 && d3 == d4) sum = 2000 + d2*500 + d3*500;
    else if(d1 == d2) sum = 1000 + d1*100;
    else if(d2 == d3) sum = 1000 + d2*100;
    else if(d3 == d4) sum = 1000 + d3*100;
    else sum = d4 * 100;

    return sum;
}