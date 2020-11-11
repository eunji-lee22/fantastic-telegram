#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int cost[1000][3] = {0};
    int minSumR[1000] = {0}, minSumG[1000] = {0}, minSumB[1000] = {0};
    int N=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

        if(i == 0) {
            minSumR[0] = cost[i][0];
            minSumG[0] = cost[i][1];
            minSumB[0] = cost[i][2];
        } else {
            minSumR[i] = cost[i][0] + min(minSumG[i-1], minSumB[i-1]);
            minSumG[i] = cost[i][1] + min(minSumR[i-1], minSumB[i-1]);
            minSumB[i] = cost[i][2] + min(minSumG[i-1], minSumR[i-1]);
        }
    }

    if(minSumR[N-1] <= minSumG[N-1] && minSumR[N-1] <= minSumB[N-1]) cout << minSumR[N-1] << "\n";
    else if(minSumG[N-1] <= minSumR[N-1] && minSumG[N-1] <= minSumB[N-1]) cout << minSumG[N-1] << "\n";
    else if(minSumB[N-1] <= minSumG[N-1] && minSumB[N-1] <= minSumR[N-1]) cout << minSumB[N-1] << "\n";

    return 0;
}
