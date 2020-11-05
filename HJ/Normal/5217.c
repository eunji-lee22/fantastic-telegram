#include <stdio.h>

#define MAX_COUNT 100 + 1

int main()
{
    int n=0, input[MAX_COUNT]={0};

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &input[i]);
    }

    for(int i=0; i<n; i++) {
        printf("Pairs for %d:", input[i]);
        for(int j=1; j<=input[i]; j++) {
            if(j >= (input[i]-1)/2+1) break;
            if(j != 1) printf(",");
            printf(" %d %d", j, input[i]-j);
        }
        printf("\n");
    }

    return 0;
}
