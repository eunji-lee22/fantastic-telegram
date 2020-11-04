#include <stdio.h>

int main()
{
    int T=0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int H=0,W=0,N=0;
        scanf("%d %d %d", &H, &W, &N);
        printf("%d%02d\n", (N-1)%H+1, (N-1)/H +1);
    }    

    return 0;
}
