#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long N;

    cin >> N;
    
    unsigned long long result = N*(N+1)/2;
    result = result * (N-1);
    
    cout << result << "\n";

    return 0;
}
