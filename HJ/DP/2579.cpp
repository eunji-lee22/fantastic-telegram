#include <iostream>

using namespace std;

#define MAX_COUNT 300

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int memozaition[MAX_COUNT] = {0}, i, stairCount, stairValue[MAX_COUNT]={0};
    
    cin >> stairCount;
    
    for(i=1; i<=stairCount; i++) {
        cin >> stairValue[i];
    }

    for(i=1; i<=stairCount; i++) {
        if(i==1) memozaition[1] = stairValue[1];
        else if(i==2) memozaition[2] = stairValue[1] + stairValue[2];
        else memozaition[i] = stairValue[i] + ((memozaition[i-2] > memozaition[i-3] + stairValue[i-1]) ? memozaition[i-2] : memozaition[i-3] + stairValue[i-1]);
    }

    cout << memozaition[stairCount];

    return 0;
}
