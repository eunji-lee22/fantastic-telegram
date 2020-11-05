#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_COUNT 10000 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n, i;
    unsigned int memozation[MAX_COUNT] = {0}, arr[MAX_COUNT]={0};

    cin >> n;

    for(i=1; i<=n; i++)
        cin >> arr[i];

    memozation[1] = arr[1];
    memozation[2] = arr[1] + arr[2];

    for(i=3; i<=n; i++)
        memozation[i] = max(memozation[i-1], max(memozation[i-2]+arr[i], memozation[i-3]+arr[i-1]+arr[i]));

    cout << max(memozation[n-1], memozation[n]) << "\n";

    return 0;
}
