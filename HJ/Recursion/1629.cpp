#include <iostream>

using namespace std;

long long pow(int A, int B, int C);
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;

    cin >> A >> B >> C;
    cout << pow(A, B, C) << "\n";

    return 0;
}

long long pow(int A, int B, int C)
{
    if(B==0) return 1;

    long long result = pow(A, B/2, C);
    result = (result * result) % C;

    if(B%2==0) return result;
    else return (result * A) % C;
}