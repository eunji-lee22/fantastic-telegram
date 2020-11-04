#include <stdio.h>

int getHouseMemberNumber (int a, int b); 

int main()
{
    int T=0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int k=0,n=0;
        scanf("%d", &k);
        scanf("%d", &n);

        printf("%d\n", getHouseMemberNumber(k, n));
    }    

    return 0;
}

int getHouseMemberNumber (int a, int b) {
    if(a == 0) return b;
    if(b == 1) return 1;

    return getHouseMemberNumber(a-1, b) + getHouseMemberNumber(a, b-1);
}