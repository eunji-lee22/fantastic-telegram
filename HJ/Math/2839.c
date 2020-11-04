#include <stdio.h>

int main()
{
    int N=0,max=0;

    scanf("%d", &N);

    max = N / 5;

    for (int i = max; i >= 0; i--)
    {
        if((N-5*i)%3 == 0) {
            printf("%d", i+(N-5*i)/3);
            return 0;
        }
    }
    
    printf("%d", -1);

    return 0;
}
