#include <iostream>

using namespace std;
const int MAX_COUNT = 20 + 1;
int memoization[MAX_COUNT][MAX_COUNT][MAX_COUNT] = {0, };
int w(int a, int b, int c)
{    
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    if(a > 20 || b > 20 || c > 20) return memoization[20][20][20] = w(20, 20, 20);
    if(memoization[a][b][c] > 0) return memoization[a][b][c];
    
    if(a < b && b < c) return memoization[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);    
    return memoization[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    
    while(true)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a,b,c));
    }
    
    return 0;
}
