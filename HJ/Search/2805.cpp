#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++)
    {
        int input=0;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<>());
    long long low=0, high=v.front();
    while(low<high)
    {
        long long getWood=0, mid = (high + low - 1)/2 + 1;
        
        if(mid == low) break;
        for(long long i: v)
        {
            if(i < mid) break;
            getWood += i-mid;
        }

        if(getWood >= M) low = mid;
        else high = mid - 1;
    }
    cout << low << "\n";

    return 0;
}