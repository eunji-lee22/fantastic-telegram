#include <stdio.h>

int main()
{    
    int num, x, z;

    while (1)
    {
        scanf("%d", &num);
        x=0;z=num;
        if(num == 0) break;

        while (num)
        {
            x = x*10 + num%10;
            num /= 10;
        }
        printf("%s\n", (x == z) ? "yes" : "no");
    }

    return 0;
}