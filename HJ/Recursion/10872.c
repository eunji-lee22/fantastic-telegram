#include <stdio.h>

int func(int N);

int main()
{
    int N=0;

    scanf("%d", &N);

    printf("%d\n", func(N));
    
    return 0;
}

int func(int N) {
    if(N==0) return 1;
    if(N==1) return 1;
    
    return N * func(N-1);
}
