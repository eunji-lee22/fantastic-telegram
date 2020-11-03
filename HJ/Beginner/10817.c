#include <stdio.h>

int main()
{
    int a=0,b=0,c=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<1 || a>100) return 0;
    if(b<1 || b>100) return 0;
    if(c<1 || c>100) return 0;

    int l = (a>=b) ? a : b;
    int s = (a<=b) ? a : b;

    if(c >= l) printf("%d", l);
    else if(c >= s) printf("%d", c);
    else printf("%d", s); 

    return 0;
}