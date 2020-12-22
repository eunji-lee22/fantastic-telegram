#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    int left = 1, right = K, ans;
    while(left <= right)
    {
        long long cnt = 0;
        int mid = (left + right) / 2;
        for(int i=1; i<=N; i++) cnt += min(mid/i, N);
        if(cnt < K) left = mid + 1;
        else ans = mid, right = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}
/*
 * ### 해설 ###
 * K번째 수란, K보다 작은 수가 K-1 개 있다는 것.
 * 임의의 수, mid보다 작은 수가 몇개인지 이분탐색을 한다.
 * 
 * mid보다 작은 수를 찾는 법.
 * A[i][j] = i*j 이므로 i번째 줄의 값은 i의 배수이다.
 * 따라서, i번째 줄에 mid보다 작은 값은 mid/i 개 (최대 N)이다. -> min(mid/i, N)
 * 
 */