#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    if(str == "A+") cout << "4.3\n";
    else if(str == "A0") cout << "4.0\n";
    else if(str == "A-") cout << "3.7\n";
    else if(str == "B+") cout << "3.3\n";
    else if(str == "B0") cout << "3.0\n";
    else if(str == "B-") cout << "2.7\n";
    else if(str == "C+") cout << "2.3\n";
    else if(str == "C0") cout << "2.0\n";
    else if(str == "C-") cout << "1.7\n";
    else if(str == "D+") cout << "1.3\n";
    else if(str == "D0") cout << "1.0\n";
    else if(str == "D-") cout << "0.7\n";
    else cout << "0.0\n";
    
    return 0;
}
