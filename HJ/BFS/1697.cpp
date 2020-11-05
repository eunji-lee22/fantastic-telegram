#include <iostream>
#include <queue>

using namespace std;

#define MAX_COUNT 100000 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, cnt = 0;
    queue<int> q;
    int isVisited[MAX_COUNT] = {0};

    cin >> N >> K;

    q.push(N);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if(x == K) break;

        if(x-1>=0 && !isVisited[x-1]) 
        {
            q.push(x-1);
            isVisited[x-1] = isVisited[x] + 1;
        }
        if(x+1 < MAX_COUNT && !isVisited[x+1])
        {
            q.push(x+1);
            isVisited[x+1] = isVisited[x] + 1;
        }
        if(2*x < MAX_COUNT && !isVisited[2*x])
        {
            q.push(2*x);
            isVisited[2*x] = isVisited[x] + 1;
        }
    }
    
    cout << isVisited[K] << "\n";

    return 0;
}
