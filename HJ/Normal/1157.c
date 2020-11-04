#include <stdio.h>

int main()
{
    char input[1000001] = "";
    int count[26] = {0};

    scanf("%s", &input);

    for (int i = 0; i < 1000001; i++)
    {
        if(input[i] == '\0') break;

        if(input[i]>=65 && input[i] <= 90) count[input[i]-65]++;
        if(input[i]>=97 && input[i] <= 122) count[input[i]-97]++;
    }    

    int check1=0,check2=0,c1=0,c2=0;

    for (int i = 0; i < 26; i++)
    {
        if(check1 < count[i]) {
            check1 = count[i];
            c1 = i;
        } else if (check2 < count[i]){
            check2 = count[i];
            c2 = i;
        }
    }

    if(check1 == check2) printf("?");
    else printf("%c", (check1>check2) ? c1+65 : c2+65);    
    
    return 0;
}
