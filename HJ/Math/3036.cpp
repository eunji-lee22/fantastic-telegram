#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b > a) return a ? gcd(a, b%a) : b;
	return b ? gcd(b, a%b) : a;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, arr[101]={0};
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
        if(i==0) continue;
        int M = gcd(arr[0], arr[i]);
        cout << arr[0]/M << "/" << arr[i]/M << "\n";
    }
    
    return 0;
}