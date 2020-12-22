#include <iostream>
using namespace std;

const int MAX_COUNT = 10000000 + 1;
// const int MAX_COUNT = 1000 + 1;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, arr1[MAX_COUNT]={0}, arr2[MAX_COUNT]={0};

    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input;
        cin >> input;

        if(input >= 0) arr1[input]++;
        else arr2[-input]++;
    }

    cin >> M;
    for(int i=0; i<M; i++)
    {
        int input;
        cin >> input;
        if(input >= 0) cout << arr1[input] << " ";
        else cout << arr2[-input] << " ";
    }
    cout << "\n";

    return 0;
}

