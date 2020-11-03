#include <stdio.h>

int main()
{
    int N, input;
    int max = -1000000;
    int min = 1000000;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &input);

        max = (input >= max) ? input : max;
        min = (input <= min) ? input : min;
    }

    printf("%d %d", min, max);

    return 0;
}
