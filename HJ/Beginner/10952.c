#include <stdio.h>

int main()
{
    int A=0, B=0;

    while (1)
    {
        scanf("%d", &A);
        scanf("%d", &B);

        if(A==0 && B==0) break;
        printf("%d\n", A+B);
    }
    
    return 0;
}