#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int N, K;

    cin >> N >> K;
    for(int i=1; i<=N; i++)
    {
        q.push(i);
    }

    cout << "<";
    while (N--)
    {
        for(int i=1; i<=K; i++)
        {
            if(i==K)
            {
                cout << q.front();
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }            
        }
        
        if(N!=0) cout << ", ";
    }
    cout << ">";
       
    return 0;
}