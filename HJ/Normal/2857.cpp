#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int h=0;

    for(int i=1; i<=5; i++) {
        cin >> str;
        for(int j=0, max=str.size()-2; j<max; j++){
            if(str[j] != 'F') continue;
            if(str[j+1] == 'B' && str[j+2] == 'I') {
                cout << i << " ";
                h++;
                break;
            }
        }
    }
    
    if(h==0) cout << "HE GOT AWAY!\n";
    else cout << "\n";

    return 0;
}

