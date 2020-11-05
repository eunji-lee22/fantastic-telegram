#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N, cnt=0, num=1;

    cin >> N;

    while (N)
    {
        if(N < num) num = 1;
        N -= num;
        cnt++;
        num++;
    }

    cout << cnt << "\n";
    
    return 0;
}
