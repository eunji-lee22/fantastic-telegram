#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int num = 0, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        sum += num * num;
    }
    
    cout << sum%10 << "\n";

    return 0;
}
