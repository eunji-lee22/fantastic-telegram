#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    long long num=0;

    while (str != "#")
    {
        num = 0;
        cin >> str;
        if (str[0] == '#') break;        

        for (int i = 0; i < str.size(); i++)
        {
            num *= 8;
            switch (str[i])
            {
            case '-': num+=0;break;
            case '\\': num+=1;break;
            case '(': num+=2;break;
            case '@': num+=3;break;
            case '?': num+=4;break;
            case '>': num+=5;break;
            case '&': num+=6;break;
            case '%': num+=7;break;
            case '/': num+=-1;break;
            default:
                break;
            }
        }       

        cout << num << "\n";
    }
    
    return 0;
}
