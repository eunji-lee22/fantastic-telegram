#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    string str;

    while (getline(cin, str))
    {
        if(str == ".") break;
        
        string check = "yes";
        vector<char> v;

        for(int i=0, max=str.size(); i<max; i++)
        {
            if(str[i] == '(' || str[i] == '[') v.push_back(str[i]);
            else if(str[i] == ')' || str[i] == ']')
            {
                if(v.size() == 0)
                {
                    check = "no";
                    break;
                }
                char lastInput = v.back();

                if(lastInput == '(' && str[i] == ')') check = "yes";
                else if(lastInput == '[' && str[i] == ']') check = "yes";
                else
                {
                    check = "no";
                    break;
                }                

                v.pop_back();
            }
            
        }

        cout << ((v.size() == 0 ? check : "no")) << "\n";
    }    
    
    return 0;
}
