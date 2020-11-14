#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int E=1,S=1,M=1,input[3]={0};

    cin >> input[0] >> input[1] >> input[2];

    int cnt = 0;
    while(++cnt)
    {
        if(input[0]==E && input[1]==S && input[2]==M)
        {
            cout << cnt;
            break;
        }

        E = (E+1>15) ? 1 : E+1;
        S = (S+1>28) ? 1 : S+1;
        M = (M+1>19) ? 1 : M+1;
    }


    return 0;
}
