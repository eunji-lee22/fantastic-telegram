#include <stdio.h>

int main()
{
    int A=0, B=0, V=0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &V);

    if((V-A) % (A-B) == 0) printf("%d", (V-A)/(A-B) + 1);
    else printf("%d", (V-A)/(A-B) + 2);

    return 0;
}
