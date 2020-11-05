#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num[10]={0}, max=0;
    string N;

    cin >> N;

    for(int i=0, max=N.size(); i<max; i++){
        num[N[i]-'0']++;
    }

    for(int i=0; i<9; i++){
        if(i == 6) max = (max > (num[6]+num[9]-1)/2+1) ? max : (num[6]+num[9]-1)/2+1;
        else max = (max > num[i]) ? max : num[i];
    }

    cout << max << "\n";

    return 0;
}
