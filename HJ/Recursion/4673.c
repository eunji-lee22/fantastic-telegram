#include <stdio.h>

int getDn(int number);

int main()
{
    int data[10001] = {0};
    int dn = 0;

    for (int i = 1; i <= 10000; i++)
    {
        dn = i + getDn(i);
        if(dn > 10000) continue;
        data[dn]++;
    }

    for(int i=1; i<=10000; i++) {
        if(data[i] == 0) printf("%d\n", i);
    }

    return 0;
}

int getDn(int number){
    if(number==0) return 0;
    
    return number%10+getDn(number/10);
}