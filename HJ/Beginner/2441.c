#include <stdio.h>

int main()
{
    int N=0;

    scanf("%d", &N);

    for (int i = N; i > 0; i--) {
        for (int j = N-i; j > 0; j--)
            printf(" ");
        for (int j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }        

    return 0;
}
