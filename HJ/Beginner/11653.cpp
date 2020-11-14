#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N, d=2;

    cin >> N;    

    while (N != 1)
    {
        if(N%d==0)
        {
             N /= d;
             cout << d << "\n";
        }
        else d++;
    }
    
    
    return 0;
}
