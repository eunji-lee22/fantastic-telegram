#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_COUNT 8 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int cup[3] = {1,2,3}, M=0;

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        unsigned int X, Y;

        cin >> X >> Y;

        unsigned int tmp = cup[X-1];
        cup[X-1] = cup[Y-1];
        cup[Y-1] = tmp;
    }
    
    for (int i = 0; i < 3; i++)
    {
        if(cup[i] == 1) cout << i+1 << "\n";
    }
    
    return 0;
}
