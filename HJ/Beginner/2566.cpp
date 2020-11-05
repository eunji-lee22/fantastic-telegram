#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int x,y,max=0,num;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> num;
            if(num > max) {
                max = num;
                x = i;
                y = j;
            }
        }
    }

    cout << max << "\n" << x+1 << " " << y+1 << "\n";
    
    return 0;
}
