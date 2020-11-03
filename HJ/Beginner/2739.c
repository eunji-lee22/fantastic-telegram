#include <stdio.h>

int main()
{
    int a=0;

    scanf("%d", &a);

    if(a<1 || a>9) return 0;

    for(int i=1; i < 10; i++){
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}