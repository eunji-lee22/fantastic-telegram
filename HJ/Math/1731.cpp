#include <iostream>

using namespace std;

#define MAX_COUNT 50

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long a1, an;
    unsigned int N=0, flag=0;
    long long r=0, d;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if(i==0) cin >> a1;
        else if(i==1) {
            cin >> an;
            if(an%a1 == 0) r = an / a1;
            d = an - a1;
        }
        else if(i==2) {
            cin >> an;
            if(an - d == a1 + d) flag = 0;
            else if(r != 0 && a1 * r == an / r) flag = 1; 
        }
        else cin >> an;
    }

    if (flag == 1)
        cout << an * r << "\n";
    else 
        cout << an + d << "\n";    
    
    return 0;
}
