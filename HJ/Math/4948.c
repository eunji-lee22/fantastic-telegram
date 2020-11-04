#include <stdio.h>

int main()
{
    int n=0,count=0;
    int isPrime[250000] = {0, 1};
    // 2n <= 246912

    for (int i = 2; i*i < 250000; i++)
        if(isPrime[i] == 0)
            for (int j = i*i; j<=250000; j+=i)
                isPrime[j] = 1;
                
    do
    {
        scanf("%d", &n);
        if(n == 0) break;

        count = 0;
        for (int i = n+1; i <= 2*n; i++)
            if(isPrime[i] == 0) count++;
        
        printf("%d\n", count);

    } while (n != 0);
    
    return 0;
}
