#include <stdio.h>

int main()
{
    int num=0, money=5000;

    while (1)
    {
        if(scanf("%d", &num) == EOF) break;

        switch (num)
        {
        case 1: money -= 500; break;
        case 2: money -= 800; break;
        case 3: money -= 1000; break;
        default:
            break;
        }
    }

    printf("%d\n", money);
    
    return 0;
}
