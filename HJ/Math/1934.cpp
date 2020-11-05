#include <iostream>
 
using namespace std;
 
int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        int a, b;
        cin >> a >> b;
        int _gcd = gcd(a,b);
        cout << a*b/_gcd << "\n";
    }

    return 0;
}
