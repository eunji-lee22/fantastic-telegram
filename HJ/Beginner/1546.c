#include <stdio.h>

int main()
{
    int data[1000] = {0}, N=0, sum=0;
    int max=0;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &data[i]);
        sum += data[i];
        max = (max > data[i]) ? max : data[i];
    }
    
    printf("%lf\n", (double) (sum*100) / (N*max));

    return 0;
}
