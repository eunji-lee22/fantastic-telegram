#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int N, C;
    cin >> N >> C;
    for(int i=0; i<N; i++)
    {
        int input = 0;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    int low=1, high=v.back()-v.front();
    while(low<high)
    {
        int mid = (low + high -1) / 2 + 1, x=v.front(), dis=0, cnt=1;
        
        if(low == mid) break;
        for(int i : v)
        {
            dis = i - x;
            if(dis >= mid)
            {
                cnt++;
                x = i;
            }
        }

        if(cnt >= C) low = mid;
        else high = mid - 1;
    }

    cout << low << "\n";

    return 0;
}