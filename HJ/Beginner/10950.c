#include <stdio.h>

int main()
{
    int T=0;

    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        int a=0, b=0;
        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d\n", a+b);
    }

    return 0;
}