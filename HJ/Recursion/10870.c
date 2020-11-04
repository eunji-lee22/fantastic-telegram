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
    if(N==0) return 0;
    if(N==1) return 1;
    
    return func(N-1) + func(N-2);
}
