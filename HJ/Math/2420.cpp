#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N, M;

    cin >> N >> M;

    if(N>M) swap(N,M);

    cout << M-N << "\n";

    return 0;
}
