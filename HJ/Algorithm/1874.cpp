#include <iostream>
#include <vector>

using namespace std;

vector<int> v, stack;
void solve(bool check);
void push(int n);
void pop();
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int n, max=0;
    string str = "";

    cin >> n;

    bool check = true;
    for(int i=0; i<n; i++)
    {
        int input;
        cin >> input;
        if(input > max) max = input;
        else if(input > v.back()) check = false;

        v.push_back(input);
    }

    solve(check);

    return 0;
}

void solve(bool check)
{
    if(!check) cout << "NO" << "\n";
    else
    {
        int n=1;
        for(int i=0, max=v.size(); i<max; i++)
        {
            int num = v[i];

            while (1)
            {
                if(stack.empty()) push(n++);
                else if(stack.back() == num)
                {
                    pop();
                    break;
                }
                else push(n++);
            }
            
        }
    }
}

void push(int n)
{
    stack.push_back(n);
    cout << "+" << "\n";
}

void pop()
{
    stack.pop_back();
    cout << "-" << "\n";
}