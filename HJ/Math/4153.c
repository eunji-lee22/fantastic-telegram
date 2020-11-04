#include <stdio.h>

void func(int p1, int p2, int p3);

int main()
{
    unsigned int p1=0, p2=0, p3=0;
    unsigned int largeNumber = 0;

    do
    {
        scanf("%d %d %d", &p1, &p2, &p3);

        func(p1, p2, p3);
    } while (!(p1==0 && p2 == 0 && p3 == 0));

    return 0;
}

void func(int p1, int p2, int p3) {
    if (p1 == 0 && p2 == 0 && p3 == 0) return;
    
    unsigned int squareP1=0, squareP2=0, squareP3=0;
    squareP1 = p1*p1;
    squareP2 = p2*p2;
    squareP3 = p3*p3;

    if(squareP1 + squareP2 == squareP3) printf("right\n");
    else if (squareP2 + squareP3 == squareP1) printf("right\n");
    else if (squareP3 + squareP1 == squareP2) printf("right\n");
    else printf("wrong\n");
}