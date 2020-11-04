#include <stdio.h>

int main()
{
    int count[26] = {0};
    char str[101]= "";

    scanf("%s", str);

    for (int i = 0; i < 101; i++)
    {
        if(str[i] == '\0') break;
        count[str[i] - 97]++;
    }

    for (int i=0; i<26; i++)
        printf("%d ", count[i]);

    return 0;
}