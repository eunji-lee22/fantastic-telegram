#include <stdio.h>

int main()
{
    int a=0, b=0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a<-10000 || a>10000) return 0;
    if(b<-10000 || b>10000) return 0;

    if(a > b) printf(">");
    else if(a < b) printf("<");
    else if(a == b) printf("==");

    return 0;
}