#include <iostream>
#include <math.h>

using namespace std;

void hanoi(int n, int start, int to, int byPass);
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N=0;

    cin >> N;

    cout << ((1<<N)-1) << "\n";
    hanoi(N, 1, 3, 2);

    return 0;
}

void hanoi(int n, int start, int to, int byPass)
{
    if(n==0) return;

    hanoi(n-1, start, byPass, to);
    cout << start << " " << to << "\n";
    hanoi(n-1, byPass, to, start);
}