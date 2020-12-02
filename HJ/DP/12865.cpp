#include <iostream>
using namespace std;
#define MAX_WEIGHT 100000 + 1

int N, K, W[100], V[100], memoization[101][MAX_WEIGHT];

int solve(int index, int weight)
{
    if(memoization[index][weight] > 0) return memoization[index][weight];
    if(index == N) return 0;

    int c1 = 0;
    if(weight+W[index] <= K)
        c1 = V[index] + solve(index+1, weight+W[index]); 
    int c2 = solve(index+1, weight);

    return memoization[index][weight] = (c1 > c2) ? c1 : c2;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for(int i=0; i<N; i++)
    {
        cin >> W[i] >> V[i];
    }

    cout << solve(0, 0) << "\n";

    return 0;
}

// https://www.youtube.com/watch?v=frlRE7bRIDo