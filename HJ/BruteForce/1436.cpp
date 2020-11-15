#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, index=0, i=0;
    cin >> N;

    while (N--)
    {
        if(index%1000 == 666)
        {            
            if(N==0)
            {
                int num = index * 1000 + i;
                cout << num << "\n";
            }
                              
            if(++i==1000)
            {
                i=0;
                index++;
            }
        }
        else if(index%100 == 66)
        {            
            if(N==0)
            {
                int num = index * 1000 + 600 + i;
                cout << num << "\n";
            }
                              
            if(++i==100)
            {
                i=0;
                index++;
            }
        }
        else if(index%10 == 6)
        {            
            if(N==0)
            {
                int num = index * 1000 + 660 + i;
                cout << num << "\n";
            }
                              
            if(++i==10)
            {
                i=0;
                index++;
            }
        }
        else
        {
            if(N==0)
            {
                int num = index * 1000 + 666;
                cout << num << "\n";
            }
            
            index++;
        }
    }
       
    return 0;
}
