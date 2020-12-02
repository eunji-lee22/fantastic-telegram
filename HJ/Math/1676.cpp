#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, count=0;
    cin >> N;

    count = N / 5;
    if(N>=25) count += N/25;
    if(N>=125) count += N/125;

    cout << count << "\n";

    return 0;
}