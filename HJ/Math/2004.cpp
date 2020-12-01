#include <iostream>
#include <vector>
using namespace std;

int result(int num, int d)
{
    int cnt = 0;
    while(num>=d)
    {
        cnt += num/d;
        num /= d;
    }
    return cnt;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, len, cnt5=0, cnt2=0;
    cin >> N >> M;
    if(M > N/2)len = N - M;
    else
    {
        len = M;
        M = N - len;
    }
    
    cnt5 += result(N, 5);
    cnt2 += result(N, 2);
    
    cnt5 -= result(M, 5);
    cnt2 -= result(M, 2);
    
    cnt5 -= result(len, 5);
    cnt2 -= result(len, 2);
    
    int minValue = (cnt5 < cnt2) ? cnt5 : cnt2;
    cout << minValue << "\n";
    
    return 0;
}