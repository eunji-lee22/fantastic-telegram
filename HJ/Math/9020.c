#include <stdio.h>

int Goldbach(int number);

int n=0;
int isPrime[25000] = {0, 1};

int main()
{

    int T=0;

    for (int i = 2; i*i < 25000; i++)
        if(isPrime[i] == 0)
            for (int j = i*i; j<=25000; j+=i)
                isPrime[j] = 1;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);

        Goldbach(n/2);
    }    
    
    return 0;
}

int Goldbach(int number) {
    if(number < 2) return 0;

    if (isPrime[number] == 0 && isPrime[n-number] == 0) {
        printf("%d %d\n", number, n-number);
        return 0;
    }        

    return Goldbach(number-1);
}