#include <stdio.h>

int main()
{
    int N=0, M=0, blackJack=0;
    int input[101] = {0};

    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < N-2; i++)
    {
        for (int j = i+1; j < N-1; j++)
        {
            for (int z=j+1; z<N; z++){
                blackJack = (input[i]+input[j]+input[z] > blackJack && input[i]+input[j]+input[z] <= M)
                    ? input[i]+input[j]+input[z] : blackJack;
                if(blackJack == M) break;
            }
            if(blackJack == M) break;
        } 
        if(blackJack == M) break;
    }
    
    printf("%d\n", blackJack);
    
    return 0;
}
