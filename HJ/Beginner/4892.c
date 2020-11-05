#include <stdio.h>
#include <string.h>

#define MAX_COUNT 10000 + 1

int main()
{
    int n=0, cnt=0;

    while (1)
    {
        cnt++;
        scanf("%d", &n);
        if(n==0) break;

        n = 3*n;

        char str[6] = "";

        if(n%2==0) {
            strcpy(str, "even");
            n = n/2;
        } else {
            strcpy(str, "odd");
            n = (n+1)/2;
        }

        n = 3*n;
        n = n/9;

        printf("%d. %s %d\n", cnt, str, n);
    } 
    
    return 0;
}
