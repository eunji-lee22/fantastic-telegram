#include <iostream>

using namespace std;

#define MAX_COUNT 100

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n=0, T=0;
    unsigned long long data[MAX_COUNT] = {0};

    cin >> T;

    data[0] = 1, data[1] = 1, data[2] = 1, data[3] = 2, data[4] = 2;
    data[5] = 3, data[6] = 4, data[7] = 5, data[8] = 7, data[9] = 9; 

    for(int j=10; j<MAX_COUNT; j++)
        data[j] = data[j-5] + data[j-1];

    //review: T is unsigned int Type, i is int Type
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << data[n-1] << "\n";
    }

    return 0;
}
