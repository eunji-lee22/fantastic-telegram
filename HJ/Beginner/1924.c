#include <stdio.h>

int func(int x);

int main()
{
    int x=0,y=0;
    int day=0;

    scanf("%d %d", &x, &y);

    day = func(x-1) + y;

    switch (day % 7)
    {
    case 0:printf("SUN\n");break;
    case 1:printf("MON\n");break;
    case 2:printf("TUE\n");break;
    case 3:printf("WED\n");break;
    case 4:printf("THU\n");break;
    case 5:printf("FRI\n");break;
    case 6:printf("SAT\n");break;
    default:
        break;
    }

    return 0;
}

int func(int x) {
    if(x == 0) return 0;

    switch (x)
    {
    case 1: return 31 + func(x-1);
    case 2: return 28 + func(x-1);
    case 3: return 31 + func(x-1);
    case 4: return 30 + func(x-1);
    case 5: return 31 + func(x-1);
    case 6: return 30 + func(x-1);
    case 7: return 31 + func(x-1);
    case 8: return 31 + func(x-1);
    case 9: return 30 + func(x-1);
    case 10: return 31 + func(x-1);
    case 11: return 30 + func(x-1);
    case 12: return 31 + func(x-1);
    default:
        break;
    }

    return 0;
}