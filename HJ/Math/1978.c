#include <stdio.h>

int isMinority(int number);

int main()
{
    int N = 0, count = 0, num=0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        count += isMinority(num);
    }

    printf("%d", count);

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