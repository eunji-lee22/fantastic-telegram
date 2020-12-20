#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input = 0;
        cin >> input;

        if(input) pq.push(pair<int, int>(abs(input) , input));
        else
        {
            int top =  (pq.empty()) ? 0 : pq.top().second;
            if(pq.size() > 0) pq.pop();
            cout << top << "\n";
        }
    }

    return 0;
}