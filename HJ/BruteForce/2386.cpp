#include <iostream>

using namespace std;

unsigned int alpha[26] = {0};
void func();

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string target, str;

    while (1)
    {  
        cin >> target;
        if(target == "#") break;
        func();
        getline(cin, str);

        for(int i=0, max=str.size(); i<max; i++) {
            if(str[i] >= 65 && str[i] <= 90) alpha[str[i]-65]++;
            else if(str[i] >= 97 && str[i] <= 122) alpha[str[i]-97]++;
        }
    
        cout << target << " " << alpha[target[0]-97] << "\n";
    }
    

    return 0;
}

void func() {
    for(int i=0; i<26; i++) {
        alpha[i] = 0;
    }

    return;
}
