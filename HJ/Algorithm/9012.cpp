#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int T, i, top=0;
    string str;
    int vps = 0;

    cin >> T;
    for(i=0; i<T; i++) {
        cin >> str;
        vps = 0, top=0;

        for(int j=0, max=str.size(); j<max; j++) {
            if(vps == -1) break;

            if(str[j] == '(') top++;
            else if(str[j] == ')' && top > 0) top--;
            else vps = -1;
        }

        if(vps == -1 || top != 0) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
