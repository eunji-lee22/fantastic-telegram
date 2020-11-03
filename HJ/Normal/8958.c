#include <stdio.h>

int main()
{
    int N=0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int score = 0, bonus = 0;
        char input[81] = "";

        scanf("%s", input);

        for (int i = 0; i < 80; i++)
        {
            if (input[i] != 'O' && input[i] != 'X')
                break;

            if (input[i] == 'O')
            {
                score += 1 + bonus++;
            }
            else
            {
                bonus = 0;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
