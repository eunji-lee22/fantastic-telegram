#include <stdio.h>

int main()
{
    int C=0;

    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {
        int studentNumber = 0, sum=0, avr=0;
        int score[1000] = {0};

        scanf("%d", &studentNumber);

        for (int j = 0; j < studentNumber; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        
        avr = sum / studentNumber;

        int count=0;

        for (int i = 0; i < studentNumber; i++)
        {
            if(score[i] > avr) count++;
        }

        printf("%0.3f%%\n", (float) count / studentNumber * 100);
        
    }

    return 0;
}
