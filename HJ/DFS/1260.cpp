#include <iostream>

using namespace std;

#define MAX_COUNT 1000+1

void dfs(unsigned int V);
void bfs(unsigned int V);
unsigned int input[MAX_COUNT][MAX_COUNT] = {0};
unsigned int N, M, V;
bool visitR[MAX_COUNT] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> V;

    for(int i=1; i<=M; i++){
        int x,y;
        cin >> x >> y;
        input[x][y] = input[y][x] = 1;
    }

    dfs(V);
    cout << "\n";
    bfs(V);

    return 0;
}

void dfs(unsigned int V){
    cout << V << " ";

    visitR[V] = true;

    for(int i=1; i<=N; i++)
        if(visitR[i] == false && input[V][i] == 1) dfs(i);

}

void bfs(unsigned int V)
{
    bool visit[N+1] = {0};
    unsigned int que[N] = {0};
    int front=0, rear=-1;

    que[++rear] = V;
    visit[V] = true;

    while (front <= rear)
    {
        int target = que[front++];
        cout << target << " ";

        for(int i=1; i<=N; i++){
            if(visit[i] == true || input[target][i] == 0) continue;

            que[++rear] = i;
            visit[i] = true;
        }
    }
    
}

