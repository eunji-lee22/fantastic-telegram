#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    for(int i=0,max=str.size(); i<max; i++) {
        if(str[i] == 'C') continue;
        else if(str[i] == 'A') continue;
        else if(str[i] == 'M') continue;
        else if(str[i] == 'B') continue;
        else if(str[i] == 'R') continue;
        else if(str[i] == 'I') continue;
        else if(str[i] == 'D') continue;
        else if(str[i] == 'G') continue;
        else if(str[i] == 'E') continue;

        cout << str[i];
    }
    cout << "\n";
    
    return 0;
}
