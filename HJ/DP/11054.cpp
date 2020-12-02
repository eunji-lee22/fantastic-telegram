#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, arr[1000]={0}, up[1000]={0}, down[1000]={0}, lbs=0;
    vector<int> lis, lds;
    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> arr[i];

        if(i==0) lis.push_back(arr[i]);
        for(int j=0, max=lis.size(); j<max; j++)
        {
            if(arr[i] <= lis[j])
            {
                lis[j] = arr[i];
                break;
            }
            else if(j==max-1) lis.push_back(arr[i]);
        }

        up[i] = lis.size();
    }

    for(int i=N-1; i>=0; i--)
    {
        if(i==N-1) lds.push_back(arr[i]);
        for(int j=0, max=lds.size(); j<max; j++)
        {
            if(arr[i] <= lds[j])
            {
                lds[j] = arr[i];
                break;
            }
            else if(j==max-1) lds.push_back(arr[i]);
        }

        down[i] = lds.size();
    }

    for(int i=0; i<N; i++)
    {
        int sum = up[i]+down[i];
        lbs = (lbs > sum) ? lbs : sum;
    }

    cout << lbs-1 << "\n";

    return 0;
}
