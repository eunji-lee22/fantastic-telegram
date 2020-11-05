#include <stdio.h>

int main()
{
    int N=0;
    
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        for (int j=i; j<N-1; j++) printf(" ");
        for (int j=0; j<2*i+1; j++) printf("*");
        printf("\n");
    }

    for (int i=N-1; i>0; i--) {
        for (int j=i; j<N; j++) printf(" ");
        for (int j=0; j<2*i-1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
