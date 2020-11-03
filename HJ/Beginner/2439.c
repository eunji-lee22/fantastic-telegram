#include <stdio.h>

int main()
{
    int N=0;

    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        for(int j=N; j>=1; j--){
            if(j <= i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}