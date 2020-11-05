#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_COUNT 1000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N=0, sum=0, waitTime=0;
    int data[MAX_COUNT] = {0};

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> data[i];
    }
    
    sort(data, data+N);

    for (int i = 0; i < N; i++)
    {
        waitTime += data[i];
        sum += waitTime;
    }    

    cout << sum << "\n";

    return 0;
}
