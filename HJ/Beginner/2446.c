#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for(int i=N; i>0; i--) {
        for(int j=i; j<N; j++) printf(" ");
        for(int j=2*i-1; j>0; j--) printf("*");
        printf("\n");
    }
    for(int i=2; i<=N; i++) {
        for(int j=i; j<N; j++) printf(" ");
        for(int j=0; j<2*i-1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
