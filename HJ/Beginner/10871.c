#include <stdio.h>

int main()
{
    int N=0, X=0;

    scanf("%d", &N);
    scanf("%d", &X);

    for(int i=1; i<=N; i++){
        int a=0;
        scanf("%d", &a);
        if(X > a) printf("%d ", a);
    }

    return 0;
}