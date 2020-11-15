#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, cnt=0;
    cin >> N;
    N = 1000 - N;

    while(N)
    {
        if(N >= 500) N-=500;
        else if(N >= 100) N-= 100;
        else if(N >= 50) N -= 50;
        else if(N >= 10) N -= 10;
        else if(N >= 5) N -= 5;
        else if(N >= 1) N -= 1;
        cnt++;
    }

    cout << cnt << "\n";

    return 0;
}
