#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned int M=0,N=0;
    unsigned int i=0,j=0;
    int *isPrime;

    isPrime = calloc(1000000, sizeof(int));
    memset(isPrime, 0, sizeof(int));

    scanf("%d %d", &M, &N);

    isPrime[1] = 1;

    for(i=2; i*i<=N; i++)     
        if(isPrime[i]==0)
            for (j = i*i; j <= N; j+=i) isPrime[j] = 1;

    for(i=M; i<=N; i++) if(isPrime[i] == 0) printf("%d\n", i);

    free(isPrime);

    return 0;
}
