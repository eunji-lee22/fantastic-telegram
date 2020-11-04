#include <stdio.h>

int warp(int dist);
int getSpeed(int distance);

int main()
{
    int T=0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int x=0,y=0;
        
        scanf("%d %d", &x, &y);

        printf("%d\n", getSpeed(y-x));
    }    

    return 0;
}

int getSpeed(int distance) {
    unsigned int N=0, squareN=0;
    
    // distance는 N*N-N+1 ~ N*N+N 사이에 존재한다.
    while (1)
    {
        squareN = N * N;
        if(distance > squareN-N && distance <= squareN+N) break;
        N++;
    }
        
    if(N*N >= distance) return 2*N - 1;
    else return 2*N;
}


