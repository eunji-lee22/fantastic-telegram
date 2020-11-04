#include <stdio.h>

int func(int n);

int main()
{
    int N=0, i=0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if(N == i + func(i)) break;
        if(i == N) {
            i=-1;
            break;
        }
    }
    
    printf("%d", (i==-1) ? 0 : i);
    
    return 0;
}

int func(int n) {
    if (n == 0) return 0;
    
    return n%10 + func(n/10);
}
