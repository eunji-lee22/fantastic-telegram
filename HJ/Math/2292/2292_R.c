#include <stdio.h>

int main()
{
    int N=0, MAX=1;

    scanf("%d", &N);

    for(int i=1; ; i++) {
        if(N<=MAX) {
            printf("%d", i);
            return 0;
        }
        
        MAX += 6*i;
    }

    return 0;
}