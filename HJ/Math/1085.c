#include <stdio.h>

int isMinority(int number);

int main()
{
    int x=0,y=0,w=0,h=0;
    int distance=0, xw=0, yh=0;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    xw = (w-x <= x) ? w-x : x;
    yh = (h-y <= y) ? h-y : y;

    distance = (xw >= yh) ? yh : xw;

    printf("%d\n", distance);

    return 0;
}

