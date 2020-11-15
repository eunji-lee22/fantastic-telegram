#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M,min=INT32_MAX;
    char map[50][50]={0};

    cin >> N >> M;

    for(int i=0; i<N; i++)
    {
        string str;
        cin >> str;

        for(int j=0; j<M; j++)
        {
            map[i][j] = str[j];
        }
    }

    for(int i=0, max=N-8; i<=max; i++)
    {        
        for(int j=0, max2=M-8; j<=max2; j++)
        {
            int W=0, B=0;

            for(int r=0; r<8; r++)
            {
                for(int c=0; c<8; c++)
                {
                    char value = map[i+r][j+c];

                    if((r+c)%2 == 0)
                    {
                        if(value=='B') W++;
                        else if(value == 'W') B++;
                    }
                    else
                    {
                        if(value=='W') W++;
                        else if(value == 'B') B++;
                    }
                    
                }
            }
            int cnt = (W < B) ? W : B;
            min = (cnt < min) ? cnt : min;
        }
    }

    cout << min << "\n";
       
    return 0;
}
