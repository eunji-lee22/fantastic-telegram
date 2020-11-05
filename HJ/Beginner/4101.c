#include <stdio.h>

#define MAX_COUNT 10000 + 1

int main()
{
    int A,B;

    do
    {
        scanf("%d %d", &A, &B);
        if(A == 0 && B == 0) break;
        printf("%s", (A > B) ? "Yes\n" : "No\n");
    } while (!(A==0 && B==0));
    
    return 0;
}
