#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    for(int i=0, max=str.size(); i<max; i++) {
        if(str[i] >= 97 && str[i] <= 122) cout << (char)(str[i]-97+65);
        else if (str[i] >= 65 && str[i] <= 90) cout << (char)(str[i]-65+97);
    }

    return 0;
}
