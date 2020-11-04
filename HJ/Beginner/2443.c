#include <stdio.h>

int main()
{
    int N=0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for(int j=0; j<i; j++) printf(" ");
        for(int j=2*N; j > 2*i+1; j--) printf("*");
        printf("\n");
    }    

    return 0;
}
