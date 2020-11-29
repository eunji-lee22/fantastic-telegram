#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    deque<int> dq;

    int N, M, cnt=0;
    cin >> N >> M;;
    for(int i=1; i<=N; i++)
    {
        dq.push_back(i);
    }

    while (M--)
    {
        int input, isFront=0;
        cin >> input;

        for(int i=0, size=dq.size(); i<size; i++)
        {
            if(dq[i] == input)
            {
                isFront = 1;
                break;
            }
            else if(dq[size-1-i] == input)
            {
                isFront = 0;
                break;
            }
        }

        while (true)
        {
            if (dq.front() == input)
            {
                dq.pop_front();
                break;
            }
            if (isFront)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }

            cnt++;
        }

    }
    
    cout << cnt << "\n";
    
    return 0;
}

