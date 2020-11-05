#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, cost[1001] = {0}, memozation[1001] = {0};

    cin >> N;

    for(int i=1; i<=N; i++)
        cin >> cost[i];

    for(int i=1; i<=N; i++)
    {
        memozation[i] = cost[i];
        for(int j=1, max=i/2; j<=max; j++)
            memozation[i] = (memozation[i] >= memozation[i-j] + memozation[j]) ? memozation[i] : memozation[i-j] + memozation[j];
    }

    cout << memozation[N] << "\n";

    return 0;
}
