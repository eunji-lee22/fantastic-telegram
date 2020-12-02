#include <iostream>
using namespace std;
#define MAX_INPUT 1000 + 1
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    int memoization[MAX_INPUT][MAX_INPUT] = {0};

    cin >> s1 >> s2;

    for(int i=0, iSize=s1.size(); i<iSize; i++)
    {
        for(int j=0, jSize=s2.size(); j<jSize; j++)
        {
            if(s1[i]==s2[j]) memoization[i+1][j+1] = memoization[i][j] + 1;
            else memoization[i+1][j+1] = (memoization[i+1][j] > memoization[i][j+1])
             ? memoization[i+1][j] : memoization[i][j+1];
            
            if((i==iSize-1) && (j==jSize-1)) cout << memoization[iSize][jSize] << "\n";
        }
    }

    return 0;
}
