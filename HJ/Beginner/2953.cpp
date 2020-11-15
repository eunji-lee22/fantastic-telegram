#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int maxValue=0, winner=0;
    for(int i=1; i<=5; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;

        if(sum > maxValue)
        {
            maxValue = sum;
            winner = i;
        }
    }

    cout << winner << " " << maxValue << "\n";

    return 0;
}
