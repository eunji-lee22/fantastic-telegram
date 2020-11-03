#include <stdio.h>

int main()
{
    int N=0,sum=0;
    char s[101]="";

    scanf("%d", &N);
    //warning s는 배열이므로 &s -> s 로 사용
    scanf("%s", &s);
    
    for (int i = 0; i < N; i++)
    {
        sum += s[i] - '0';
    }

    printf("%d", sum);
    
    return 0;
}
