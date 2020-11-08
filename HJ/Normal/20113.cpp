#include <iostream>

using namespace std;

#define MAX_COUNT 101

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N = 0, vote[MAX_COUNT]={0}, fPlayer=0, sPlayer=0;

    cin >> N;

    for(int i=1; i<=N; i++) {
        int value;

        cin >> value;

        if(value == 0) continue;
        vote[value]++;
        
        fPlayer = (vote[fPlayer] >= vote[value]) ? fPlayer : value;
        sPlayer = (vote[sPlayer] > vote[value]) ? sPlayer : value;
    }

    if(fPlayer == 0 && sPlayer == 0) cout << "skipped\n";
    else if(fPlayer == sPlayer) cout << fPlayer << "\n";
    else cout << "skipped\n";

    return 0;
}
