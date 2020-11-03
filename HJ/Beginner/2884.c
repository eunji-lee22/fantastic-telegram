#include <stdio.h>

int main()
{
    int hour=0;
    int minute=0;

    scanf("%d", &hour);
    scanf("%d", &minute);

    if(hour<0 || hour>23) return 0;
    if(minute<0 || minute>59) return 0;

    int time = hour * 60 + minute;
    int earlyTime = time - 45;

    if(earlyTime < 0) earlyTime += 1440;

    printf("%d %d", earlyTime / 60, earlyTime%60);

    return 0;
}