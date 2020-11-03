#include <stdio.h>

int main()
{
    int a=0, b=0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a<0 || a>10000) return 0;
    if(b<0 || b>10000 || b==0) return 0;

    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d", a%b);

    return 0;
}