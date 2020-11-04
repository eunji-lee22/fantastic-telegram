#include <iostream>

using namespace std;

#define MAX_COUNT 1000000 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n=0, data[MAX_COUNT] = {0};

    cin >> n;

    data[0] = 0;
    data[1] = 1;
    data[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        data[i] = data[i-2] + data[i-1];
        // (A+B)%C = ((A%C) + (B%C)) % C
        data[i] = data[i] % 15746;
    }
    
    cout << data[n] << "\n";

    return 0;
}
