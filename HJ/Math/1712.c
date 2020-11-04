#include <stdio.h>

int main()
{
    int A=0, B=0, C=0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if(B >= C) printf("-1\n");
    else printf("%d\n", A / (C-B) + 1);

    return 0;
}
