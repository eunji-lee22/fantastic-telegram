#include <iostream>

using namespace std;

#define MAX_COUNT 1000 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int memozation[MAX_COUNT]={0}, n;

    cin >> n;

    memozation[1] = 1;
    memozation[2] = 3;

    for(int i=3; i<=n; i++) {
        memozation[i] = (memozation[i-1] + memozation[i-2]*2) % 10007;
    }

    cout << memozation[n];

    return 0;
}
