#include <stdio.h>

int func(int n);

int main()
{
    int N=0, count=1;
    int data[50][2];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &data[i][0], &data[i][1]);
    }

    for (int i = 0; i < N; i++)
    {
        count = 1;
        for (int j = 0; j < N; j++)
        {
            if(i == j) continue;
            if(data[i][0] < data[j][0] && data[i][1] < data[j][1]) count++;
        }
        printf("%d ", count);
    }

    return 0;
}
