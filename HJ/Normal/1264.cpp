#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str="";

    while (str != "#")
    {
        unsigned int count = 0;
        getline(cin, str, '\n');

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == 'a' || str[i] == 'A') count++;
            else if(str[i] == 'e' || str[i] == 'E') count++;
            else if(str[i] == 'i' || str[i] == 'I') count++;
            else if(str[i] == 'o' || str[i] == 'O') count++;
            else if(str[i] == 'u' || str[i] == 'U') count++;
        }

        if(str != "#") cout << count << "\n" << flush;
    }    

    return 0;
}
