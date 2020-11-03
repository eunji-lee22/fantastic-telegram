#include <stdio.h>

int main()
{
    int a=0, b=0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a<100 || a>1000) return 0;
    if(b<100 || b>1000) return 0;

    printf("%d\n", a*(b%10));
    printf("%d\n", a*((b%100)/10));
    printf("%d\n", a*(b/100));
    printf("%d\n", a*b);

    return 0;
}