#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(true)
    {
        vector<int> v;
        stack<int> st;
        int n;
        long long maxValue=0;
        cin >> n;
        if(n==0) break;
        for(int i=0; i<n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
            if(st.empty() || v[st.top()] <= input) st.push(i);
            else
            {
                while(!st.empty())
                {   
                    int top = st.top();                    
                    if(v[top] <= input) break;
                    st.pop();
                    int width = (st.empty()) ? i : i - st.top() - 1;
                    long long area = (long long) width * (long long) v[top];
                    maxValue = (maxValue > area) ? maxValue : area;
                }
                st.push(i);
            }
        }

        while(!st.empty())
        {
            int top = st.top();
            st.pop();
            int width = (st.empty()) ? n : n - st.top() - 1;
            long long area = (long long) width * (long long) v[top];
            maxValue = (maxValue > area) ? maxValue : area;
        }

        cout << maxValue << "\n";
    }

    return 0;
}

