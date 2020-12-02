#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string s = (N%2==0) ? "SK" : "CY";

    cout << s << "\n";
        
    return 0;
}
