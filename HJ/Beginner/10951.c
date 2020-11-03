#include <stdio.h>

int main()
{
    int A=0, B=0;

    while (scanf("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A+B);
    }
    
    return 0;
}