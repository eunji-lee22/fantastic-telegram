#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    for (int i = 0, max = str.size(); i < max; i++)
    {
        if (i % 10 == 0 && i != 0)
            cout << "\n";
        cout << str[i];
    }

    return 0;
}
