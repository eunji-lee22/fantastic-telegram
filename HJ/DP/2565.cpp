#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> p1, vector<int> p2)
{
    return p1[1] < p2[1];
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, maxValue=0;
    cin >> N;
    vector<int> lisA, lisB;
    vector<vector<int>> input;
    for(int i=0; i<N; i++)
    {
        int A, B;
        cin >> A >> B;
        input.push_back(vector<int>{A,B});
    }

    sort(input.begin(), input.end());
    for(int i=0; i<N; i++)
    {
        if(i==0) lisA.push_back(input[i][1]);
        for(int j=0, size=lisA.size(); j<size; j++)
        {
            if(input[i][1] <= lisA[j])
            {
                lisA[j] = input[i][1];
                break;
            }
            else if(j==size-1) lisA.push_back(input[i][1]);
        }
    }

    sort(input.begin(), input.end(), compare);
    for(int i=0; i<N; i++)
    {
        if(i==0) lisB.push_back(input[i][0]);
        for(int j=0, size=lisB.size(); j<size; j++)
        {
            if(input[i][0] <= lisB[j])
            {
                lisB[j] = input[i][0];
                break;
            }
            else if(j==size-1) lisB.push_back(input[i][0]);
        }
    }

    maxValue = max(lisA.size(), lisB.size());

    cout << (N - maxValue) << "\n";
    return 0;
}
