#include <stdio.h>

int main()
{
    int sum=0,num;

    scanf("%d", &sum);

    for (int i=0; i<9; i++) {
        scanf("%d", &num);

        sum -= num;
    }

    printf("%d", sum);

    return 0;
}
