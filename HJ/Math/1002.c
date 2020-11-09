#include <stdio.h>

int main()
{
    int x1, y1, r1, x2, y2, r2, d, T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        // d^2 = xd^2 + yd^2
        int xd = (x2 - x1)*(x2 - x1);
        int yd = (y2 - y1)*(y2 - y1);
        int rd1 = (r2 - r1)*(r2 - r1);
        int rd2 = (r2 + r1)*(r2 + r1);

        d = xd + yd;

        if (x1 == x2 && y1 == y2 && r1 == r2)
            printf("-1");
        else if (d == rd1)
            printf("1");
        else if (d == rd2)
            printf("1");
        else if (d < rd1)
            printf("0");
        else if (d > rd2)
            printf("0");
        else if (d < rd2)
            printf("2");

        printf("\n");
    }

    return 0;
}
