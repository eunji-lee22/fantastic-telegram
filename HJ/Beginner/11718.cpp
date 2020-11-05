#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    while(1) {
        getline(cin, str);
        if(str == "") break;
        cout << str << "\n";
    }

    return 0;
}
