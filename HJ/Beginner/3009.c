#include <stdio.h>

int main()
{
    int p[2][3] = {0};
    int x=0, y=0;

    for(int i=0; i<3; i++) {
        scanf("%d %d", &p[0][i], &p[1][i]);
    }

    if(p[0][0] == p[0][1]) {
        x = p[0][2];
        y = (p[1][2] == p[1][0]) ? p[1][1] : p[1][0];
    } else if (p[0][0] == p[0][2]) {
        x = p[0][1];
        y = (p[1][1] == p[1][0]) ? p[1][2] : p[1][0];
    } else if (p[0][1] == p[0][2]) {
        x = p[0][0];
        y = (p[1][0] == p[1][1]) ? p[1][2] : p[1][1];
    }

    printf("%d %d", x, y);

    return 0;
}

