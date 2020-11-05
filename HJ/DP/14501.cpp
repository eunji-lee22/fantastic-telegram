#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define MAX_COUNT 15 + 2

int N = 0;
int memozation[MAX_COUNT] = {0}, counseling[MAX_COUNT][2] = {0};

int func(int n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    for(int i=1; i<=N; i++) {
        cin >> counseling[i][0] >> counseling[i][1];
    }

    int maxValue = 0;

    for(int i=N; i>0; i--) {
        int nValue = func(i);
        maxValue = max(maxValue, nValue);
    } 

    cout << maxValue << "\n";

    // for(int i=1; i<=N; i++) {
    //     cout << i << ": " << memozation[i] << "\n";
    // }

    return 0;
}

int func(int n) {
    int nextCounseling = counseling[n][0] + n;
    if(nextCounseling > N+1) return memozation[n] = memozation[n+1];

    memozation[n] = counseling[n][1] + memozation[nextCounseling];
    for(int i=n+1; i<nextCounseling; i++) {
        memozation[n] = max(memozation[n], memozation[i]);
    }

    return memozation[n];
}