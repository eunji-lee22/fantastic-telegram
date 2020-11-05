#include <stdio.h>

int main()
{
    int a=-1, b=-1;

    do
    {
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) break;

        if(b%a == 0) printf("factor\n");
        else if(a%b == 0) printf("multiple\n");
        else printf("neither\n");
    } while (1);    

    return 0;
}
