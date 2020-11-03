#include <stdio.h>

int main()
{
    int a=0, b=0, c=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<2 || a>10000) return 0;
    if(b<2 || b>10000) return 0;
    if(c<2 || c>10000) return 0;

    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c) + (b%c))%c);
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);

    return 0;
}