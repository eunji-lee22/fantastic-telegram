#include <stdio.h>

int main()
{
    unsigned int min=1001000, max=0;
    unsigned int N=0, target=0;

    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &target);

        min = (min>target) ? target : min;
        max = (max<target) ? target : max;
    }

    printf("%d", min * max);    

    return 0;
}
