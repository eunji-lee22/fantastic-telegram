#include <iostream>

using namespace std;

#define MAX_COUNT 8 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str="";
    unsigned int alpha[26] = {0}, max=0;

    while (!cin.eof())
    {
        getline(cin, str, '\n');

        for(int i=0; i<str.size(); i++) {
            if(str[i] >= 97 && str[i] <= 122) alpha[str[i]-97]++;
            max = (max > alpha[str[i]-97]) ? max : alpha[str[i]-97];
        }
    }

    for(int i=0; i<26; i++) {
        if(max <= alpha[i]) cout << (char) (i+97);  
    }  

    return 0;
}
