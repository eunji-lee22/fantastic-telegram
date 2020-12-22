#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int K, N;
vector<int> v;
int getMaxValue(long long low, long long high)
{
    long long mid = (low + high)/2;
    int midCnt = 0, highCnt = 0;
    for(long long i : v)
    {
        if(i < mid) break;
        midCnt += i / mid;
        highCnt += i / high;
    }
    if(highCnt >= N) return high;
    
    return (midCnt >= N) ? getMaxValue(mid, high-1) : getMaxValue(low, mid-1);
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> K >> N;
    for(int i=0; i<K; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end(), greater<>());

    cout << getMaxValue(1, v[0]) << "\n";

    return 0;
}
/*
 * review!
 * long long mid = (low + high)/2 -> int mid = low + (high-low)/2;
 * getMaxValue -> whlie: 속도차이는 나지만 꼭 바꾸는게 좋은건 아닐 수도.
 */