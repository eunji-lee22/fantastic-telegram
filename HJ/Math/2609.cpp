#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    cin >> a >> b;

    int c = gcd(a, b);

    cout << c << "\n" << a*b/c << "\n";

    return 0;
}
