#include <stdio.h>

int main()
{
    int year=0;

    scanf("%d", &year);

    if(year<0 || year>4000) return 0;

    if(year % 400 == 0) printf("1");
    else if(year % 100 == 0) printf("0");
    else if(year % 4 == 0) printf("1");
    else printf("0");

    return 0;
}