#include <iostream>
#include <deque>
using namespace std;
#define MAX_COUNT 100

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, n, input;
    char c;
    cin >> T;
    while (T--)
    {        
        string p;
        cin >> p >> n;
        
        deque<int> dq;
        cin >> c;
        for(int i=0; i<n; i++)
        {
            if(i==0) cin >> input;
            else cin >> c >> input;
            dq.push_back(input);
        }
        cin >> c;

        bool isFront = true;
        for(int i=0, size=p.size(); i<size; i++)
        {
            if(p[i]=='R') isFront = !isFront;
            else if(p[i]=='D'&&dq.empty())
            {
                cout << "error" << "\n";
                break;
            }
            else
                (isFront) ? dq.pop_front() : dq.pop_back();

            if (i == size - 1)
            {
                cout << "[";
                for (int i = 0, size = dq.size(); i < size; i++)
                {
                    int val = (isFront) ? dq[i] : dq[size - 1 - i];
                    if (i == 0)
                        cout << val;
                    else
                        cout << "," << val;
                }
                cout << "]\n";
            }
        }

    }
    
    
    return 0;
}

