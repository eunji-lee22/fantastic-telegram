#include <stdio.h>

int getHansu(int number);
int getD(int number);

int main()
{
    int N = 0, count=0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if(i<=99) count++;
        else count += getHansu(i);
    }
    
    printf("%d", count);

    return 0;
}

int getHansu(int number) {
    int isHansu = 1;
    int d = getD(number);
    number = number / 10;

    while (number/10 > 0)
    {
        int test = getD(number);

        if(d != test) {
            isHansu = 0;
            break;
        }

        number = number / 10;
    }
    
    return isHansu;
}

int getD(int number) {
    int a1, a2;
    a1 = number % 10;
    a2 = (number / 10) % 10;

    return a2 - a1;
}