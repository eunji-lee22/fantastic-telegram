#include <stdio.h>

int isMinority(int number);

int main()
{
    int M=0, N=0, min=-1, sum=0;

    scanf("%d", &M);
    scanf("%d", &N);

    for(int i=M; i<=N; i++) {
        if(isMinority(i) ) {
            if(min == -1) min = i;
            sum += i;
        }
    }

    if(min == -1) printf("-1\n");
    else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }

    return 0;
}

int isMinority(int number) {
    if(number == 1) return 0;
    if(number == 2) return 1;

    for (int i = 2; i < number; i++)
    {
        if(number % i == 0) return 0;
    }
    
    return 1;
}