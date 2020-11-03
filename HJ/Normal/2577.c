#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int count[10] = {0}, result;

    result = a * b * c;

    while (result > 0)
    {
        int num = result % 10;

        switch (num)
        {
            //review: case 0: count[num]++; break;
            case 0: count[0] = count[0]+1; break;
            case 1: count[1] = count[1]+1; break;
            case 2: count[2] = count[2]+1; break;
            case 3: count[3] = count[3]+1; break;
            case 4: count[4] = count[4]+1; break;
            case 5: count[5] = count[5]+1; break;
            case 6: count[6] = count[6]+1; break;
            case 7: count[7] = count[7]+1; break;
            case 8: count[8] = count[8]+1; break;
            case 9: count[9] = count[9]+1; break;
            default: break;
        }     

        result = result / 10;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }
    
    return 0;
}
