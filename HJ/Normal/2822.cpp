#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int score[8] = {0};
    unsigned int value[8] = {0};
    unsigned int sum = 0;

    for(int i=0; i<8; i++){
        cin >> score[i];
        value[i] = score[i];
    }   

    sort(value+0, value+8);

    for(int i=3; i<8; i++) sum += value[i];

    cout << sum << "\n";

    for(int i=0; i<8; i++){
        for(int j=3; j<8; j++){
            if(score[i] == value[j]){
                cout << i+1 << " ";
                break;
            }
        }
    }
    cout << "\n";
    
    return 0;
}
