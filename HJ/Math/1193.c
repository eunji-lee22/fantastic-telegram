#include <stdio.h>

int main()
{
    int N=0,d=0,i=0;

    scanf("%d", &N);

    N--;
    if(N%6 == 0 ) N = N/6;
    else N = N / 6 + 1;

    for (i = 0; N>0; i++)
    {
        N -= i;
    }
    
    // N이 1일 경우,
    if(i==0) printf("1");
    else printf("%d", i);

    return 0;
}
