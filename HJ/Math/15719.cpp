#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int input=0;
    long long sum = 0, N;
    cin >> N;

    for(long long i=0; i<N; i++)
    {
        cin >> input;
        sum += input;
    }

    long long hap = (N * (N-1)) / 2;

    cout << sum - hap << "\n";
    
    return 0;
}