#include <stdio.h>

int getResult(int a);

int main()
{
    int N=0, count=1;

    scanf("%d", &N);

    int result = getResult(N);

    while (N != result)
    {
        result = getResult(result);
        count++;
    }

    printf("%d", count);
    
    return 0;
}

int getResult(int N) {
    int t = N / 10;
    int o = N % 10;

    return o * 10 + ((t + o)%10);
}