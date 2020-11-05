#include <stdio.h>

int main()
{
    unsigned int count[10001]={0}, N=0, target=0;

    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        scanf("%d", &target);
        count[target]++;
    }
    
    for(int i=1; i<=10000; i++)
        for(int j=0; j<count[i]; j++)
            printf("%d\n", i);

    return 0;
}
