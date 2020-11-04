#include <stdio.h>

int main()
{
    char input1[4] = "", input2[4]="";
    int a1=0, a2=0;

    scanf("%s", &input1);
    scanf("%s", &input2);

    a1 = (input1[2] - '0') * 100 + (input1[1] - '0') * 10 + (input1[0] - '0');
    a2 = (input2[2] - '0') * 100 + (input2[1] - '0') * 10 + (input2[0] - '0');

    printf("%d", (a1 > a2) ? a1 : a2);

    return 0;
}
