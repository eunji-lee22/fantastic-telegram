#include <stdio.h>

int main()
{
    int T=0;

    scanf("%d", &T);

    for(int i=1; i<=T; i++){
        int a=0, b=0;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }

    return 0;
}